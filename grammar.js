/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// Fountain (https://fountain.io/syntax) is line based: what a line is
// depends on the lines around it (a character cue needs a blank line
// before it and a non-blank line after it, a scene heading a blank line
// before it, a transition blank lines on both sides). The external
// scanner (src/scanner.c) looks at the whole line and its neighbours and
// emits a zero-width marker saying what the line is; this grammar gives
// the lines their structure and parses the text inside them.
//
// Structure:
//   document  = title_page? (section | scene | element)*
//   section   = section_heading (section | scene | element)*
//               (ends before a heading with as many or fewer #'s)
//   scene     = scene_heading element*
//               (ends before the next scene or section heading)
//
// Blank lines are extras: they separate elements but are no nodes.

const INLINE_SPECIAL = "*_\\[\\\\/#<(^";

module.exports = grammar({
  name: "fountain",

  externals: ($) => [
    $._blank_line,
    $._newline,
    $._indent,
    $._section_end,
    $._title_key_start,
    $._title_value_start,
    $._section_start,
    $._scene_start,
    $._action_start,
    $._action_continue,
    $._character_start,
    $._parenthetical_start,
    $._dialogue_start,
    $._dialogue_lyric_start,
    $._lyric_start,
    $._transition_start,
    $._centered_start,
    $._synopsis_start,
    $.page_break,
    $.force_marker,
    $.dual_dialogue_marker,
    $.centered_end,
    $._error_sentinel,
  ],

  extras: ($) => [$._blank_line],

  conflicts: ($) => [],

  rules: {
    document: ($) =>
      seq(optional($.title_page), repeat($._block)),

    _block: ($) => choice($.section, $.scene, $._element),

    // Title page: "Key: value" lines at the very start, values inline or
    // on indented lines below the key (three spaces or a tab).
    title_page: ($) => repeat1($.title_field),

    title_field: ($) =>
      seq(
        $._title_key_start,
        $.title_key,
        ":",
        optional($._title_inline_value),
        $._newline,
        repeat(
          seq(
            $._title_value_start,
            optional($._indent),
            $.title_value,
            $._newline,
          ),
        ),
      ),

    title_key: ($) => /[^:\n\r]+/,

    _title_inline_value: ($) =>
      choice(
        seq($._indent, optional($._title_value_text)),
        $._title_value_text,
      ),

    _title_value_text: ($) => alias(repeat1($._inline), $.title_value),

    title_value: ($) => repeat1($._inline),

    // Sections: # Act, ## Sequence, ### ... nested by their level.
    section: ($) =>
      seq(
        $.section_heading,
        repeat(choice($.section, $.scene, $._element)),
        $._section_end,
      ),

    section_heading: ($) =>
      seq(
        $._section_start,
        optional($._indent),
        $.section_marker,
        optional($._indent),
        optional($.section_title),
        $._newline,
      ),

    section_marker: ($) => /#+/,

    section_title: ($) => repeat1($._inline),

    // Scenes: from a scene heading up to the next scene or section.
    scene: ($) => prec.right(seq($.scene_heading, repeat($._element))),

    scene_heading: ($) =>
      seq(
        $._scene_start,
        optional($._indent),
        optional($.force_marker),
        optional($.scene_title),
        optional(seq($.scene_number, repeat(choice($.note, $._whitespace)))),
        $._newline,
      ),

    scene_title: ($) => repeat1($._inline),

    // the space before it goes with it, not with the title
    scene_number: ($) => /[ \t]*#[\p{L}\p{N}.\-]+#/u,

    _element: ($) =>
      choice(
        $.action,
        $.dialogue_block,
        $.transition,
        $.centered,
        $.lyric,
        $.synopsis,
        $._page_break_line,
      ),

    _page_break_line: ($) => seq($.page_break, $._newline),

    // Action: a paragraph of lines (also lines that are only a note or
    // a boneyard). Its whitespace is kept, so no _indent here.
    action: ($) =>
      prec.right(
        seq(
          $._action_start,
          $._action_line,
          repeat(seq($._action_continue, $._action_line)),
        ),
      ),

    _action_line: ($) =>
      seq(optional($.force_marker), repeat($._inline), $._newline),

    // Dialogue: a character cue and its parentheticals, speech and lyrics.
    dialogue_block: ($) =>
      prec.right(
        seq(
          $.character,
          repeat(
            choice(
              $.parenthetical,
              $.dialogue,
              alias($._dialogue_lyric, $.lyric),
            ),
          ),
        ),
      ),

    character: ($) =>
      seq(
        $._character_start,
        optional($._indent),
        optional($.force_marker),
        $.character_name,
        repeat(choice($._inline, $.character_extension)),
        optional($.dual_dialogue_marker),
        $._newline,
      ),

    // the name up to an (extension), a [[note]] or the ^ of dual dialogue
    character_name: ($) => /[^ \t\n\r(\^\[]+([ \t]+[^ \t\n\r(\^\[]+)*/,

    character_extension: ($) => /\([^()\n\r]*\)/,

    parenthetical: ($) =>
      seq(
        $._parenthetical_start,
        optional($._indent),
        repeat1($._inline),
        $._newline,
      ),

    // A dialogue line; a line of two spaces keeps the speech going.
    dialogue: ($) =>
      seq(
        $._dialogue_start,
        optional($._indent),
        repeat($._inline),
        $._newline,
      ),

    _dialogue_lyric: ($) =>
      seq(
        $._dialogue_lyric_start,
        optional($._indent),
        $.force_marker,
        repeat($._inline),
        $._newline,
      ),

    lyric: ($) =>
      seq(
        $._lyric_start,
        optional($._indent),
        $.force_marker,
        repeat($._inline),
        $._newline,
      ),

    transition: ($) =>
      seq(
        $._transition_start,
        optional($._indent),
        optional($.force_marker),
        repeat($._inline),
        $._newline,
      ),

    centered: ($) =>
      seq(
        $._centered_start,
        optional($._indent),
        $.force_marker,
        repeat($._inline),
        $.centered_end,
        $._newline,
      ),

    synopsis: ($) =>
      seq(
        $._synopsis_start,
        optional($._indent),
        $.force_marker,
        repeat($._inline),
        $._newline,
      ),

    // Text inside a line.
    _inline: ($) =>
      choice(
        $._whitespace,
        $._text,
        $._special,
        $.escape,
        $.note,
        $.boneyard,
        $.bold_italic,
        $.bold,
        $.italic,
        $.underline,
      ),

    // words with the spaces between them, not around them (so a scene
    // title stops before the space in front of its #number#)
    _text: ($) =>
      new RegExp(
        `[^ \\t\\n\\r${INLINE_SPECIAL}]+([ \\t]+[^ \\t\\n\\r${INLINE_SPECIAL}]+)*`,
      ),

    _whitespace: ($) => /[ \t]+/,

    // a special character that starts nothing
    _special: ($) => new RegExp(`[${INLINE_SPECIAL}]`),

    escape: ($) => /\\[^\n\r]/,

    // Emphasis follows Markdown within one line: no space just inside
    // the markers. Underscores underline.
    bold_italic: ($) => /\*\*\*[^\s*]([^*\n\r]*[^\s*])?\*\*\*/,
    bold: ($) => /\*\*[^\s*]([^*\n\r]*[^\s*])?\*\*/,
    italic: ($) => /\*[^\s*]([^*\n\r]*[^\s*])?\*/,
    underline: ($) => /_[^\s_]([^_\n\r]*[^\s_])?_/,

    // [[notes]] may run over several lines, but not over a blank one
    // (a line of two spaces is not blank).
    note: ($) => /\[\[([^\]\n]|\][^\]\n]|\n[^\n\]]|\n\][^\]\n])*\n?\]\]/,

    // /* boneyard */ is left out of the script; it may span any lines.
    boneyard: ($) => /\/\*([^*]|\*+[^*\/])*\*+\//,
  },
});
