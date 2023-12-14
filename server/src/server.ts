// Based on Microsoft LSP example
// https://github.com/microsoft/vscode-extension-samples/tree/main/lsp-sample

import {
  createConnection,
  Diagnostic,
  DiagnosticSeverity,
  DidChangeConfigurationNotification,
  DocumentSymbolParams,
  ExecuteCommandParams,
  InitializeParams,
  InitializeResult,
  Position,
  ProposedFeatures,
  Range,
  SymbolInformation,
  TextDocumentEdit,
  TextDocuments,
  TextDocumentSyncKind,
  TextEdit,
} from 'vscode-languageserver/node';

import { TextDocument } from 'vscode-languageserver-textdocument';

import { loadParser } from './parser';
import { symbolsFromAST } from './symbols-creation';
import { addDebugPrintsToFunctions } from './debug-prints-adder';

import * as Parser from 'web-tree-sitter';

// Create a connection for the server, using Node's IPC as a transport.
// Also include all preview / proposed LSP features.
let connection = createConnection(ProposedFeatures.all);

// Create a simple text document manager.
let documents: TextDocuments<TextDocument> = new TextDocuments(TextDocument);

var parser: Parser;

let hasConfigurationCapability: boolean = false;
let hasWorkspaceFolderCapability: boolean = false;
let hasDiagnosticRelatedInformationCapability: boolean = false;

const ADD_DEBUG_PRINTS_TO_FUNCTIONS = 'intensLanguageServer.addDebugPrintsToFunctions';

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
      executeCommandProvider: {
        commands: [ADD_DEBUG_PRINTS_TO_FUNCTIONS],
      },
    },
  };
  if (hasWorkspaceFolderCapability) {
    result.capabilities.workspace = {
      workspaceFolders: {
        supported: true,
      },
    };
  }

  parser = await loadParser();

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

connection.onExecuteCommand(async (params: ExecuteCommandParams) => {
  if (params.command === ADD_DEBUG_PRINTS_TO_FUNCTIONS) {
    if (!params.arguments || params.arguments.length < 2) {
      return;
    }

    const uri: string = params.arguments[0].external;
    const version: number = params.arguments[1];

    const document_text = documents.get(uri)?.getText();
    if (document_text === undefined) {
      return;
    }
    const tree = parser.parse(document_text);
    const edits = addDebugPrintsToFunctions(tree);

    await connection.workspace.applyEdit({
      documentChanges: [TextDocumentEdit.create({ uri: uri, version: version }, edits)],
    });
  }
});

// Make the text document manager listen on the connection
// for open, change and close text document events
documents.listen(connection);

// Listen on the connection
connection.listen();
