module github.com/LaPingvino/tree-sitter-fountain/scripts/difflex

go 1.26.0

require github.com/LaPingvino/lexington v0.0.0

require github.com/BurntSushi/toml v1.5.0 // indirect

// Lexington checked out next to this repository (~/Projects/lexington).
replace github.com/LaPingvino/lexington => ../../../lexington
