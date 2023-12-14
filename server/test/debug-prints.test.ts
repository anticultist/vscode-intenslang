import { beforeAll, describe, expect, test } from '@jest/globals';

import * as Parser from 'web-tree-sitter';
import { loadParser } from '../src/parser';
import { addDebugPrintsToFunctions } from '../src/debug-prints-adder';

let parser: Parser;

beforeAll(async () => {
  parser = await loadParser();
});

describe('add debug prints to functions', () => {
  test('test empty string', async () => {
    const tree = parser.parse('');
    const edits = addDebugPrintsToFunctions(tree);
    expect(edits.length).toEqual(0);
  });
});
