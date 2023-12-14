import * as Parser from 'web-tree-sitter';
import * as path from 'path';

export async function loadParser() {
  await Parser.init();
  const parser = new Parser();
  const MyLang = await Parser.Language.load(
    path.resolve(__dirname, '..', 'tree-sitter-intens.wasm'),
  );
  parser.setLanguage(MyLang);

  return parser;
}
