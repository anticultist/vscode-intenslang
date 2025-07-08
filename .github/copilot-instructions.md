# VS Code Extension: Language Support for INTENS

This is an unofficial Visual Studio Code extension that provides comprehensive language support for the INTENS programming language developed by Semafor AG. INTENS is a domain-specific language used for industrial automation, measurement systems, and data acquisition applications.

## About INTENS Language

INTENS is a structured programming language with the following characteristics:

- **File Extensions:** `.des`, `.inc`, `.des.in`, `.inc.in`
- **Purpose:** Industrial automation, measurement systems, data acquisition
- **Structure:** Block-based language with specific sections (DATAPOOL, STREAMER, OPERATOR, FUNCTIONS, etc.)
- **Syntax:** Pascal-like syntax with uppercase keywords and structured blocks

### Typical INTENS Program Structure:

```intens
DESCRIPTION "Program Description";
INCLUDE file.inc

DATAPOOL
  // Variable declarations with types and attributes
END DATAPOOL;

STREAMER
  // Data streaming configurations
END STREAMER;

OPERATOR
  // Socket and communication definitions
END OPERATOR;

FUNCTIONS
  // Function definitions and business logic
END FUNCTIONS;
```

## Features

- **Syntax Highlighting:** Complete TextMate grammar for INTENS syntax
- **Language Server Features:**
  - Document symbols and breadcrumbs navigation
  - Syntax error detection and highlighting
  - Symbol listing in outline view
- **Markdown Integration:** Code blocks in markdown files with `intens` language identifier
- **Debug Print Insertion:** Tool for adding debug statements to functions

## Technology Stack & Architecture

### Core Technologies

- **VS Code Extension API:** Extension host integration and UI features
- **TypeScript:** Primary development language (strict mode enabled)
- **Language Server Protocol (LSP):** Client-server architecture for language features
- **Tree-sitter Parser:** Custom grammar for robust syntax parsing
- **WebAssembly:** Efficient Tree-sitter parser execution in extension context
- **TextMate Grammar:** Syntax highlighting engine integration

### Build & Testing Tools

- **Webpack:** Bundling for both client and server components
- **Jest:** Unit and integration testing framework
- **Docker:** Cross-platform Tree-sitter WASM compilation
- **vscode-tmgrammar-test:** TextMate grammar validation

## Key Implementation Details

### INTENS Language Blocks

- **DATAPOOL:** Variable declarations with types (STRING, INTEGER, REAL, COMPLEX, CDATA)
- **STREAMER:** Data stream definitions for I/O operations
- **OPERATOR:** Socket and communication channel configurations
- **FUNCTIONS:** Function definitions with conditional logic and built-in functions
- **UI_MANAGER:** User interface component definitions
- **DB_MANAGER:** Database integration (limited support)
- **LANGUAGE:** Localization and language settings

### Built-in Types & Keywords

- **Primitive Types:** STRING, INTEGER, REAL, COMPLEX, CDATA
- **Boolean Values:** TRUE, FALSE
- **Special Values:** EOLN, INVALID, NONE
- **Control Flow:** IF, ELSE, WHILE, FOR
- **Functions:** MESSAGEBOX, COMPOSE, LOG, and many others

## Development Guidelines

### Coding Standards

- **Indentation:** 2 spaces (no tabs)
- **String Quotes:** Single quotes for TypeScript/JavaScript
- **TypeScript:** Strict mode enabled, explicit types preferred
- **File Organization:** Feature-based module structure
- **Testing:** Comprehensive test coverage for grammar and language features

### Extension Development Patterns

- Follow VS Code extension best practices
- Use proper LSP client-server communication
- Implement incremental parsing for performance
- Handle large files efficiently
- Provide meaningful error messages and diagnostics
