import { Position, TextEdit } from 'vscode-languageserver/node';

import * as Parser from 'web-tree-sitter';

export function addDebugPrintsToFunctions(root: Parser.Tree): TextEdit[] {
  const textEdits: TextEdit[] = [];

  function scanTopLevelStructure(x: Parser.SyntaxNode) {
    switch (x.type) {
      case 'functions_block':
        scanFunctionsBlock(x, textEdits);
        break;
    }
  }

  for (const syntax_node of root.rootNode.namedChildren) {
    scanTopLevelStructure(syntax_node);
  }

  return textEdits;
}

function scanFunctionsBlock(node: Parser.SyntaxNode, textEdits: TextEdit[]) {
  for (const child_node of node.namedChildren) {
    if (child_node.type !== 'functions_declaration') {
      continue;
    }

    for (const child_node_lv2 of child_node.namedChildren) {
      if (child_node_lv2.type !== 'function_declaration') {
        continue;
      }

      let functionName;
      for (const child_node_lv3 of child_node_lv2.namedChildren) {
        if (child_node_lv3.type === 'function_identifier') {
          functionName = child_node_lv3.text;
        } else if (child_node_lv3.type === 'function_body' && functionName !== undefined) {
          addDebugPrintAfterVariableDeclarations(child_node_lv3, textEdits, functionName);
        }
      }
    }
  }
}

function addDebugPrintAfterVariableDeclarations(
  node: Parser.SyntaxNode,
  textEdits: TextEdit[],
  functionName: string,
) {
  let insertAfterPosition = node.startPosition;
  insertAfterPosition.column += 1;

  for (const child_node of node.namedChildren) {
    if (
      !(
        child_node.type === 'variables_declaration' ||
        child_node.type === 'custom_variable_type_declaration' ||
        child_node.type === 'comment'
      )
    ) {
      break;
    }

    insertAfterPosition = child_node.endPosition;
  }

  textEdits.push(
    TextEdit.insert(
      Position.create(insertAfterPosition.row, insertAfterPosition.column),
      // TODO: add dynamic indentation
      `\n    PRINT("FUNC ${functionName}", EOLN);\n`,
    ),
  );
}
