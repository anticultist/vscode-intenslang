#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_identifier = 1,
  sym_comment = 2,
  anon_sym_DQUOTE = 3,
  aux_sym_string_token1 = 4,
  sym_number = 5,
  sym_true = 6,
  sym_false = 7,
  sym_eoln = 8,
  sym_invalid = 9,
  sym_none = 10,
  anon_sym_REASON_ACTIVATE = 11,
  anon_sym_REASON_CLEAR = 12,
  anon_sym_REASON_CLOSE = 13,
  anon_sym_REASON_CONNECTION = 14,
  anon_sym_REASON_DROP = 15,
  anon_sym_REASON_DUPLICATE = 16,
  anon_sym_REASON_INPUT = 17,
  anon_sym_REASON_INSERT = 18,
  anon_sym_REASON_MOVE = 19,
  anon_sym_REASON_OPEN = 20,
  anon_sym_REASON_PACK = 21,
  anon_sym_REASON_REMOVE = 22,
  anon_sym_REASON_REMOVE_CONNECTION = 23,
  anon_sym_REASON_REMOVE_ELEMENT = 24,
  anon_sym_REASON_SELECT = 25,
  anon_sym_REASON_SELECT_POINT = 26,
  anon_sym_REASON_SELECT_RECTANGLE = 27,
  anon_sym_REASON_UNSELECT = 28,
  anon_sym_DATAPOOL = 29,
  anon_sym_END = 30,
  anon_sym_SEMI = 31,
  sym_source_file = 32,
  sym__high_level_blocks = 33,
  sym__expression = 34,
  sym_string = 35,
  sym_reason = 36,
  sym_datapool_block = 37,
  sym__datapool_block_expression = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_string_repeat1 = 40,
  aux_sym_datapool_block_repeat1 = 41,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_eoln] = "eoln",
  [sym_invalid] = "invalid",
  [sym_none] = "none",
  [anon_sym_REASON_ACTIVATE] = "REASON_ACTIVATE",
  [anon_sym_REASON_CLEAR] = "REASON_CLEAR",
  [anon_sym_REASON_CLOSE] = "REASON_CLOSE",
  [anon_sym_REASON_CONNECTION] = "REASON_CONNECTION",
  [anon_sym_REASON_DROP] = "REASON_DROP",
  [anon_sym_REASON_DUPLICATE] = "REASON_DUPLICATE",
  [anon_sym_REASON_INPUT] = "REASON_INPUT",
  [anon_sym_REASON_INSERT] = "REASON_INSERT",
  [anon_sym_REASON_MOVE] = "REASON_MOVE",
  [anon_sym_REASON_OPEN] = "REASON_OPEN",
  [anon_sym_REASON_PACK] = "REASON_PACK",
  [anon_sym_REASON_REMOVE] = "REASON_REMOVE",
  [anon_sym_REASON_REMOVE_CONNECTION] = "REASON_REMOVE_CONNECTION",
  [anon_sym_REASON_REMOVE_ELEMENT] = "REASON_REMOVE_ELEMENT",
  [anon_sym_REASON_SELECT] = "REASON_SELECT",
  [anon_sym_REASON_SELECT_POINT] = "REASON_SELECT_POINT",
  [anon_sym_REASON_SELECT_RECTANGLE] = "REASON_SELECT_RECTANGLE",
  [anon_sym_REASON_UNSELECT] = "REASON_UNSELECT",
  [anon_sym_DATAPOOL] = "DATAPOOL",
  [anon_sym_END] = "END",
  [anon_sym_SEMI] = ";",
  [sym_source_file] = "source_file",
  [sym__high_level_blocks] = "_high_level_blocks",
  [sym__expression] = "_expression",
  [sym_string] = "string",
  [sym_reason] = "reason",
  [sym_datapool_block] = "datapool_block",
  [sym__datapool_block_expression] = "_datapool_block_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_datapool_block_repeat1] = "datapool_block_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_eoln] = sym_eoln,
  [sym_invalid] = sym_invalid,
  [sym_none] = sym_none,
  [anon_sym_REASON_ACTIVATE] = anon_sym_REASON_ACTIVATE,
  [anon_sym_REASON_CLEAR] = anon_sym_REASON_CLEAR,
  [anon_sym_REASON_CLOSE] = anon_sym_REASON_CLOSE,
  [anon_sym_REASON_CONNECTION] = anon_sym_REASON_CONNECTION,
  [anon_sym_REASON_DROP] = anon_sym_REASON_DROP,
  [anon_sym_REASON_DUPLICATE] = anon_sym_REASON_DUPLICATE,
  [anon_sym_REASON_INPUT] = anon_sym_REASON_INPUT,
  [anon_sym_REASON_INSERT] = anon_sym_REASON_INSERT,
  [anon_sym_REASON_MOVE] = anon_sym_REASON_MOVE,
  [anon_sym_REASON_OPEN] = anon_sym_REASON_OPEN,
  [anon_sym_REASON_PACK] = anon_sym_REASON_PACK,
  [anon_sym_REASON_REMOVE] = anon_sym_REASON_REMOVE,
  [anon_sym_REASON_REMOVE_CONNECTION] = anon_sym_REASON_REMOVE_CONNECTION,
  [anon_sym_REASON_REMOVE_ELEMENT] = anon_sym_REASON_REMOVE_ELEMENT,
  [anon_sym_REASON_SELECT] = anon_sym_REASON_SELECT,
  [anon_sym_REASON_SELECT_POINT] = anon_sym_REASON_SELECT_POINT,
  [anon_sym_REASON_SELECT_RECTANGLE] = anon_sym_REASON_SELECT_RECTANGLE,
  [anon_sym_REASON_UNSELECT] = anon_sym_REASON_UNSELECT,
  [anon_sym_DATAPOOL] = anon_sym_DATAPOOL,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_source_file] = sym_source_file,
  [sym__high_level_blocks] = sym__high_level_blocks,
  [sym__expression] = sym__expression,
  [sym_string] = sym_string,
  [sym_reason] = sym_reason,
  [sym_datapool_block] = sym_datapool_block,
  [sym__datapool_block_expression] = sym__datapool_block_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_datapool_block_repeat1] = aux_sym_datapool_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_eoln] = {
    .visible = true,
    .named = true,
  },
  [sym_invalid] = {
    .visible = true,
    .named = true,
  },
  [sym_none] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_REASON_ACTIVATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_CLEAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_CLOSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_CONNECTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_DROP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_DUPLICATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_INPUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_INSERT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_MOVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_OPEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_PACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_REMOVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_REMOVE_CONNECTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_REMOVE_ELEMENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_SELECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_SELECT_POINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_SELECT_RECTANGLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_UNSELECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATAPOOL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__high_level_blocks] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_reason] = {
    .visible = true,
    .named = true,
  },
  [sym_datapool_block] = {
    .visible = true,
    .named = true,
  },
  [sym__datapool_block_expression] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_datapool_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'D') ADVANCE(1);
      if (lookahead == 'E') ADVANCE(2);
      if (lookahead == 'F') ADVANCE(3);
      if (lookahead == 'I') ADVANCE(4);
      if (lookahead == 'N') ADVANCE(5);
      if (lookahead == 'R') ADVANCE(6);
      if (lookahead == 'T') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'N') ADVANCE(9);
      if (lookahead == 'O') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'O') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'L') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'L') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'V') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'N') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'U') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(24);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 18:
      if (lookahead == 'N') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'S') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'S') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'P') ADVANCE(31);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_eoln);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(33);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 29:
      if (lookahead == 'O') ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 31:
      if (lookahead == 'O') ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 33:
      if (lookahead == 'I') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'O') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'L') ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_invalid);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'C') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(44);
      if (lookahead == 'I') ADVANCE(45);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'O') ADVANCE(47);
      if (lookahead == 'P') ADVANCE(48);
      if (lookahead == 'R') ADVANCE(49);
      if (lookahead == 'S') ADVANCE(50);
      if (lookahead == 'U') ADVANCE(51);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DATAPOOL);
      END_STATE();
    case 42:
      if (lookahead == 'C') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 'L') ADVANCE(53);
      if (lookahead == 'O') ADVANCE(54);
      END_STATE();
    case 44:
      if (lookahead == 'R') ADVANCE(55);
      if (lookahead == 'U') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'N') ADVANCE(57);
      END_STATE();
    case 46:
      if (lookahead == 'O') ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == 'P') ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'N') ADVANCE(63);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(64);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(65);
      if (lookahead == 'O') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'N') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 'O') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'P') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'P') ADVANCE(70);
      if (lookahead == 'S') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 'V') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(73);
      END_STATE();
    case 60:
      if (lookahead == 'C') ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == 'M') ADVANCE(75);
      END_STATE();
    case 62:
      if (lookahead == 'L') ADVANCE(76);
      END_STATE();
    case 63:
      if (lookahead == 'S') ADVANCE(77);
      END_STATE();
    case 64:
      if (lookahead == 'I') ADVANCE(78);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(79);
      END_STATE();
    case 66:
      if (lookahead == 'S') ADVANCE(80);
      END_STATE();
    case 67:
      if (lookahead == 'N') ADVANCE(81);
      END_STATE();
    case 68:
      if (lookahead == 'P') ADVANCE(82);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(83);
      END_STATE();
    case 70:
      if (lookahead == 'U') ADVANCE(84);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(85);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(87);
      END_STATE();
    case 74:
      if (lookahead == 'K') ADVANCE(88);
      END_STATE();
    case 75:
      if (lookahead == 'O') ADVANCE(89);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(91);
      END_STATE();
    case 78:
      if (lookahead == 'V') ADVANCE(92);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(95);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_REASON_DROP);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(96);
      END_STATE();
    case 84:
      if (lookahead == 'T') ADVANCE(97);
      END_STATE();
    case 85:
      if (lookahead == 'R') ADVANCE(98);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_REASON_MOVE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_REASON_OPEN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_REASON_PACK);
      END_STATE();
    case 89:
      if (lookahead == 'V') ADVANCE(99);
      END_STATE();
    case 90:
      if (lookahead == 'C') ADVANCE(100);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(101);
      END_STATE();
    case 92:
      if (lookahead == 'A') ADVANCE(102);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_REASON_CLEAR);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_REASON_CLOSE);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(103);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(104);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_REASON_INPUT);
      END_STATE();
    case 98:
      if (lookahead == 'T') ADVANCE(105);
      END_STATE();
    case 99:
      if (lookahead == 'E') ADVANCE(106);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(107);
      END_STATE();
    case 101:
      if (lookahead == 'E') ADVANCE(108);
      END_STATE();
    case 102:
      if (lookahead == 'T') ADVANCE(109);
      END_STATE();
    case 103:
      if (lookahead == 'T') ADVANCE(110);
      END_STATE();
    case 104:
      if (lookahead == 'A') ADVANCE(111);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_REASON_INSERT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE);
      if (lookahead == '_') ADVANCE(112);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT);
      if (lookahead == '_') ADVANCE(113);
      END_STATE();
    case 108:
      if (lookahead == 'C') ADVANCE(114);
      END_STATE();
    case 109:
      if (lookahead == 'E') ADVANCE(115);
      END_STATE();
    case 110:
      if (lookahead == 'I') ADVANCE(116);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(117);
      END_STATE();
    case 112:
      if (lookahead == 'C') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(119);
      END_STATE();
    case 113:
      if (lookahead == 'P') ADVANCE(120);
      if (lookahead == 'R') ADVANCE(121);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_REASON_ACTIVATE);
      END_STATE();
    case 116:
      if (lookahead == 'O') ADVANCE(123);
      END_STATE();
    case 117:
      if (lookahead == 'E') ADVANCE(124);
      END_STATE();
    case 118:
      if (lookahead == 'O') ADVANCE(125);
      END_STATE();
    case 119:
      if (lookahead == 'L') ADVANCE(126);
      END_STATE();
    case 120:
      if (lookahead == 'O') ADVANCE(127);
      END_STATE();
    case 121:
      if (lookahead == 'E') ADVANCE(128);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_REASON_UNSELECT);
      END_STATE();
    case 123:
      if (lookahead == 'N') ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_REASON_DUPLICATE);
      END_STATE();
    case 125:
      if (lookahead == 'N') ADVANCE(130);
      END_STATE();
    case 126:
      if (lookahead == 'E') ADVANCE(131);
      END_STATE();
    case 127:
      if (lookahead == 'I') ADVANCE(132);
      END_STATE();
    case 128:
      if (lookahead == 'C') ADVANCE(133);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_REASON_CONNECTION);
      END_STATE();
    case 130:
      if (lookahead == 'N') ADVANCE(134);
      END_STATE();
    case 131:
      if (lookahead == 'M') ADVANCE(135);
      END_STATE();
    case 132:
      if (lookahead == 'N') ADVANCE(136);
      END_STATE();
    case 133:
      if (lookahead == 'T') ADVANCE(137);
      END_STATE();
    case 134:
      if (lookahead == 'E') ADVANCE(138);
      END_STATE();
    case 135:
      if (lookahead == 'E') ADVANCE(139);
      END_STATE();
    case 136:
      if (lookahead == 'T') ADVANCE(140);
      END_STATE();
    case 137:
      if (lookahead == 'A') ADVANCE(141);
      END_STATE();
    case 138:
      if (lookahead == 'C') ADVANCE(142);
      END_STATE();
    case 139:
      if (lookahead == 'N') ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_POINT);
      END_STATE();
    case 141:
      if (lookahead == 'N') ADVANCE(144);
      END_STATE();
    case 142:
      if (lookahead == 'T') ADVANCE(145);
      END_STATE();
    case 143:
      if (lookahead == 'T') ADVANCE(146);
      END_STATE();
    case 144:
      if (lookahead == 'G') ADVANCE(147);
      END_STATE();
    case 145:
      if (lookahead == 'I') ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_ELEMENT);
      END_STATE();
    case 147:
      if (lookahead == 'L') ADVANCE(149);
      END_STATE();
    case 148:
      if (lookahead == 'O') ADVANCE(150);
      END_STATE();
    case 149:
      if (lookahead == 'E') ADVANCE(151);
      END_STATE();
    case 150:
      if (lookahead == 'N') ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_RECTANGLE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_CONNECTION);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_eoln] = ACTIONS(1),
    [sym_invalid] = ACTIONS(1),
    [sym_none] = ACTIONS(1),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(1),
    [anon_sym_REASON_CLEAR] = ACTIONS(1),
    [anon_sym_REASON_CLOSE] = ACTIONS(1),
    [anon_sym_REASON_CONNECTION] = ACTIONS(1),
    [anon_sym_REASON_DROP] = ACTIONS(1),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(1),
    [anon_sym_REASON_INPUT] = ACTIONS(1),
    [anon_sym_REASON_INSERT] = ACTIONS(1),
    [anon_sym_REASON_MOVE] = ACTIONS(1),
    [anon_sym_REASON_OPEN] = ACTIONS(1),
    [anon_sym_REASON_PACK] = ACTIONS(1),
    [anon_sym_REASON_REMOVE] = ACTIONS(1),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(1),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(1),
    [anon_sym_REASON_SELECT] = ACTIONS(1),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(1),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(1),
    [anon_sym_REASON_UNSELECT] = ACTIONS(1),
    [anon_sym_DATAPOOL] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym__high_level_blocks] = STATE(3),
    [sym__expression] = STATE(3),
    [sym_string] = STATE(3),
    [sym_reason] = STATE(3),
    [sym_datapool_block] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_number] = ACTIONS(5),
    [sym_true] = ACTIONS(5),
    [sym_false] = ACTIONS(5),
    [sym_eoln] = ACTIONS(5),
    [sym_invalid] = ACTIONS(5),
    [sym_none] = ACTIONS(5),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(9),
    [anon_sym_REASON_CLEAR] = ACTIONS(9),
    [anon_sym_REASON_CLOSE] = ACTIONS(9),
    [anon_sym_REASON_CONNECTION] = ACTIONS(9),
    [anon_sym_REASON_DROP] = ACTIONS(9),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(9),
    [anon_sym_REASON_INPUT] = ACTIONS(9),
    [anon_sym_REASON_INSERT] = ACTIONS(9),
    [anon_sym_REASON_MOVE] = ACTIONS(9),
    [anon_sym_REASON_OPEN] = ACTIONS(9),
    [anon_sym_REASON_PACK] = ACTIONS(9),
    [anon_sym_REASON_REMOVE] = ACTIONS(11),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(9),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(9),
    [anon_sym_REASON_SELECT] = ACTIONS(11),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(9),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(9),
    [anon_sym_REASON_UNSELECT] = ACTIONS(9),
    [anon_sym_DATAPOOL] = ACTIONS(13),
  },
  [2] = {
    [sym__high_level_blocks] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [sym_reason] = STATE(2),
    [sym_datapool_block] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(20),
    [sym_number] = ACTIONS(17),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_eoln] = ACTIONS(17),
    [sym_invalid] = ACTIONS(17),
    [sym_none] = ACTIONS(17),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(23),
    [anon_sym_REASON_CLEAR] = ACTIONS(23),
    [anon_sym_REASON_CLOSE] = ACTIONS(23),
    [anon_sym_REASON_CONNECTION] = ACTIONS(23),
    [anon_sym_REASON_DROP] = ACTIONS(23),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(23),
    [anon_sym_REASON_INPUT] = ACTIONS(23),
    [anon_sym_REASON_INSERT] = ACTIONS(23),
    [anon_sym_REASON_MOVE] = ACTIONS(23),
    [anon_sym_REASON_OPEN] = ACTIONS(23),
    [anon_sym_REASON_PACK] = ACTIONS(23),
    [anon_sym_REASON_REMOVE] = ACTIONS(26),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(23),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(23),
    [anon_sym_REASON_SELECT] = ACTIONS(26),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(23),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(23),
    [anon_sym_REASON_UNSELECT] = ACTIONS(23),
    [anon_sym_DATAPOOL] = ACTIONS(29),
  },
  [3] = {
    [sym__high_level_blocks] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [sym_reason] = STATE(2),
    [sym_datapool_block] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_number] = ACTIONS(34),
    [sym_true] = ACTIONS(34),
    [sym_false] = ACTIONS(34),
    [sym_eoln] = ACTIONS(34),
    [sym_invalid] = ACTIONS(34),
    [sym_none] = ACTIONS(34),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(9),
    [anon_sym_REASON_CLEAR] = ACTIONS(9),
    [anon_sym_REASON_CLOSE] = ACTIONS(9),
    [anon_sym_REASON_CONNECTION] = ACTIONS(9),
    [anon_sym_REASON_DROP] = ACTIONS(9),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(9),
    [anon_sym_REASON_INPUT] = ACTIONS(9),
    [anon_sym_REASON_INSERT] = ACTIONS(9),
    [anon_sym_REASON_MOVE] = ACTIONS(9),
    [anon_sym_REASON_OPEN] = ACTIONS(9),
    [anon_sym_REASON_PACK] = ACTIONS(9),
    [anon_sym_REASON_REMOVE] = ACTIONS(11),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(9),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(9),
    [anon_sym_REASON_SELECT] = ACTIONS(11),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(9),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(9),
    [anon_sym_REASON_UNSELECT] = ACTIONS(9),
    [anon_sym_DATAPOOL] = ACTIONS(13),
  },
  [4] = {
    [sym__expression] = STATE(5),
    [sym_string] = STATE(5),
    [sym_reason] = STATE(5),
    [sym__datapool_block_expression] = STATE(5),
    [aux_sym_datapool_block_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(36),
    [anon_sym_DQUOTE] = ACTIONS(38),
    [sym_number] = ACTIONS(36),
    [sym_true] = ACTIONS(36),
    [sym_false] = ACTIONS(36),
    [sym_eoln] = ACTIONS(36),
    [sym_invalid] = ACTIONS(36),
    [sym_none] = ACTIONS(36),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(40),
    [anon_sym_REASON_CLEAR] = ACTIONS(40),
    [anon_sym_REASON_CLOSE] = ACTIONS(40),
    [anon_sym_REASON_CONNECTION] = ACTIONS(40),
    [anon_sym_REASON_DROP] = ACTIONS(40),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(40),
    [anon_sym_REASON_INPUT] = ACTIONS(40),
    [anon_sym_REASON_INSERT] = ACTIONS(40),
    [anon_sym_REASON_MOVE] = ACTIONS(40),
    [anon_sym_REASON_OPEN] = ACTIONS(40),
    [anon_sym_REASON_PACK] = ACTIONS(40),
    [anon_sym_REASON_REMOVE] = ACTIONS(42),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(40),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(40),
    [anon_sym_REASON_SELECT] = ACTIONS(42),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(40),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(40),
    [anon_sym_REASON_UNSELECT] = ACTIONS(40),
    [anon_sym_END] = ACTIONS(44),
  },
  [5] = {
    [sym__expression] = STATE(5),
    [sym_string] = STATE(5),
    [sym_reason] = STATE(5),
    [sym__datapool_block_expression] = STATE(5),
    [aux_sym_datapool_block_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(46),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(46),
    [sym_true] = ACTIONS(46),
    [sym_false] = ACTIONS(46),
    [sym_eoln] = ACTIONS(46),
    [sym_invalid] = ACTIONS(46),
    [sym_none] = ACTIONS(46),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(52),
    [anon_sym_REASON_CLEAR] = ACTIONS(52),
    [anon_sym_REASON_CLOSE] = ACTIONS(52),
    [anon_sym_REASON_CONNECTION] = ACTIONS(52),
    [anon_sym_REASON_DROP] = ACTIONS(52),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(52),
    [anon_sym_REASON_INPUT] = ACTIONS(52),
    [anon_sym_REASON_INSERT] = ACTIONS(52),
    [anon_sym_REASON_MOVE] = ACTIONS(52),
    [anon_sym_REASON_OPEN] = ACTIONS(52),
    [anon_sym_REASON_PACK] = ACTIONS(52),
    [anon_sym_REASON_REMOVE] = ACTIONS(55),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(52),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(52),
    [anon_sym_REASON_SELECT] = ACTIONS(55),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(52),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(52),
    [anon_sym_REASON_UNSELECT] = ACTIONS(52),
    [anon_sym_END] = ACTIONS(58),
  },
  [6] = {
    [sym__expression] = STATE(4),
    [sym_string] = STATE(4),
    [sym_reason] = STATE(4),
    [sym__datapool_block_expression] = STATE(4),
    [aux_sym_datapool_block_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(60),
    [anon_sym_DQUOTE] = ACTIONS(38),
    [sym_number] = ACTIONS(60),
    [sym_true] = ACTIONS(60),
    [sym_false] = ACTIONS(60),
    [sym_eoln] = ACTIONS(60),
    [sym_invalid] = ACTIONS(60),
    [sym_none] = ACTIONS(60),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(40),
    [anon_sym_REASON_CLEAR] = ACTIONS(40),
    [anon_sym_REASON_CLOSE] = ACTIONS(40),
    [anon_sym_REASON_CONNECTION] = ACTIONS(40),
    [anon_sym_REASON_DROP] = ACTIONS(40),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(40),
    [anon_sym_REASON_INPUT] = ACTIONS(40),
    [anon_sym_REASON_INSERT] = ACTIONS(40),
    [anon_sym_REASON_MOVE] = ACTIONS(40),
    [anon_sym_REASON_OPEN] = ACTIONS(40),
    [anon_sym_REASON_PACK] = ACTIONS(40),
    [anon_sym_REASON_REMOVE] = ACTIONS(42),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(40),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(40),
    [anon_sym_REASON_SELECT] = ACTIONS(42),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(40),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(40),
    [anon_sym_REASON_UNSELECT] = ACTIONS(40),
    [anon_sym_END] = ACTIONS(62),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym_comment] = ACTIONS(64),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [sym_number] = ACTIONS(64),
    [sym_true] = ACTIONS(64),
    [sym_false] = ACTIONS(64),
    [sym_eoln] = ACTIONS(64),
    [sym_invalid] = ACTIONS(64),
    [sym_none] = ACTIONS(64),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(64),
    [anon_sym_REASON_CLEAR] = ACTIONS(64),
    [anon_sym_REASON_CLOSE] = ACTIONS(64),
    [anon_sym_REASON_CONNECTION] = ACTIONS(64),
    [anon_sym_REASON_DROP] = ACTIONS(64),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(64),
    [anon_sym_REASON_INPUT] = ACTIONS(64),
    [anon_sym_REASON_INSERT] = ACTIONS(64),
    [anon_sym_REASON_MOVE] = ACTIONS(64),
    [anon_sym_REASON_OPEN] = ACTIONS(64),
    [anon_sym_REASON_PACK] = ACTIONS(64),
    [anon_sym_REASON_REMOVE] = ACTIONS(66),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(64),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(64),
    [anon_sym_REASON_SELECT] = ACTIONS(66),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(64),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(64),
    [anon_sym_REASON_UNSELECT] = ACTIONS(64),
    [anon_sym_DATAPOOL] = ACTIONS(64),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [sym_comment] = ACTIONS(68),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [sym_number] = ACTIONS(68),
    [sym_true] = ACTIONS(68),
    [sym_false] = ACTIONS(68),
    [sym_eoln] = ACTIONS(68),
    [sym_invalid] = ACTIONS(68),
    [sym_none] = ACTIONS(68),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(68),
    [anon_sym_REASON_CLEAR] = ACTIONS(68),
    [anon_sym_REASON_CLOSE] = ACTIONS(68),
    [anon_sym_REASON_CONNECTION] = ACTIONS(68),
    [anon_sym_REASON_DROP] = ACTIONS(68),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(68),
    [anon_sym_REASON_INPUT] = ACTIONS(68),
    [anon_sym_REASON_INSERT] = ACTIONS(68),
    [anon_sym_REASON_MOVE] = ACTIONS(68),
    [anon_sym_REASON_OPEN] = ACTIONS(68),
    [anon_sym_REASON_PACK] = ACTIONS(68),
    [anon_sym_REASON_REMOVE] = ACTIONS(70),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(68),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(68),
    [anon_sym_REASON_SELECT] = ACTIONS(70),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(68),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(68),
    [anon_sym_REASON_UNSELECT] = ACTIONS(68),
    [anon_sym_DATAPOOL] = ACTIONS(68),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [sym_comment] = ACTIONS(72),
    [anon_sym_DQUOTE] = ACTIONS(72),
    [sym_number] = ACTIONS(72),
    [sym_true] = ACTIONS(72),
    [sym_false] = ACTIONS(72),
    [sym_eoln] = ACTIONS(72),
    [sym_invalid] = ACTIONS(72),
    [sym_none] = ACTIONS(72),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(72),
    [anon_sym_REASON_CLEAR] = ACTIONS(72),
    [anon_sym_REASON_CLOSE] = ACTIONS(72),
    [anon_sym_REASON_CONNECTION] = ACTIONS(72),
    [anon_sym_REASON_DROP] = ACTIONS(72),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(72),
    [anon_sym_REASON_INPUT] = ACTIONS(72),
    [anon_sym_REASON_INSERT] = ACTIONS(72),
    [anon_sym_REASON_MOVE] = ACTIONS(72),
    [anon_sym_REASON_OPEN] = ACTIONS(72),
    [anon_sym_REASON_PACK] = ACTIONS(72),
    [anon_sym_REASON_REMOVE] = ACTIONS(74),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(72),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(72),
    [anon_sym_REASON_SELECT] = ACTIONS(74),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(72),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(72),
    [anon_sym_REASON_UNSELECT] = ACTIONS(72),
    [anon_sym_DATAPOOL] = ACTIONS(72),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym_comment] = ACTIONS(76),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number] = ACTIONS(76),
    [sym_true] = ACTIONS(76),
    [sym_false] = ACTIONS(76),
    [sym_eoln] = ACTIONS(76),
    [sym_invalid] = ACTIONS(76),
    [sym_none] = ACTIONS(76),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(76),
    [anon_sym_REASON_CLEAR] = ACTIONS(76),
    [anon_sym_REASON_CLOSE] = ACTIONS(76),
    [anon_sym_REASON_CONNECTION] = ACTIONS(76),
    [anon_sym_REASON_DROP] = ACTIONS(76),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(76),
    [anon_sym_REASON_INPUT] = ACTIONS(76),
    [anon_sym_REASON_INSERT] = ACTIONS(76),
    [anon_sym_REASON_MOVE] = ACTIONS(76),
    [anon_sym_REASON_OPEN] = ACTIONS(76),
    [anon_sym_REASON_PACK] = ACTIONS(76),
    [anon_sym_REASON_REMOVE] = ACTIONS(78),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(76),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(76),
    [anon_sym_REASON_SELECT] = ACTIONS(78),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(76),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(76),
    [anon_sym_REASON_UNSELECT] = ACTIONS(76),
    [anon_sym_DATAPOOL] = ACTIONS(76),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [sym_comment] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(80),
    [sym_number] = ACTIONS(80),
    [sym_true] = ACTIONS(80),
    [sym_false] = ACTIONS(80),
    [sym_eoln] = ACTIONS(80),
    [sym_invalid] = ACTIONS(80),
    [sym_none] = ACTIONS(80),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(80),
    [anon_sym_REASON_CLEAR] = ACTIONS(80),
    [anon_sym_REASON_CLOSE] = ACTIONS(80),
    [anon_sym_REASON_CONNECTION] = ACTIONS(80),
    [anon_sym_REASON_DROP] = ACTIONS(80),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(80),
    [anon_sym_REASON_INPUT] = ACTIONS(80),
    [anon_sym_REASON_INSERT] = ACTIONS(80),
    [anon_sym_REASON_MOVE] = ACTIONS(80),
    [anon_sym_REASON_OPEN] = ACTIONS(80),
    [anon_sym_REASON_PACK] = ACTIONS(80),
    [anon_sym_REASON_REMOVE] = ACTIONS(82),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(80),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(80),
    [anon_sym_REASON_SELECT] = ACTIONS(82),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(80),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(80),
    [anon_sym_REASON_UNSELECT] = ACTIONS(80),
    [anon_sym_DATAPOOL] = ACTIONS(80),
  },
  [12] = {
    [sym_comment] = ACTIONS(72),
    [anon_sym_DQUOTE] = ACTIONS(72),
    [sym_number] = ACTIONS(72),
    [sym_true] = ACTIONS(72),
    [sym_false] = ACTIONS(72),
    [sym_eoln] = ACTIONS(72),
    [sym_invalid] = ACTIONS(72),
    [sym_none] = ACTIONS(72),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(72),
    [anon_sym_REASON_CLEAR] = ACTIONS(72),
    [anon_sym_REASON_CLOSE] = ACTIONS(72),
    [anon_sym_REASON_CONNECTION] = ACTIONS(72),
    [anon_sym_REASON_DROP] = ACTIONS(72),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(72),
    [anon_sym_REASON_INPUT] = ACTIONS(72),
    [anon_sym_REASON_INSERT] = ACTIONS(72),
    [anon_sym_REASON_MOVE] = ACTIONS(72),
    [anon_sym_REASON_OPEN] = ACTIONS(72),
    [anon_sym_REASON_PACK] = ACTIONS(72),
    [anon_sym_REASON_REMOVE] = ACTIONS(74),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(72),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(72),
    [anon_sym_REASON_SELECT] = ACTIONS(74),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(72),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(72),
    [anon_sym_REASON_UNSELECT] = ACTIONS(72),
    [anon_sym_END] = ACTIONS(72),
  },
  [13] = {
    [sym_comment] = ACTIONS(68),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [sym_number] = ACTIONS(68),
    [sym_true] = ACTIONS(68),
    [sym_false] = ACTIONS(68),
    [sym_eoln] = ACTIONS(68),
    [sym_invalid] = ACTIONS(68),
    [sym_none] = ACTIONS(68),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(68),
    [anon_sym_REASON_CLEAR] = ACTIONS(68),
    [anon_sym_REASON_CLOSE] = ACTIONS(68),
    [anon_sym_REASON_CONNECTION] = ACTIONS(68),
    [anon_sym_REASON_DROP] = ACTIONS(68),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(68),
    [anon_sym_REASON_INPUT] = ACTIONS(68),
    [anon_sym_REASON_INSERT] = ACTIONS(68),
    [anon_sym_REASON_MOVE] = ACTIONS(68),
    [anon_sym_REASON_OPEN] = ACTIONS(68),
    [anon_sym_REASON_PACK] = ACTIONS(68),
    [anon_sym_REASON_REMOVE] = ACTIONS(70),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(68),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(68),
    [anon_sym_REASON_SELECT] = ACTIONS(70),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(68),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(68),
    [anon_sym_REASON_UNSELECT] = ACTIONS(68),
    [anon_sym_END] = ACTIONS(68),
  },
  [14] = {
    [sym_comment] = ACTIONS(64),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [sym_number] = ACTIONS(64),
    [sym_true] = ACTIONS(64),
    [sym_false] = ACTIONS(64),
    [sym_eoln] = ACTIONS(64),
    [sym_invalid] = ACTIONS(64),
    [sym_none] = ACTIONS(64),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(64),
    [anon_sym_REASON_CLEAR] = ACTIONS(64),
    [anon_sym_REASON_CLOSE] = ACTIONS(64),
    [anon_sym_REASON_CONNECTION] = ACTIONS(64),
    [anon_sym_REASON_DROP] = ACTIONS(64),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(64),
    [anon_sym_REASON_INPUT] = ACTIONS(64),
    [anon_sym_REASON_INSERT] = ACTIONS(64),
    [anon_sym_REASON_MOVE] = ACTIONS(64),
    [anon_sym_REASON_OPEN] = ACTIONS(64),
    [anon_sym_REASON_PACK] = ACTIONS(64),
    [anon_sym_REASON_REMOVE] = ACTIONS(66),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(64),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(64),
    [anon_sym_REASON_SELECT] = ACTIONS(66),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(64),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(64),
    [anon_sym_REASON_UNSELECT] = ACTIONS(64),
    [anon_sym_END] = ACTIONS(64),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      aux_sym_string_token1,
    STATE(17), 1,
      aux_sym_string_repeat1,
  [10] = 3,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      aux_sym_string_token1,
    STATE(15), 1,
      aux_sym_string_repeat1,
  [20] = 3,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      aux_sym_string_token1,
    STATE(17), 1,
      aux_sym_string_repeat1,
  [30] = 3,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      aux_sym_string_token1,
    STATE(19), 1,
      aux_sym_string_repeat1,
  [40] = 3,
    ACTIONS(86), 1,
      aux_sym_string_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      aux_sym_string_repeat1,
  [50] = 1,
    ACTIONS(103), 1,
      anon_sym_DATAPOOL,
  [54] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
  [58] = 1,
    ACTIONS(107), 1,
      anon_sym_SEMI,
  [62] = 1,
    ACTIONS(109), 1,
      anon_sym_DATAPOOL,
  [66] = 1,
    ACTIONS(111), 1,
      anon_sym_SEMI,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 10,
  [SMALL_STATE(17)] = 20,
  [SMALL_STATE(18)] = 30,
  [SMALL_STATE(19)] = 40,
  [SMALL_STATE(20)] = 50,
  [SMALL_STATE(21)] = 54,
  [SMALL_STATE(22)] = 58,
  [SMALL_STATE(23)] = 62,
  [SMALL_STATE(24)] = 66,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(5),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(18),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(12),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(12),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reason, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datapool_block, 4),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datapool_block, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datapool_block, 5),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datapool_block, 5),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(17),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [105] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_intens(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
