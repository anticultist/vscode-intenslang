module.exports = grammar({
  name: 'intens',

  rules: {
    source_file: $ => repeat($._high_level_blocks),

    _high_level_blocks: $ => choice(
      $.comment,
      $.string,
      $.number
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
  }
});