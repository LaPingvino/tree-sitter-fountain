# tree-sitter-fountain

[![CI][ci]](https://github.com/tree-sitter-grammars/tree-sitter-fountain/actions/workflows/ci.yml)
[![discord][discord]](https://discord.gg/w7nTvsVJhm)
[![matrix][matrix]](https://matrix.to/#/#tree-sitter-chat:matrix.org)
<!-- NOTE: uncomment these if you're publishing packages: -->
<!-- [![npm][npm]](https://www.npmjs.com/package/tree-sitter-fountain) -->
<!-- [![crates][crates]](https://crates.io/crates/tree-sitter-fountain) -->
<!-- [![pypi][pypi]](https://pypi.org/project/tree-sitter-fountain/) -->

A tree-sitter parser for [Fountain](https://fountain.io/syntax) screenplays,
used by the Zed extension [zed-fountain](https://github.com/LaPingvino/zed-fountain).

Fountain is line based: what a line is depends on its neighbours (a
character cue needs a blank line before it and text after it). An external
scanner (`src/scanner.c`) reads each line and the next and marks what the
line is; `grammar.js` gives the lines their structure:

- `title_page` of `title_field`s (`title_key`, `title_value`s, also on
  indented lines below the key);
- `section` (`section_heading`: `section_marker`, `section_title`) holding
  the sections of a deeper level, scenes and elements up to the next
  heading of its level or higher;
- `scene` (`scene_heading`: `scene_title`, `scene_number`) up to the next
  scene or section heading;
- `action`, `dialogue_block` (`character` with `character_name`,
  `character_extension`, `dual_dialogue_marker`; `parenthetical`,
  `dialogue`, `lyric`), `transition`, `centered`, `lyric`, `synopsis`,
  `page_break`;
- inline: `bold`, `italic`, `bold_italic`, `underline`, `escape`, `note`,
  `boneyard`; `force_marker` for the forcing characters `. @ ! ~ > =`.

Scene headings start with INT, EXT, EST, INT./EXT, INT/EXT, EXT/INT, I/E
in any case, or with one of [Lexington](https://github.com/LaPingvino/lexington)'s
prefixes for other languages (EN., EKST., BIN., ИНТ., ...) in capitals.

## Testing

```sh
tree-sitter generate && tree-sitter test
# compare with Lexington, line by line (Lexington checked out next to this repository)
go -C scripts/difflex run . some.fountain other.fountain   # -lang en: only these scene words
```

`scripts/difflex` lists the lines where this grammar and Lexington's parser
disagree on the element. Since Lexington v1.19.0 both follow the Fountain spec
on blank lines before scene headings and character cues, transitions with
blank lines around them, and a line of two spaces keeping a speech going;
Lexington's old, looser reading is still there as `-loose` (and `-keeploose`
rewrites a script so it reads the same under the spec). One difference is left,
by this grammar's own rule: a scene heading word borrowed from another language
starts a heading only with a dot after it (`OPEN ON…`, `BI (V.O.)` stay what
they are), while Lexington, given every language's words at once, takes them
as headings. With one language's words (`-lang en`) they agree.

## Installation
You're probably already using `nvim-treesitter`. Open the file where you put its configs:
```lua
require'nvim-treesitter.configs'.setup {
    -- ...
}

-- Add the following:
local treesitter_parser_config = require("nvim-treesitter.parsers").get_parser_configs()
treesitter_parser_config.fountain = {
    install_info = {
        url = "https://github.com/LaPingvino/tree-sitter-fountain",
        files = {"src/parser.c", "src/scanner.c"},
        branch = "main",
    },
    filetype = "fountain",
}
vim.filetype.add ({
    extension = {
        fountain = 'fountain'
    }
})
```

After doing that, you'll need to download `queries/highlights.scm` from the repo and put it into `(NeoVim config folder)/after/queries/fountain/highlights.scm`. Or some other `runtime folder` as `(folder)/queries/highlights.scm`. See `:help rtp` for a list of all possible folders.

Then, run `:TSInstall fountain`.

## Updating
You'll need to fetch `queries/highlights.scm` manually. Then run `:TSUpdate fountain`.

## References

<!-- NOTE: add the grammar's references here -->

[ci]: https://img.shields.io/github/actions/workflow/status/tree-sitter-grammars/tree-sitter-fountain/ci.yml?logo=github&label=CI
[discord]: https://img.shields.io/discord/1063097320771698699?logo=discord&label=discord
[matrix]: https://img.shields.io/matrix/tree-sitter-chat%3Amatrix.org?logo=matrix&label=matrix
[npm]: https://img.shields.io/npm/v/tree-sitter-fountain?logo=npm
[crates]: https://img.shields.io/crates/v/tree-sitter-fountain?logo=rust
[pypi]: https://img.shields.io/pypi/v/tree-sitter-fountain?logo=pypi&logoColor=ffd242
