/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "fountain",

  rules: {
    document: ($) =>
      seq(
        optional($.title_page),
        repeat(choice($.boneyard, $.section, $.scene, $._element)),
      ),

    // Title Page
    title_page: ($) => repeat1($._title_element),

    _title_element: ($) => /[\p{L}\p{N}_ ]+:.*((\n\t+|\n[ ]{2,}).*)*/u,

    // Scene

    scene: ($) =>
      prec.right(
        seq(
          choice(
            /(INT|EXT|EST|INT.?\/EXT|I.?\/E).?.[^.]*\n\n/,
            /\.[\p{L}\p{N}].+\n\n/u,
          ),
          repeat1($._element),
        ),
      ),

    // Dialogue
    dialogue: ($) => prec.right(repeat1($.dialogue_block)),

    dialogue_block: ($) =>
      seq(
        field("character", $.character),
        repeat(choice($.speech, $.parenthetical)),
        "\n",
      ),

    _noncharacter: ($) => prec(3, /[\p{Lu}. ']+\n\n/u),

    character: ($) =>
      /\s*([\p{Lu}. '0-9][\p{Lu}. '#0-9]+|@.+)[ ]*(\(.+\))?\^?\n/u,

    parenthetical: ($) => prec(2, /\(.*\)\n/),
    speech: ($) => choice(prec(1, /.+\n/)),

    // misc.
    action: ($) => prec(-1, repeat1(choice(/!.+/, $._line, $._noncharacter))),

    transition: ($) => choice(/[\p{Lu} ]+ TO:\n\n/u, />.+[^<]\n\n/),

    break: ($) => /={3,}\n/,

    synopse: ($) => /=.+\n/,

    section1: ($) =>
      prec.right(
        seq(
          /#[^#].*\n/,
          repeat(
            choice($.boneyard, $.section2, $.section3, $.scene, $._element),
          ),
        ),
      ),

    section2: ($) =>
      prec.right(
        seq(
          /##[^#].*\n/,
          repeat(choice($.boneyard, $.section3, $.scene, $._element)),
        ),
      ),

    section3: ($) =>
      prec.right(
        seq(/###[^#].*\n/, repeat(choice($.boneyard, $.scene, $._element))),
      ),

    section: ($) => choice($.section1, $.section2, $.section3),

    note: ($) => /\[\[.+\]\]\n/,

    boneyard: ($) => prec(10, /\/\*(.|\n)*\*\//),

    _line: ($) => /[^\n]+/,

    _element: ($) =>
      prec.left(
        choice($.action, $.dialogue, $.transition, $.synopse, $.break, $.note),
      ),
  },
});
