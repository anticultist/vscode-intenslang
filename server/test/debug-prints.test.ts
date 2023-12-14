import { beforeAll, describe, expect, test } from '@jest/globals';

import * as Parser from 'web-tree-sitter';
import { loadParser } from '../src/parser';
import { addDebugPrintsToFunctions } from '../src/debug-prints-adder';

let parser: Parser;

beforeAll(async () => {
  parser = await loadParser();
});

describe('add debug prints to functions', () => {
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
    const tree = parser.parse(
`FUNCTIONS
  FUNC my_func {};
END FUNCTIONS;`,
    );
    const edits = addDebugPrintsToFunctions(tree);
    expect(edits.length).toEqual(1);
    // TODO: check edit content
  });
});
