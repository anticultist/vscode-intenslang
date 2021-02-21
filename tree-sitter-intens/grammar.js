module.exports = grammar({
  name: 'intens',

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($._high_level_blocks),

    identifier: $ => /[a-zA-Z][a-zA-Z_0-9#]*/,

    _high_level_blocks: $ => choice(
      $._expression,
      $.datapool_block
    ),

    _expression: $ => choice(
      $.comment,
      $.string,
      $.number,
      $.true,
      $.false,
      $.eoln,
      $.invalid,
      $.none,
      $.reason,
      ';'
    ),

    comment: $ => token(seq('//', /.*/)),

    string: $ => seq(
      '"',
      repeat(choice(
        /[^"\\\n]+|\\\r?\n/
      )),
      '"'
    ),

    number: $ => token(
      seq(
        optional(/[+-]/),
        /[0-9][0-9_]*/,
        optional(seq('.', optional(/[0-9][0-9_]*/))),
        optional(/[eE][+-]?([0-9][0-9_]*)/)
      )
    ),

    true: $ => 'TRUE',
    false: $ => 'FALSE',
    eoln: $ => 'EOLN',
    invalid: $ => 'INVALID',
    none: $ => 'NONE',

    primitive_type: $ => token(choice(
      'CDATA',
      'COLOR',
      'COMPLEX',
      'INTEGER',
      'REAL',
      'STRING'
    )),

    reason: $ => choice(
      'REASON_ACTIVATE',
      'REASON_CLEAR',
      'REASON_CLOSE',
      'REASON_CONNECTION',
      'REASON_DROP',
      'REASON_DUPLICATE',
      'REASON_INPUT',
      'REASON_INSERT',
      'REASON_MOVE',
      'REASON_OPEN',
      'REASON_PACK',
      'REASON_REMOVE',
      'REASON_REMOVE_CONNECTION',
      'REASON_REMOVE_ELEMENT',
      'REASON_SELECT',
      'REASON_SELECT_POINT',
      'REASON_SELECT_RECTANGLE',
      'REASON_UNSELECT'
    ),

    variable_definition: $ => seq(
      field('type', $.primitive_type),
      optional($.parameter_block),
      commaSep(seq(
        field('name', alias($.identifier, $.variable_identifier)),
        optional($.parameter_block))),
      ';'
    ),

    parameter_block: $ => seq(
      '{',
      commaSep(choice(
        alias(/[A-Za-z_][A-Za-z_0-9]*/, $.parameter)
      )),
      '}'
    ),

    datapool_block: $ => seq(
      'DATAPOOL',
      repeat($._datapool_block_expression),
      'END',
      'DATAPOOL',
      ';'
    ),

    _datapool_block_expression: $ => choice(
      $._expression,
      $.variable_definition
    ),
  }
});

function commaSep(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
