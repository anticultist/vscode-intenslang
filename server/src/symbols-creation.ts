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

  for (const child_node of node.namedChildren) {
    if (child_node.type === 'colors_declaration') {
      for (const child_node_lv2 of child_node.namedChildren) {
        if (child_node_lv2.type !== 'color_declaration') {
          continue;
        }

        for (const child_node_lv3 of child_node_lv2.namedChildren) {
          if (child_node_lv3.type !== 'color_identifier') {
            continue;
          }

          symbols.push({
            name: child_node_lv3.text,
            kind: SymbolKind.Variable,
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
    } else if (child_node.type === 'sets_declaration') {
      for (const child_node_lv2 of child_node.namedChildren) {
        if (child_node_lv2.type !== 'set_declaration') {
          continue;
        }

        for (const child_node_lv3 of child_node_lv2.namedChildren) {
          if (child_node_lv3.type !== 'set_identifier') {
            continue;
          }

          symbols.push({
            name: child_node_lv3.text,
            kind: SymbolKind.Enum,
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
    } else if (child_node.type === 'structure_declaration') {
      for (const child_node_lv2 of child_node.namedChildren) {
        if (child_node_lv2.type !== 'structure_identifier') {
          continue;
        }

        symbols.push({
          name: child_node_lv2.text,
          kind: SymbolKind.Struct,
          location: Location.create(
            uri,
            Range.create(
              Position.create(
                child_node_lv2.startPosition.row,
                child_node_lv2.startPosition.column,
              ),
              Position.create(child_node.endPosition.row, child_node.endPosition.column),
            ),
          ),
        });

        break;
      }
    } else if (
      child_node.type === 'variables_declaration' ||
      child_node.type === 'custom_variable_type_declaration'
    ) {
      for (const child_node_lv2 of child_node.namedChildren) {
        if (child_node_lv2.type !== 'variable_declaration') {
          continue;
        }

        for (const child_node_lv3 of child_node_lv2.namedChildren) {
          if (child_node_lv3.type !== 'variable_identifier') {
            continue;
          }

          symbols.push({
            name: child_node_lv3.text,
            kind: SymbolKind.Variable,
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
        if (child_node_lv3.type === 'function_identifier') {
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
        } else if (child_node_lv3.type === 'function_body') {
          for (const child_node_lv4 of child_node_lv3.namedChildren) {
            if (
              child_node_lv4.type === 'variables_declaration' ||
              child_node_lv4.type === 'custom_variable_type_declaration'
            ) {
              for (const child_node_lv5 of child_node_lv4.namedChildren) {
                if (child_node_lv5.type !== 'variable_declaration') {
                  continue;
                }

                for (const child_node_lv6 of child_node_lv5.namedChildren) {
                  if (child_node_lv6.type !== 'variable_identifier') {
                    continue;
                  }

                  symbols.push({
                    name: child_node_lv6.text,
                    kind: SymbolKind.Variable,
                    location: Location.create(
                      uri,
                      Range.create(
                        Position.create(
                          child_node_lv6.startPosition.row,
                          child_node_lv6.startPosition.column,
                        ),
                        Position.create(
                          child_node_lv5.endPosition.row,
                          child_node_lv5.endPosition.column,
                        ),
                      ),
                    ),
                  });

                  break;
                }
              }
            }
          }
        }
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

  for (const child_node of node.namedChildren) {
    if (child_node.type === 'operators_declaration') {
      for (const child_node_lv2 of child_node.namedChildren) {
        if (child_node_lv2.type !== 'operator_declaration') {
          continue;
        }

        for (const child_node_lv3 of child_node_lv2.namedChildren) {
          if (child_node_lv3.type !== 'operator_identifier') {
            continue;
          }

          symbols.push({
            name: child_node_lv3.text,
            kind: SymbolKind.Variable,
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
    } else if (child_node.type === 'tasks_declaration') {
      for (const child_node_lv2 of child_node.namedChildren) {
        if (child_node_lv2.type !== 'task_declaration') {
          continue;
        }

        for (const child_node_lv3 of child_node_lv2.namedChildren) {
          if (child_node_lv3.type !== 'task_identifier') {
            continue;
          }

          symbols.push({
            name: child_node_lv3.text,
            kind: SymbolKind.Variable,
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

  for (const child_node of node.namedChildren) {
    if (child_node.type !== 'stream_definition') {
      continue;
    }

    for (const child_node_lv2 of child_node.namedChildren) {
      if (child_node_lv2.type !== 'stream_identifier') {
        continue;
      }

      symbols.push({
        name: child_node_lv2.text,
        kind: SymbolKind.Variable,
        location: Location.create(
          uri,
          Range.create(
            Position.create(child_node_lv2.startPosition.row, child_node_lv2.startPosition.column),
            Position.create(child_node.endPosition.row, child_node.endPosition.column),
          ),
        ),
      });

      break;
    }
  }
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

  // TODO: add support for menu_declarations
  for (const child_node of node.namedChildren) {
    if (
      ![
        'field_group_declarations',
        'folder_declarations',
        'form_declarations',
        'plot_declarations',
        'ui_declarations',
        'table_declarations',
      ].includes(child_node.type)
    ) {
      continue;
    }

    for (const child_node_lv2 of child_node.namedChildren) {
      if (
        ![
          'field_group_declaration',
          'folder_declaration',
          'form_declaration',
          'plot_declaration',
          'ui_declaration',
          'table_declaration',
        ].includes(child_node_lv2.type)
      ) {
        continue;
      }

      for (const child_node_lv3 of child_node_lv2.namedChildren) {
        if (child_node_lv3.type !== 'ui_identifier') {
          continue;
        }

        symbols.push({
          name: child_node_lv3.text,
          kind: SymbolKind.Variable,
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
