import { beforeAll, describe, expect, test } from '@jest/globals';

import * as Parser from 'web-tree-sitter';
import { loadParser } from '../src/parser';
import { addDebugPrintsToFunctions } from '../src/debug-prints-adder';
import { Position, TextEdit } from 'vscode-languageserver';

function splitText(text: string, pos: Position): string[] {
  const lineEndPattern = /\r?\n|\r|\n/g;
  let lineEnd = (text.match(lineEndPattern) ?? ['\n'])[0];

  const lines = text.split(lineEnd);
  let before = lines.slice(0, pos.line);
  before.push(lines[pos.line].slice(0, pos.character));
  let after = [lines[pos.line].slice(pos.character)];
  after.push(...lines.slice(pos.line + 1));

  return [before.join(lineEnd), after.join(lineEnd)];
}

function insertIntoString(text: string, edit: TextEdit): string {
  if (edit.range.start !== edit.range.end) {
    throw new Error('Not an insert edit!');
  }

  const [before, after] = splitText(text, edit.range.start);
  return before + edit.newText + after;
}

function compareInsertion(before: string, after: string) {
  const tree = parser.parse(before);
  const edits = addDebugPrintsToFunctions(tree);
  expect(edits.length).toEqual(1);
  const edit = edits[0];

  expect(insertIntoString(before, edit)).toEqual(after);
}

let parser: Parser;
beforeAll(async () => {
  parser = await loadParser();
});

describe('add debug prints to functions', () => {
  test('test split text', () => {
    const text = `abcd
efgh
ijkl
mnop
qrst`;

    const before = `abcd
efgh
ij`;
    const after = `kl
mnop
qrst`;

    expect(splitText(text, Position.create(2, 2))).toEqual([before, after]);
  });

  test('test text insert', () => {
    expect('hello world!').toEqual(
      insertIntoString('hello !', TextEdit.insert(Position.create(0, 6), 'world')),
    );
  });

  test('test empty string', () => {
    const tree = parser.parse('');
    const edits = addDebugPrintsToFunctions(tree);
    expect(edits.length).toEqual(0);
  });

  test('test empty functions block', () => {
    const tree = parser.parse('FUNCTIONS END FUNCTIONS;');
    const edits = addDebugPrintsToFunctions(tree);
    expect(edits.length).toEqual(0);
  });

  test('test function forward declaration', () => {
    const tree = parser.parse('FUNCTIONS FUNC foo; END FUNCTIONS;');
    const edits = addDebugPrintsToFunctions(tree);
    expect(edits.length).toEqual(0);
  });

  test('test empty function', () => {
    // prettier-ignore
    compareInsertion(
`FUNCTIONS
  FUNC my_func {};
END FUNCTIONS;`,

`FUNCTIONS
  FUNC my_func {
    PRINT(\"FUNC my_func\", EOLN);
  };
END FUNCTIONS;`,
    );
  });
});
