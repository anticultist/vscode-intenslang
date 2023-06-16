# INTENS syntax highlighting

This is an unofficial package to provide syntax highlighting for the so called [INTENS](https://www.semafor.ch/en/products/intens/)&reg; language of the company Semafor AG.

## Features

- Syntax highlighting
- Language server features

  - bread crumbs and resource symbol listing
  - Highlighting of syntax errors (experimental)

## Showcase

![Screenshot](./images/screenshot.png)

## Configuration

To activate the experimental error checking go to the settings and search for `intensLanguageServer.showProblems`.

![Screenshot](./images/show_problems.png)

## Known issues

- unsupported or bad supported features
  - `DB_MANAGER` block
  - C/C++ preprocessor directives
