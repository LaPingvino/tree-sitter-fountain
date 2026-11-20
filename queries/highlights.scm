; Fountain highlights (nvim-treesitter style names). The Zed extension
; (zed-fountain) has its own, with Zed's names.

(title_key) @property
(title_value) @string.special

(section_marker) @punctuation.special
(section_title) @markup.heading
(synopsis) @comment.documentation
(scene_heading) @markup.heading
(scene_number) @number
(page_break) @punctuation.special

(character) @type
(character_extension) @attribute
(dual_dialogue_marker) @operator
(parenthetical) @comment
(dialogue) @string
(lyric) @string.special

(transition) @keyword
(centered) @markup.raw

(force_marker) @punctuation.special
(centered_end) @punctuation.special

(italic) @markup.italic
(bold) @markup.strong
(bold_italic) @markup.strong
(underline) @markup.underline
(escape) @string.escape

(note) @comment
(boneyard) @comment

[
  (action)
  (dialogue)
  (parenthetical)
  (synopsis)
] @spell
