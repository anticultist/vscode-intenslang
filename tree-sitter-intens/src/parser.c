#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_comment = 1,
  anon_sym_DQUOTE = 2,
  aux_sym_string_token1 = 3,
  sym_number = 4,
  sym_true = 5,
  sym_false = 6,
  sym_eoln = 7,
  sym_invalid = 8,
  sym_none = 9,
  anon_sym_REASON_ACTIVATE = 10,
  anon_sym_REASON_CLEAR = 11,
  anon_sym_REASON_CLOSE = 12,
  anon_sym_REASON_CONNECTION = 13,
  anon_sym_REASON_DROP = 14,
  anon_sym_REASON_DUPLICATE = 15,
  anon_sym_REASON_INPUT = 16,
  anon_sym_REASON_INSERT = 17,
  anon_sym_REASON_MOVE = 18,
  anon_sym_REASON_OPEN = 19,
  anon_sym_REASON_PACK = 20,
  anon_sym_REASON_REMOVE = 21,
  anon_sym_REASON_REMOVE_CONNECTION = 22,
  anon_sym_REASON_REMOVE_ELEMENT = 23,
  anon_sym_REASON_SELECT = 24,
  anon_sym_REASON_SELECT_POINT = 25,
  anon_sym_REASON_SELECT_RECTANGLE = 26,
  anon_sym_REASON_UNSELECT = 27,
  anon_sym_DATAPOOL = 28,
  anon_sym_END = 29,
  anon_sym_SEMI = 30,
  sym_source_file = 31,
  sym__high_level_blocks = 32,
  sym__expression = 33,
  sym_string = 34,
  sym_reason = 35,
  sym_datapool_block = 36,
  sym__datapool_block_expression = 37,
  aux_sym_source_file_repeat1 = 38,
  aux_sym_string_repeat1 = 39,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
      if (eof) ADVANCE(135);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == 'D') ADVANCE(5);
      if (lookahead == 'E') ADVANCE(70);
      if (lookahead == 'F') ADVANCE(9);
      if (lookahead == 'I') ADVANCE(71);
      if (lookahead == 'N') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(38);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(138);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(136);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(119);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(99);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(17);
      if (lookahead == 'C') ADVANCE(61);
      if (lookahead == 'D') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(74);
      if (lookahead == 'M') ADVANCE(88);
      if (lookahead == 'O') ADVANCE(103);
      if (lookahead == 'P') ADVANCE(11);
      if (lookahead == 'R') ADVANCE(30);
      if (lookahead == 'S') ADVANCE(41);
      if (lookahead == 'U') ADVANCE(82);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(105);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(58);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(110);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(59);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(122);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(77);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(123);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(57);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(118);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(114);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(115);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(121);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(120);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == 'E') ADVANCE(65);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(124);
      END_STATE();
    case 25:
      if (lookahead == 'D') ADVANCE(169);
      END_STATE();
    case 26:
      if (lookahead == 'D') ADVANCE(148);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(145);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(146);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(152);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(161);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(150);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(155);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(166);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(106);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(8);
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(81);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(67);
      END_STATE();
    case 50:
      if (lookahead == 'G') ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 'I') ADVANCE(26);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(129);
      END_STATE();
    case 53:
      if (lookahead == 'I') ADVANCE(22);
      END_STATE();
    case 54:
      if (lookahead == 'I') ADVANCE(80);
      END_STATE();
    case 55:
      if (lookahead == 'I') ADVANCE(94);
      END_STATE();
    case 56:
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 57:
      if (lookahead == 'K') ADVANCE(160);
      END_STATE();
    case 58:
      if (lookahead == 'L') ADVANCE(108);
      END_STATE();
    case 59:
      if (lookahead == 'L') ADVANCE(51);
      END_STATE();
    case 60:
      if (lookahead == 'L') ADVANCE(168);
      END_STATE();
    case 61:
      if (lookahead == 'L') ADVANCE(42);
      if (lookahead == 'O') ADVANCE(83);
      END_STATE();
    case 62:
      if (lookahead == 'L') ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == 'L') ADVANCE(53);
      END_STATE();
    case 64:
      if (lookahead == 'L') ADVANCE(45);
      END_STATE();
    case 65:
      if (lookahead == 'L') ADVANCE(37);
      END_STATE();
    case 66:
      if (lookahead == 'L') ADVANCE(36);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(46);
      END_STATE();
    case 68:
      if (lookahead == 'M') ADVANCE(96);
      END_STATE();
    case 69:
      if (lookahead == 'M') ADVANCE(44);
      END_STATE();
    case 70:
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(62);
      END_STATE();
    case 71:
      if (lookahead == 'N') ADVANCE(130);
      END_STATE();
    case 72:
      if (lookahead == 'N') ADVANCE(147);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(131);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(100);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(159);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(153);
      END_STATE();
    case 77:
      if (lookahead == 'N') ADVANCE(50);
      END_STATE();
    case 78:
      if (lookahead == 'N') ADVANCE(162);
      END_STATE();
    case 79:
      if (lookahead == 'N') ADVANCE(27);
      END_STATE();
    case 80:
      if (lookahead == 'N') ADVANCE(116);
      END_STATE();
    case 81:
      if (lookahead == 'N') ADVANCE(117);
      END_STATE();
    case 82:
      if (lookahead == 'N') ADVANCE(111);
      END_STATE();
    case 83:
      if (lookahead == 'N') ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 85:
      if (lookahead == 'N') ADVANCE(48);
      END_STATE();
    case 86:
      if (lookahead == 'N') ADVANCE(85);
      END_STATE();
    case 87:
      if (lookahead == 'O') ADVANCE(79);
      END_STATE();
    case 88:
      if (lookahead == 'O') ADVANCE(127);
      END_STATE();
    case 89:
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 90:
      if (lookahead == 'O') ADVANCE(73);
      END_STATE();
    case 91:
      if (lookahead == 'O') ADVANCE(60);
      END_STATE();
    case 92:
      if (lookahead == 'O') ADVANCE(98);
      END_STATE();
    case 93:
      if (lookahead == 'O') ADVANCE(54);
      END_STATE();
    case 94:
      if (lookahead == 'O') ADVANCE(76);
      END_STATE();
    case 95:
      if (lookahead == 'O') ADVANCE(78);
      END_STATE();
    case 96:
      if (lookahead == 'O') ADVANCE(128);
      END_STATE();
    case 97:
      if (lookahead == 'O') ADVANCE(86);
      END_STATE();
    case 98:
      if (lookahead == 'P') ADVANCE(154);
      END_STATE();
    case 99:
      if (lookahead == 'P') ADVANCE(89);
      END_STATE();
    case 100:
      if (lookahead == 'P') ADVANCE(126);
      if (lookahead == 'S') ADVANCE(39);
      END_STATE();
    case 101:
      if (lookahead == 'P') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(40);
      END_STATE();
    case 102:
      if (lookahead == 'P') ADVANCE(63);
      END_STATE();
    case 103:
      if (lookahead == 'P') ADVANCE(43);
      END_STATE();
    case 104:
      if (lookahead == 'R') ADVANCE(125);
      END_STATE();
    case 105:
      if (lookahead == 'R') ADVANCE(151);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(92);
      if (lookahead == 'U') ADVANCE(102);
      END_STATE();
    case 108:
      if (lookahead == 'S') ADVANCE(29);
      END_STATE();
    case 109:
      if (lookahead == 'S') ADVANCE(32);
      END_STATE();
    case 110:
      if (lookahead == 'S') ADVANCE(90);
      END_STATE();
    case 111:
      if (lookahead == 'S') ADVANCE(49);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(156);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(157);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(164);
      END_STATE();
    case 115:
      if (lookahead == 'T') ADVANCE(167);
      END_STATE();
    case 116:
      if (lookahead == 'T') ADVANCE(165);
      END_STATE();
    case 117:
      if (lookahead == 'T') ADVANCE(163);
      END_STATE();
    case 118:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 119:
      if (lookahead == 'T') ADVANCE(6);
      END_STATE();
    case 120:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 121:
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 122:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 123:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 125:
      if (lookahead == 'U') ADVANCE(28);
      END_STATE();
    case 126:
      if (lookahead == 'U') ADVANCE(112);
      END_STATE();
    case 127:
      if (lookahead == 'V') ADVANCE(31);
      END_STATE();
    case 128:
      if (lookahead == 'V') ADVANCE(33);
      END_STATE();
    case 129:
      if (lookahead == 'V') ADVANCE(13);
      END_STATE();
    case 130:
      if (lookahead == 'V') ADVANCE(12);
      END_STATE();
    case 131:
      if (lookahead == '_') ADVANCE(7);
      END_STATE();
    case 132:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_eoln);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_invalid);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_REASON_ACTIVATE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_REASON_CLEAR);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_REASON_CLOSE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_REASON_CONNECTION);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_REASON_DROP);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_REASON_DUPLICATE);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_REASON_INPUT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_REASON_INSERT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_REASON_MOVE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_REASON_OPEN);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_REASON_PACK);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE);
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_CONNECTION);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_ELEMENT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT);
      if (lookahead == '_') ADVANCE(101);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_POINT);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_RECTANGLE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_REASON_UNSELECT);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DATAPOOL);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_SEMI);
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
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_source_file] = STATE(13),
    [sym__high_level_blocks] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [sym_reason] = STATE(2),
    [sym_datapool_block] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    [sym__high_level_blocks] = STATE(3),
    [sym__expression] = STATE(3),
    [sym_string] = STATE(3),
    [sym_reason] = STATE(3),
    [sym_datapool_block] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_number] = ACTIONS(17),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_eoln] = ACTIONS(17),
    [sym_invalid] = ACTIONS(17),
    [sym_none] = ACTIONS(17),
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
  [3] = {
    [sym__high_level_blocks] = STATE(3),
    [sym__expression] = STATE(3),
    [sym_string] = STATE(3),
    [sym_reason] = STATE(3),
    [sym_datapool_block] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(24),
    [sym_number] = ACTIONS(21),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [sym_eoln] = ACTIONS(21),
    [sym_invalid] = ACTIONS(21),
    [sym_none] = ACTIONS(21),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(27),
    [anon_sym_REASON_CLEAR] = ACTIONS(27),
    [anon_sym_REASON_CLOSE] = ACTIONS(27),
    [anon_sym_REASON_CONNECTION] = ACTIONS(27),
    [anon_sym_REASON_DROP] = ACTIONS(27),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(27),
    [anon_sym_REASON_INPUT] = ACTIONS(27),
    [anon_sym_REASON_INSERT] = ACTIONS(27),
    [anon_sym_REASON_MOVE] = ACTIONS(27),
    [anon_sym_REASON_OPEN] = ACTIONS(27),
    [anon_sym_REASON_PACK] = ACTIONS(27),
    [anon_sym_REASON_REMOVE] = ACTIONS(30),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(27),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(27),
    [anon_sym_REASON_SELECT] = ACTIONS(30),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(27),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(27),
    [anon_sym_REASON_UNSELECT] = ACTIONS(27),
    [anon_sym_DATAPOOL] = ACTIONS(33),
  },
  [4] = {
    [sym__expression] = STATE(15),
    [sym_string] = STATE(15),
    [sym_reason] = STATE(15),
    [sym__datapool_block_expression] = STATE(15),
    [sym_comment] = ACTIONS(36),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_number] = ACTIONS(36),
    [sym_true] = ACTIONS(36),
    [sym_false] = ACTIONS(36),
    [sym_eoln] = ACTIONS(36),
    [sym_invalid] = ACTIONS(36),
    [sym_none] = ACTIONS(36),
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
    [anon_sym_END] = ACTIONS(38),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym_comment] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [sym_number] = ACTIONS(40),
    [sym_true] = ACTIONS(40),
    [sym_false] = ACTIONS(40),
    [sym_eoln] = ACTIONS(40),
    [sym_invalid] = ACTIONS(40),
    [sym_none] = ACTIONS(40),
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
    [anon_sym_DATAPOOL] = ACTIONS(40),
    [anon_sym_END] = ACTIONS(40),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_comment] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_number] = ACTIONS(44),
    [sym_true] = ACTIONS(44),
    [sym_false] = ACTIONS(44),
    [sym_eoln] = ACTIONS(44),
    [sym_invalid] = ACTIONS(44),
    [sym_none] = ACTIONS(44),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(44),
    [anon_sym_REASON_CLEAR] = ACTIONS(44),
    [anon_sym_REASON_CLOSE] = ACTIONS(44),
    [anon_sym_REASON_CONNECTION] = ACTIONS(44),
    [anon_sym_REASON_DROP] = ACTIONS(44),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(44),
    [anon_sym_REASON_INPUT] = ACTIONS(44),
    [anon_sym_REASON_INSERT] = ACTIONS(44),
    [anon_sym_REASON_MOVE] = ACTIONS(44),
    [anon_sym_REASON_OPEN] = ACTIONS(44),
    [anon_sym_REASON_PACK] = ACTIONS(44),
    [anon_sym_REASON_REMOVE] = ACTIONS(46),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(44),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(44),
    [anon_sym_REASON_SELECT] = ACTIONS(46),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(44),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(44),
    [anon_sym_REASON_UNSELECT] = ACTIONS(44),
    [anon_sym_DATAPOOL] = ACTIONS(44),
    [anon_sym_END] = ACTIONS(44),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [sym_comment] = ACTIONS(48),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [sym_number] = ACTIONS(48),
    [sym_true] = ACTIONS(48),
    [sym_false] = ACTIONS(48),
    [sym_eoln] = ACTIONS(48),
    [sym_invalid] = ACTIONS(48),
    [sym_none] = ACTIONS(48),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(48),
    [anon_sym_REASON_CLEAR] = ACTIONS(48),
    [anon_sym_REASON_CLOSE] = ACTIONS(48),
    [anon_sym_REASON_CONNECTION] = ACTIONS(48),
    [anon_sym_REASON_DROP] = ACTIONS(48),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(48),
    [anon_sym_REASON_INPUT] = ACTIONS(48),
    [anon_sym_REASON_INSERT] = ACTIONS(48),
    [anon_sym_REASON_MOVE] = ACTIONS(48),
    [anon_sym_REASON_OPEN] = ACTIONS(48),
    [anon_sym_REASON_PACK] = ACTIONS(48),
    [anon_sym_REASON_REMOVE] = ACTIONS(50),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(48),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(48),
    [anon_sym_REASON_SELECT] = ACTIONS(50),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(48),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(48),
    [anon_sym_REASON_UNSELECT] = ACTIONS(48),
    [anon_sym_DATAPOOL] = ACTIONS(48),
    [anon_sym_END] = ACTIONS(48),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [sym_comment] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_true] = ACTIONS(52),
    [sym_false] = ACTIONS(52),
    [sym_eoln] = ACTIONS(52),
    [sym_invalid] = ACTIONS(52),
    [sym_none] = ACTIONS(52),
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
    [anon_sym_REASON_REMOVE] = ACTIONS(54),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(52),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(52),
    [anon_sym_REASON_SELECT] = ACTIONS(54),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(52),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(52),
    [anon_sym_REASON_UNSELECT] = ACTIONS(52),
    [anon_sym_DATAPOOL] = ACTIONS(52),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [sym_comment] = ACTIONS(56),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym_number] = ACTIONS(56),
    [sym_true] = ACTIONS(56),
    [sym_false] = ACTIONS(56),
    [sym_eoln] = ACTIONS(56),
    [sym_invalid] = ACTIONS(56),
    [sym_none] = ACTIONS(56),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(56),
    [anon_sym_REASON_CLEAR] = ACTIONS(56),
    [anon_sym_REASON_CLOSE] = ACTIONS(56),
    [anon_sym_REASON_CONNECTION] = ACTIONS(56),
    [anon_sym_REASON_DROP] = ACTIONS(56),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(56),
    [anon_sym_REASON_INPUT] = ACTIONS(56),
    [anon_sym_REASON_INSERT] = ACTIONS(56),
    [anon_sym_REASON_MOVE] = ACTIONS(56),
    [anon_sym_REASON_OPEN] = ACTIONS(56),
    [anon_sym_REASON_PACK] = ACTIONS(56),
    [anon_sym_REASON_REMOVE] = ACTIONS(58),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(56),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(56),
    [anon_sym_REASON_SELECT] = ACTIONS(58),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(56),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(56),
    [anon_sym_REASON_UNSELECT] = ACTIONS(56),
    [anon_sym_DATAPOOL] = ACTIONS(56),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      aux_sym_string_token1,
    STATE(11), 1,
      aux_sym_string_repeat1,
  [10] = 3,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      aux_sym_string_token1,
    STATE(12), 1,
      aux_sym_string_repeat1,
  [20] = 3,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      aux_sym_string_token1,
    STATE(12), 1,
      aux_sym_string_repeat1,
  [30] = 1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
  [34] = 1,
    ACTIONS(75), 1,
      anon_sym_DATAPOOL,
  [38] = 1,
    ACTIONS(77), 1,
      anon_sym_END,
  [42] = 1,
    ACTIONS(79), 1,
      anon_sym_SEMI,
  [46] = 1,
    ACTIONS(81), 1,
      anon_sym_DATAPOOL,
  [50] = 1,
    ACTIONS(83), 1,
      anon_sym_SEMI,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 10,
  [SMALL_STATE(12)] = 20,
  [SMALL_STATE(13)] = 30,
  [SMALL_STATE(14)] = 34,
  [SMALL_STATE(15)] = 38,
  [SMALL_STATE(16)] = 42,
  [SMALL_STATE(17)] = 46,
  [SMALL_STATE(18)] = 50,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reason, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datapool_block, 4),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datapool_block, 4),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datapool_block, 5),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datapool_block, 5),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(12),
  [73] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
