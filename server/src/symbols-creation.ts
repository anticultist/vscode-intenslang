import {
  Location,
  Position,
  Range,
  SymbolInformation,
  SymbolKind,
} from 'vscode-languageserver/node';

import * as Parser from 'web-tree-sitter';

export function symbolsFromAST(uri: string, root: Parser.Tree): SymbolInformation[] {
  const symbols: SymbolInformation[] = [];

  function scanTopLevelStructure(x: Parser.SyntaxNode) {
    switch (x.type) {
      case 'datapool_block':
        scanDatapoolBlock(uri, x, symbols);
        break;
      case 'db_manager_block':
        scanDBManagerBlock(uri, x, symbols);
        break;
      case 'functions_block':
        scanFunctionsBlock(uri, x, symbols);
        break;
      case 'language_block':
        scanLanguageBlock(uri, x, symbols);
        break;
      case 'operator_block':
        scanOperatorBlock(uri, x, symbols);
        break;
      case 'streamer_block':
        scanStreamerBlock(uri, x, symbols);
        break;
      case 'ui_manager_block':
        scanUIManagerBlock(uri, x, symbols);
        break;
    }
  }

  for (const syntax_node of root.rootNode.namedChildren) {
    scanTopLevelStructure(syntax_node);
  }

  return symbols;
}

function scanDatapoolBlock(uri: string, node: Parser.SyntaxNode, symbols: SymbolInformation[]) {
  symbols.push({
    name: 'DATAPOOL',
    kind: SymbolKind.Namespace,
    location: Location.create(
      uri,
      Range.create(
        Position.create(node.startPosition.row, node.startPosition.column),
        Position.create(node.endPosition.row, node.endPosition.column),
      ),
    ),
  });
}

function scanDBManagerBlock(uri: string, node: Parser.SyntaxNode, symbols: SymbolInformation[]) {
  symbols.push({
    name: 'DB_MANAGER',
    kind: SymbolKind.Namespace,
    location: Location.create(
      uri,
      Range.create(
        Position.create(node.startPosition.row, node.startPosition.column),
        Position.create(node.endPosition.row, node.endPosition.column),
      ),
    ),
  });
}

function scanFunctionsBlock(uri: string, node: Parser.SyntaxNode, symbols: SymbolInformation[]) {
  symbols.push({
    name: 'FUNCTIONS',
    kind: SymbolKind.Namespace,
    location: Location.create(
      uri,
      Range.create(
        Position.create(node.startPosition.row, node.startPosition.column),
        Position.create(node.endPosition.row, node.endPosition.column),
      ),
    ),
  });

  for (const child_node of node.namedChildren) {
    if (child_node.type !== 'functions_declaration') {
      continue;
    }

    for (const child_node_lv2 of child_node.namedChildren) {
      if (child_node_lv2.type !== 'function_declaration') {
        continue;
      }

      for (const child_node_lv3 of child_node_lv2.namedChildren) {
        if (child_node_lv3.type !== 'function_identifier') {
          continue;
        }

        symbols.push({
          name: child_node_lv3.text,
          kind: SymbolKind.Function,
          location: Location.create(
            uri,
            Range.create(
              Position.create(
                child_node_lv3.startPosition.row,
                child_node_lv3.startPosition.column,
              ),
              Position.create(child_node_lv2.endPosition.row, child_node_lv2.endPosition.column),
            ),
          ),
        });

        break;
      }
    }
  }
}

function scanLanguageBlock(uri: string, node: Parser.SyntaxNode, symbols: SymbolInformation[]) {
  symbols.push({
    name: 'LANGUAGE',
    kind: SymbolKind.Namespace,
    location: Location.create(
      uri,
      Range.create(
        Position.create(node.startPosition.row, node.startPosition.column),
        Position.create(node.endPosition.row, node.endPosition.column),
      ),
    ),
  });
}

function scanOperatorBlock(uri: string, node: Parser.SyntaxNode, symbols: SymbolInformation[]) {
  symbols.push({
    name: 'OPERATOR',
    kind: SymbolKind.Namespace,
    location: Location.create(
      uri,
      Range.create(
        Position.create(node.startPosition.row, node.startPosition.column),
        Position.create(node.endPosition.row, node.endPosition.column),
      ),
    ),
  });
}

function scanStreamerBlock(uri: string, node: Parser.SyntaxNode, symbols: SymbolInformation[]) {
  symbols.push({
    name: 'STREAMER',
    kind: SymbolKind.Namespace,
    location: Location.create(
      uri,
      Range.create(
        Position.create(node.startPosition.row, node.startPosition.column),
        Position.create(node.endPosition.row, node.endPosition.column),
      ),
    ),
  });
}

function scanUIManagerBlock(uri: string, node: Parser.SyntaxNode, symbols: SymbolInformation[]) {
  symbols.push({
    name: 'UI_MANAGER',
    kind: SymbolKind.Namespace,
    location: Location.create(
      uri,
      Range.create(
        Position.create(node.startPosition.row, node.startPosition.column),
        Position.create(node.endPosition.row, node.endPosition.column),
      ),
    ),
  });
}
