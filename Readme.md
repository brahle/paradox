# Paradox ANTLR File Parser

This project that contains the [ANTLR](https://www.antlr.org/) definitions for a Paradox file parser. It should work with Paradox games like Hearts of Iron IV, Stellaris and Crusader Kings 3, and should allow you to make your own parser in any of the languages that ANTLR supports, like Java, C#, Python 2, Python 3, JavaScript, Go, C++, Swift, PHP and Dart.

There are two versions of the parser:

1. [PardoxFile.g4](src/antlr/ParadoxFile.g4) - this parser should work for most Paradox files.
2. [PardoxFast.g4](src/antlr/ParadoxFast.g4) - this parser assumes that the Paradox file is "nicely" formatted - e.g. arrays can't have assignments inside, there are no special declarations of lists, and there are no expressions using variables. This allows this parser to be about 6x faster than the other one.

# Usage instructions

You should use the antlr definition files from above to generate bindings for your favourite language and use it to implement something actually useful.

## Build instructions

This repository only includes a trivial parser implementation - [main.cpp](src/main.cpp) and [main-fast.cpp](src/main-fast.cpp). If you desperately want to build this project, you can use the [Makefile](Makefile). You may need to fix the paths to the antlr jar in the Makefile first, though.

Requirements:
- Ubuntu for Windows Subsystem For Linux (WSL) running on Windows 10.
- g++ 5.4.0
- antlr 4.8

To build:

```bash
$ make -j 6 antlr.ParadoxFile.o main
```

or

```bash
$ make -j 6 antlr.ParadoxFast.o main-fast
```

This creates the `bin/main(-fast)` executable. To run the parser on `.txt` files in a hierarchy (e.g. from the [tests](tests) folder), you can do something like this:

```bash
$ find  tests/ -type f | grep txt | xargs -n 1 -I {} bin/main "{}"
```

If you want to test it on a larger number of files (e.g. everything within the game folder), you can use the `xargs` parallelism switch (`-P n`, where `n` is the number of parallel processes).

# Tests

Besides the contents [tests](tests) folder, this has been tested by running the parser against:

- Stellaris save game
- All .txt files from the `%steamapps%\common\Stellaris\common` directory (version 2.7.2)
- All .txt files from the `%steamapps%\common\Crusader Kings III\game\common` directory (version 1.1.2).
- All .txt files from the `%steamapps%\common\Hearts of Iron IV\common` directory (version 1.9.3).
  - Note: The parser fails to parse the following files:
    - `on_actions/04_mtg_on_actions.txt` - file is not using the UTF-8 encoding, but Windows-1252. It should work fine if the encoding is fixed.
    - `on_actions/05_lar_on_actions.txt` - file is not using the UTF-8 encoding, but Windows-1252. It should work fine if the encoding is fixed.
    - `units/names_divisions/BRA_names_divisions.txt` - file is missing a closing `}` at the end.

# Special thanks

Initial implementation taken from https://github.com/rikbrown/klausewitz-parser
