import * as Parser from 'web-tree-sitter';
import * as path from 'path';
import { readFileSync } from 'fs';

export async function loadParser() {
  // read the WebAssembly module as a buffer
  const wasmBuffer = readFileSync(path.resolve(__dirname, '..', 'tree-sitter-intens.wasm'));

  await Parser.init();
  const parser = new Parser();
  const MyLang = await Parser.Language.load(wasmBuffer);
  parser.setLanguage(MyLang);

  return parser;
}
