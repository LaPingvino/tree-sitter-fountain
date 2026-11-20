// Command difflex compares the tree-sitter grammar's reading of Fountain
// files with Lexington's (github.com/LaPingvino/lexington), line by line.
//
// For each file it prints the lines where the two disagree on the
// element (scene, action, speaker, paren, dialog, trans, center, lyrics,
// section, synopse, note, boneyard, newpage, title), and a total.
//
//	go -C scripts/difflex run . [-ts tree-sitter] [-q] FILE.fountain...
//
// It runs `tree-sitter parse` in the grammar repository (the parent of
// scripts/), so the grammar must be generated. Lexington is taken from
// the checkout next to this repository (see go.mod).
package main

import (
	"flag"
	"fmt"
	"os"
	"os/exec"
	"path/filepath"
	"regexp"
	"runtime"
	"sort"
	"strconv"
	"strings"

	"github.com/LaPingvino/lexington/fountain"
	"github.com/LaPingvino/lexington/lex"
	"github.com/LaPingvino/lexington/rules"
)

// scene heading prefixes: Lexington's for all its languages, as the
// grammar knows them all
func scenes() []string {
	var all []string
	for _, words := range rules.DefaultConf().Scenes {
		all = append(all, words...)
	}
	return all
}

// the element types both sides are reduced to
var lexTypes = map[string]string{
	lex.TypeScene:    "scene",
	lex.TypeAction:   "action",
	lex.TypeSpeaker:  "speaker",
	lex.TypeDialog:   "dialog",
	lex.TypeParen:    "paren",
	lex.TypeTrans:    "trans",
	lex.TypeCenter:   "center",
	lex.TypeLyrics:   "lyrics",
	lex.TypeSection:  "section",
	lex.TypeSynopsis: "synopse",
	lex.TypeNote:     "note",
	lex.TypeBoneyard: "boneyard",
	lex.TypeNewPage:  "newpage",
}

// skipped: no line of their own
var lexSkip = map[string]bool{
	lex.TypeEmpty: true, lex.TypeDualOpen: true, lex.TypeDualNext: true,
	lex.TypeDualClose: true, lex.TypeTitlePage: true, "metasection": true,
}

var tsTypes = map[string]string{
	"scene_heading":   "scene",
	"action":          "action",
	"character":       "speaker",
	"dialogue":        "dialog",
	"parenthetical":   "paren",
	"transition":      "trans",
	"centered":        "center",
	"lyric":           "lyrics",
	"section_heading": "section",
	"synopsis":        "synopse",
	"page_break":      "newpage",
	"title_field":     "title",
	"note":            "note",
	"boneyard":        "boneyard",
}

var noteOnly = regexp.MustCompile(`^\s*(\[\[[^\]]*\]\]\s*)+$`)

func lexington(path string, lines []string) (map[int]string, error) {
	f, err := os.Open(path)
	if err != nil {
		return nil, err
	}
	defer f.Close()
	out := map[int]string{}
	for _, l := range fountain.ParseLines(scenes(), f) {
		if lexSkip[l.Type] || l.Source == 0 {
			continue
		}
		t, ok := lexTypes[l.Type]
		if !ok {
			t = "title" // title page fields are typed by their key
		}
		row := l.Source - 1
		if t == "newpage" && (row >= len(lines) || strings.Trim(strings.TrimSpace(lines[row]), "=") != "") {
			continue // the page break Lexington adds after the title page
		}
		if _, seen := out[row]; !seen {
			out[row] = t
		}
	}
	return out, nil
}

func treeSitter(ts, grammarDir, path string, lines []string) (map[int]string, error) {
	abs, _ := filepath.Abs(path)
	spans, err := nodeKinds(ts, grammarDir, abs)
	if err != nil {
		return nil, err
	}
	out := map[int]string{}
	prio := map[string]int{"ERROR": 5, "-": 4, "boneyard": 3, "note": 2}
	set := func(row int, t string) {
		if old, ok := out[row]; ok && prio[old] > prio[t] {
			return
		}
		out[row] = t
	}
	for _, s := range spans {
		t, ok := tsTypes[s.kind]
		if s.kind == "ERROR" {
			t, ok = "ERROR", true
		}
		if !ok {
			continue
		}
		last := s.er
		if s.ec == 0 && s.er > s.sr {
			last--
		}
		for row := s.sr; row <= last && row < len(lines); row++ {
			switch t {
			case "note":
				// a line of only notes is a note line; a note over
				// several lines is one row in Lexington, on its first line
				if row == s.sr && noteOnly.MatchString(lines[row]) {
					set(row, t)
				} else if s.er > s.sr && strings.TrimSpace(lines[s.sr][:min(s.sc, len(lines[s.sr]))]) == "" &&
					s.er < len(lines) && strings.TrimSpace(lines[s.er][min(s.ec, len(lines[s.er])):]) == "" {
					if row == s.sr {
						set(row, t)
					} else {
						set(row, "-")
					}
				}
			case "boneyard":
				// lines within a boneyard, and the line it starts
				if row > s.sr || strings.TrimSpace(lines[row][:min(s.sc, len(lines[row]))]) == "" {
					set(row, t)
				}
			default:
				set(row, t)
			}
		}
	}
	return out, nil
}

type kindSpan struct {
	kind           string
	sr, sc, er, ec int
}

var cstNode = regexp.MustCompile(`^\s*(?:\w+: )?\((\w+) \[(\d+), (\d+)\] - \[(\d+), (\d+)\]`)

// nodeKinds: the nodes of the parse, outer ones first.
func nodeKinds(ts, grammarDir, path string) ([]kindSpan, error) {
	cmd := exec.Command(ts, "parse", path)
	cmd.Dir = grammarDir
	raw, err := cmd.Output() // exits 1 on a parse with errors
	if len(raw) == 0 && err != nil {
		return nil, fmt.Errorf("%s parse: %w", ts, err)
	}
	var out []kindSpan
	for _, l := range strings.Split(string(raw), "\n") {
		m := cstNode.FindStringSubmatch(l)
		if m == nil {
			continue
		}
		a, _ := strconv.Atoi(m[2])
		b, _ := strconv.Atoi(m[3])
		c, _ := strconv.Atoi(m[4])
		d, _ := strconv.Atoi(m[5])
		out = append(out, kindSpan{m[1], a, b, c, d})
	}
	return out, nil
}

func main() {
	ts := flag.String("ts", "tree-sitter", "the tree-sitter CLI")
	quiet := flag.Bool("q", false, "only the counts")
	_, self, _, _ := runtime.Caller(0)
	grammar := flag.String("grammar", filepath.Join(filepath.Dir(self), "..", ".."), "the grammar's directory")
	flag.Parse()
	grammarDir := *grammar

	total, differ := 0, 0
	for _, path := range flag.Args() {
		data, err := os.ReadFile(path)
		if err != nil {
			fmt.Fprintln(os.Stderr, err)
			os.Exit(2)
		}
		lines := strings.Split(strings.ReplaceAll(string(data), "\r\n", "\n"), "\n")
		lx, err := lexington(path, lines)
		if err != nil {
			fmt.Fprintln(os.Stderr, err)
			os.Exit(2)
		}
		tr, err := treeSitter(*ts, grammarDir, path, lines)
		if err != nil {
			fmt.Fprintln(os.Stderr, err)
			os.Exit(2)
		}
		rows := map[int]bool{}
		for r := range lx {
			rows[r] = true
		}
		for r := range tr {
			if strings.TrimSpace(lines[r]) != "" {
				rows[r] = true
			}
		}
		var sorted []int
		for r := range rows {
			sorted = append(sorted, r)
		}
		sort.Ints(sorted)
		n := 0
		for _, r := range sorted {
			if strings.TrimSpace(lines[r]) == "" {
				continue
			}
			total++
			a, b := lx[r], tr[r]
			if a == "" {
				a = "-"
			}
			if b == "" {
				b = "-"
			}
			if a == "-" && b == "title" {
				a = b // a key whose value is on the lines below: no row of its own
			}
			if a != b {
				n++
				if !*quiet {
					fmt.Printf("%s:%d: lexington %s, tree-sitter %s: %s\n", path, r+1, a, b, lines[r])
				}
			}
		}
		differ += n
		fmt.Printf("%s: %d lines differ\n", path, n)
	}
	fmt.Printf("total: %d of %d lines differ\n", differ, total)
	if differ > 0 {
		os.Exit(1)
	}
}
