// Based on Microsoft LSP example
// https://github.com/microsoft/vscode-extension-samples/tree/main/lsp-sample

import {
  createConnection,
  Diagnostic,
  DiagnosticSeverity,
  DidChangeConfigurationNotification,
  DocumentSymbolParams,
  InitializeParams,
  InitializeResult,
  Position,
  ProposedFeatures,
  Range,
  SymbolInformation,
  TextDocuments,
  TextDocumentSyncKind,
} from 'vscode-languageserver/node';

import { TextDocument } from 'vscode-languageserver-textdocument';

import { symbolsFromAST } from './symbols-creation';

import * as Parser from 'web-tree-sitter';
import * as path from 'path';

async function loadParser() {
  await Parser.init();
  parser = new Parser();
  const MyLang = await Parser.Language.load(
    path.resolve(__dirname, '..', 'tree-sitter-intens.wasm'),
  );
  parser.setLanguage(MyLang);
}

// Create a connection for the server, using Node's IPC as a transport.
// Also include all preview / proposed LSP features.
let connection = createConnection(ProposedFeatures.all);

// Create a simple text document manager.
let documents: TextDocuments<TextDocument> = new TextDocuments(TextDocument);

var parser: Parser;

let hasConfigurationCapability: boolean = false;
let hasWorkspaceFolderCapability: boolean = false;
let hasDiagnosticRelatedInformationCapability: boolean = false;

connection.onInitialize(async (params: InitializeParams) => {
  let capabilities = params.capabilities;

  // Does the client support the `workspace/configuration` request?
  // If not, we fall back using global settings.
  hasConfigurationCapability = !!(capabilities.workspace && !!capabilities.workspace.configuration);
  hasWorkspaceFolderCapability = !!(
    capabilities.workspace && !!capabilities.workspace.workspaceFolders
  );
  hasDiagnosticRelatedInformationCapability = !!(
    capabilities.textDocument &&
    capabilities.textDocument.publishDiagnostics &&
    capabilities.textDocument.publishDiagnostics.relatedInformation
  );

  const result: InitializeResult = {
    capabilities: {
      textDocumentSync: TextDocumentSyncKind.Incremental,
      documentSymbolProvider: true,
    },
  };
  if (hasWorkspaceFolderCapability) {
    result.capabilities.workspace = {
      workspaceFolders: {
        supported: true,
      },
    };
  }

  await loadParser();

  return result;
});

connection.onInitialized(() => {
  if (hasConfigurationCapability) {
    // Register for all configuration changes.
    connection.client.register(DidChangeConfigurationNotification.type, undefined);
  }
  if (hasWorkspaceFolderCapability) {
    connection.workspace.onDidChangeWorkspaceFolders((_event) => {});
  }
});

// The MS Access dump format settings
interface IntensSettings {
  showProblems: boolean;
  maxNumberOfProblems: number;
}

// The global settings, used when the `workspace/configuration` request is not supported by the client.
// Please note that this is not the case when using this server with the client provided in this example
// but could happen with other clients.
const defaultSettings: IntensSettings = { showProblems: false, maxNumberOfProblems: 100 };
let globalSettings: IntensSettings = defaultSettings;

// Cache the settings of all open documents
let documentSettings: Map<string, Thenable<IntensSettings>> = new Map();

connection.onDidChangeConfiguration((change) => {
  if (hasConfigurationCapability) {
    // Reset all cached document settings
    documentSettings.clear();
  } else {
    globalSettings = <IntensSettings>(change.settings.intensLanguageServer || defaultSettings);
  }

  // Revalidate all open text documents
  documents.all().forEach(validateTextDocument);
});

function getDocumentSettings(resource: string): Thenable<IntensSettings> {
  if (!hasConfigurationCapability) {
    return Promise.resolve(globalSettings);
  }
  let result = documentSettings.get(resource);
  if (!result) {
    result = connection.workspace.getConfiguration({
      scopeUri: resource,
      section: 'intensLanguageServer',
    });
    documentSettings.set(resource, result);
  }
  return result;
}

// Only keep settings for open documents
documents.onDidClose((e) => {
  documentSettings.delete(e.document.uri);
});

// The content of a text document has changed. This event is emitted
// when the text document first opened or when its content has changed.
documents.onDidChangeContent((change) => {
  validateTextDocument(change.document);
});

async function validateTextDocument(textDocument: TextDocument): Promise<void> {
  let settings = await getDocumentSettings(textDocument.uri);
  if (!settings.showProblems || settings.maxNumberOfProblems <= 0) {
    connection.sendDiagnostics({ uri: textDocument.uri, diagnostics: [] });
    return;
  }

  const document_text = textDocument.getText();
  const tree = parser.parse(document_text);

  let problems = 0;
  const diagnostics: Diagnostic[] = [];

  function lookForProblems(syntax_node: Parser.SyntaxNode) {
    if (problems >= settings.maxNumberOfProblems) {
      return;
    }

    if (syntax_node.type !== 'ERROR') {
      for (const child_node of syntax_node.namedChildren) {
        lookForProblems(child_node);
      }

      return;
    }
    problems++;

    const diagnostic: Diagnostic = {
      severity: DiagnosticSeverity.Error,
      range: Range.create(
        Position.create(syntax_node.startPosition.row, syntax_node.startPosition.column),
        Position.create(syntax_node.endPosition.row, syntax_node.endPosition.column),
      ),
      message: `Could not parse expression`,
      source: textDocument.uri,
    };
    diagnostics.push(diagnostic);
  }

  lookForProblems(tree.rootNode);

  connection.sendDiagnostics({ uri: textDocument.uri, diagnostics });
}

connection.onDidChangeWatchedFiles((_change) => {});

connection.onDocumentSymbol((params: DocumentSymbolParams): SymbolInformation[] => {
  if (parser === undefined) {
    return [];
  }

  const document_text = documents.get(params.textDocument.uri)?.getText();
  if (document_text === undefined) {
    return [];
  }

  const tree = parser.parse(document_text);
  return symbolsFromAST(params.textDocument.uri, tree);
});

// Make the text document manager listen on the connection
// for open, change and close text document events
documents.listen(connection);

// Listen on the connection
connection.listen();
