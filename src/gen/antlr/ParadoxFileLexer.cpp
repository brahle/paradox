
// Generated from antlr/ParadoxFile.g4 by ANTLR 4.8


#include "ParadoxFileLexer.h"


using namespace antlr4;


ParadoxFileLexer::ParadoxFileLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ParadoxFileLexer::~ParadoxFileLexer() {
  delete _interpreter;
}

std::string ParadoxFileLexer::getGrammarFileName() const {
  return "ParadoxFile.g4";
}

const std::vector<std::string>& ParadoxFileLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& ParadoxFileLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& ParadoxFileLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& ParadoxFileLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& ParadoxFileLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> ParadoxFileLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& ParadoxFileLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> ParadoxFileLexer::_decisionToDFA;
atn::PredictionContextCache ParadoxFileLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ParadoxFileLexer::_atn;
std::vector<uint16_t> ParadoxFileLexer::_serializedATN;

std::vector<std::string> ParadoxFileLexer::_ruleNames = {
  u8"OPERATOR", u8"BLOCK_START", u8"BLOCK_END", u8"VARIABLE_START", u8"VARIABLE_EXPRESSION_START", 
  u8"VARIABLE_EXPRESSION_END", u8"ABS_VALUE", u8"OPEN_PARENS", u8"CLOSE_PARENS", 
  u8"LIST_START", u8"INT", u8"PCT", u8"REAL", u8"DATE", u8"SSTRING", u8"DSTRING", 
  u8"CSTRING", u8"SYMBOL", u8"PLUS_MINUS", u8"MULTIPLY_DIVIDE", u8"WHITESPACE", 
  u8"LINE_COMMENT", u8"STRING_DELIM", u8"PLUS_MINUS_F", u8"MULTIPLY_DIVIDE_F", 
  u8"SYMBOL_START", u8"SYMBOL_INNER", u8"SYMBOL_END"
};

std::vector<std::string> ParadoxFileLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> ParadoxFileLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> ParadoxFileLexer::_literalNames = {
  "", "", u8"'{'", u8"'}'", "", u8"'['", u8"']'", u8"'|'", u8"'('", u8"')'", 
  u8"'list'"
};

std::vector<std::string> ParadoxFileLexer::_symbolicNames = {
  "", u8"OPERATOR", u8"BLOCK_START", u8"BLOCK_END", u8"VARIABLE_START", 
  u8"VARIABLE_EXPRESSION_START", u8"VARIABLE_EXPRESSION_END", u8"ABS_VALUE", 
  u8"OPEN_PARENS", u8"CLOSE_PARENS", u8"LIST_START", u8"INT", u8"PCT", u8"REAL", 
  u8"DATE", u8"SSTRING", u8"DSTRING", u8"CSTRING", u8"SYMBOL", u8"PLUS_MINUS", 
  u8"MULTIPLY_DIVIDE", u8"WHITESPACE", u8"LINE_COMMENT"
};

dfa::Vocabulary ParadoxFileLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ParadoxFileLexer::_tokenNames;

ParadoxFileLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x2, 0x18, 0xdf, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 
    0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
    0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 
    0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 
    0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 
    0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 
    0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 
    0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 
    0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x48, 0xa, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x50, 0xa, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xc, 0x5, 0xc, 0x62, 0xa, 0xc, 0x3, 0xc, 0x6, 0xc, 0x65, 
    0xa, 0xc, 0xd, 0xc, 0xe, 0xc, 0x66, 0x3, 0xd, 0x5, 0xd, 0x6a, 0xa, 0xd, 
    0x3, 0xd, 0x6, 0xd, 0x6d, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0x6e, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xe, 0x5, 0xe, 0x74, 0xa, 0xe, 0x3, 0xe, 0x7, 0xe, 0x77, 
    0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x7a, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x6, 
    0xe, 0x7e, 0xa, 0xe, 0xd, 0xe, 0xe, 0xe, 0x7f, 0x3, 0xf, 0x6, 0xf, 0x83, 
    0xa, 0xf, 0xd, 0xf, 0xe, 0xf, 0x84, 0x3, 0xf, 0x3, 0xf, 0x6, 0xf, 0x89, 
    0xa, 0xf, 0xd, 0xf, 0xe, 0xf, 0x8a, 0x3, 0xf, 0x3, 0xf, 0x6, 0xf, 0x8f, 
    0xa, 0xf, 0xd, 0xf, 0xe, 0xf, 0x90, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x7, 0x10, 0x97, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x9a, 0xb, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x7, 0x11, 0xa2, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xa5, 0xb, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 
    0xad, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xb0, 0xb, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x6, 0x13, 0xb8, 0xa, 
    0x13, 0xd, 0x13, 0xe, 0x13, 0xb9, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xbe, 
    0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x6, 
    0x16, 0xc5, 0xa, 0x16, 0xd, 0x16, 0xe, 0x16, 0xc6, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0xcd, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 
    0xd0, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x2, 0x2, 0x1e, 0x3, 0x3, 0x5, 0x4, 0x7, 
    0x5, 0x9, 0x6, 0xb, 0x7, 0xd, 0x8, 0xf, 0x9, 0x11, 0xa, 0x13, 0xb, 0x15, 
    0xc, 0x17, 0xd, 0x19, 0xe, 0x1b, 0xf, 0x1d, 0x10, 0x1f, 0x11, 0x21, 
    0x12, 0x23, 0x13, 0x25, 0x14, 0x27, 0x15, 0x29, 0x16, 0x2b, 0x17, 0x2d, 
    0x18, 0x2f, 0x2, 0x31, 0x2, 0x33, 0x2, 0x35, 0x2, 0x37, 0x2, 0x39, 0x2, 
    0x3, 0x2, 0xa, 0x4, 0x2, 0x3e, 0x3e, 0x40, 0x40, 0x3, 0x2, 0x32, 0x3b, 
    0x4, 0x2, 0x24, 0x24, 0x5e, 0x5e, 0x5, 0x2, 0xb, 0xc, 0xf, 0xf, 0x22, 
    0x22, 0x4, 0x2, 0xc, 0xc, 0xf, 0xf, 0x4, 0x2, 0x24, 0x24, 0x29, 0x29, 
    0x4, 0x2, 0x2d, 0x2d, 0x2f, 0x2f, 0x4, 0x2, 0x2c, 0x2c, 0x31, 0x31, 
    0x5, 0x9e, 0x2, 0x26, 0x2, 0x26, 0x2, 0x32, 0x2, 0x3b, 0x2, 0x43, 0x2, 
    0x5c, 0x2, 0x61, 0x2, 0x61, 0x2, 0x63, 0x2, 0x7c, 0x2, 0xac, 0x2, 0xac, 
    0x2, 0xb7, 0x2, 0xb7, 0x2, 0xb9, 0x2, 0xb9, 0x2, 0xbc, 0x2, 0xbc, 0x2, 
    0xc2, 0x2, 0xd8, 0x2, 0xda, 0x2, 0xf8, 0x2, 0xfa, 0x2, 0x1bc, 0x2, 0x1be, 
    0x2, 0x1c1, 0x2, 0x1c6, 0x2, 0x295, 0x2, 0x297, 0x2, 0x2ba, 0x2, 0x2c2, 
    0x2, 0x2c3, 0x2, 0x2e2, 0x2, 0x2e6, 0x2, 0x347, 0x2, 0x347, 0x2, 0x372, 
    0x2, 0x375, 0x2, 0x378, 0x2, 0x379, 0x2, 0x37c, 0x2, 0x37f, 0x2, 0x381, 
    0x2, 0x381, 0x2, 0x388, 0x2, 0x388, 0x2, 0x38a, 0x2, 0x38c, 0x2, 0x38e, 
    0x2, 0x38e, 0x2, 0x390, 0x2, 0x3a3, 0x2, 0x3a5, 0x2, 0x3f7, 0x2, 0x3f9, 
    0x2, 0x483, 0x2, 0x48c, 0x2, 0x531, 0x2, 0x533, 0x2, 0x558, 0x2, 0x563, 
    0x2, 0x589, 0x2, 0x10a2, 0x2, 0x10c7, 0x2, 0x10c9, 0x2, 0x10c9, 0x2, 
    0x10cf, 0x2, 0x10cf, 0x2, 0x13a2, 0x2, 0x13f7, 0x2, 0x13fa, 0x2, 0x13ff, 
    0x2, 0x1c82, 0x2, 0x1c8a, 0x2, 0x1d02, 0x2, 0x1dc1, 0x2, 0x1e02, 0x2, 
    0x1f17, 0x2, 0x1f1a, 0x2, 0x1f1f, 0x2, 0x1f22, 0x2, 0x1f47, 0x2, 0x1f4a, 
    0x2, 0x1f4f, 0x2, 0x1f52, 0x2, 0x1f59, 0x2, 0x1f5b, 0x2, 0x1f5b, 0x2, 
    0x1f5d, 0x2, 0x1f5d, 0x2, 0x1f5f, 0x2, 0x1f5f, 0x2, 0x1f61, 0x2, 0x1f7f, 
    0x2, 0x1f82, 0x2, 0x1fb6, 0x2, 0x1fb8, 0x2, 0x1fbe, 0x2, 0x1fc0, 0x2, 
    0x1fc0, 0x2, 0x1fc4, 0x2, 0x1fc6, 0x2, 0x1fc8, 0x2, 0x1fce, 0x2, 0x1fd2, 
    0x2, 0x1fd5, 0x2, 0x1fd8, 0x2, 0x1fdd, 0x2, 0x1fe2, 0x2, 0x1fee, 0x2, 
    0x1ff4, 0x2, 0x1ff6, 0x2, 0x1ff8, 0x2, 0x1ffe, 0x2, 0x201e, 0x2, 0x201f, 
    0x2, 0x2073, 0x2, 0x2073, 0x2, 0x2081, 0x2, 0x2081, 0x2, 0x2092, 0x2, 
    0x209e, 0x2, 0x2104, 0x2, 0x2104, 0x2, 0x2109, 0x2, 0x2109, 0x2, 0x210c, 
    0x2, 0x2115, 0x2, 0x2117, 0x2, 0x2117, 0x2, 0x211b, 0x2, 0x211f, 0x2, 
    0x2126, 0x2, 0x2126, 0x2, 0x2128, 0x2, 0x2128, 0x2, 0x212a, 0x2, 0x212a, 
    0x2, 0x212c, 0x2, 0x212f, 0x2, 0x2131, 0x2, 0x2136, 0x2, 0x213b, 0x2, 
    0x213b, 0x2, 0x213e, 0x2, 0x2141, 0x2, 0x2147, 0x2, 0x214b, 0x2, 0x2150, 
    0x2, 0x2150, 0x2, 0x2162, 0x2, 0x2181, 0x2, 0x2185, 0x2, 0x2186, 0x2, 
    0x24b8, 0x2, 0x24eb, 0x2, 0x2c02, 0x2, 0x2c30, 0x2, 0x2c32, 0x2, 0x2c60, 
    0x2, 0x2c62, 0x2, 0x2ce6, 0x2, 0x2ced, 0x2, 0x2cf0, 0x2, 0x2cf4, 0x2, 
    0x2cf5, 0x2, 0x2d02, 0x2, 0x2d27, 0x2, 0x2d29, 0x2, 0x2d29, 0x2, 0x2d2f, 
    0x2, 0x2d2f, 0x2, 0x3008, 0x2, 0x3009, 0x2, 0x3023, 0x2, 0x302b, 0x2, 
    0x303a, 0x2, 0x303c, 0x2, 0x3402, 0x2, 0x4db7, 0x2, 0x4e02, 0x2, 0x9fec, 
    0x2, 0xa642, 0x2, 0xa66f, 0x2, 0xa682, 0x2, 0xa69f, 0x2, 0xa724, 0x2, 
    0xa789, 0x2, 0xa78d, 0x2, 0xa790, 0x2, 0xa792, 0x2, 0xa7b0, 0x2, 0xa7b2, 
    0x2, 0xa7b9, 0x2, 0xa7fa, 0x2, 0xa7fc, 0x2, 0xab32, 0x2, 0xab5c, 0x2, 
    0xab5e, 0x2, 0xab67, 0x2, 0xab72, 0x2, 0xabc1, 0x2, 0xf902, 0x2, 0xfa6f, 
    0x2, 0xfa72, 0x2, 0xfadb, 0x2, 0xfb02, 0x2, 0xfb08, 0x2, 0xfb15, 0x2, 
    0xfb19, 0x2, 0xff23, 0x2, 0xff3c, 0x2, 0xff43, 0x2, 0xff5c, 0x2, 0x402, 
    0x3, 0x451, 0x3, 0x4b2, 0x3, 0x4d5, 0x3, 0x4da, 0x3, 0x4fd, 0x3, 0xc82, 
    0x3, 0xcb4, 0x3, 0xcc2, 0x3, 0xcf4, 0x3, 0x18a2, 0x3, 0x18e1, 0x3, 0x7002, 
    0x3, 0x87ee, 0x3, 0x8802, 0x3, 0x8af4, 0x3, 0xb172, 0x3, 0xb2fd, 0x3, 
    0xd402, 0x3, 0xd456, 0x3, 0xd458, 0x3, 0xd49e, 0x3, 0xd4a0, 0x3, 0xd4a1, 
    0x3, 0xd4a4, 0x3, 0xd4a4, 0x3, 0xd4a7, 0x3, 0xd4a8, 0x3, 0xd4ab, 0x3, 
    0xd4ae, 0x3, 0xd4b0, 0x3, 0xd4bb, 0x3, 0xd4bd, 0x3, 0xd4bd, 0x3, 0xd4bf, 
    0x3, 0xd4c5, 0x3, 0xd4c7, 0x3, 0xd507, 0x3, 0xd509, 0x3, 0xd50c, 0x3, 
    0xd50f, 0x3, 0xd516, 0x3, 0xd518, 0x3, 0xd51e, 0x3, 0xd520, 0x3, 0xd53b, 
    0x3, 0xd53d, 0x3, 0xd540, 0x3, 0xd542, 0x3, 0xd546, 0x3, 0xd548, 0x3, 
    0xd548, 0x3, 0xd54c, 0x3, 0xd552, 0x3, 0xd554, 0x3, 0xd6a7, 0x3, 0xd6aa, 
    0x3, 0xd6c2, 0x3, 0xd6c4, 0x3, 0xd6dc, 0x3, 0xd6de, 0x3, 0xd6fc, 0x3, 
    0xd6fe, 0x3, 0xd716, 0x3, 0xd718, 0x3, 0xd736, 0x3, 0xd738, 0x3, 0xd750, 
    0x3, 0xd752, 0x3, 0xd770, 0x3, 0xd772, 0x3, 0xd78a, 0x3, 0xd78c, 0x3, 
    0xd7aa, 0x3, 0xd7ac, 0x3, 0xd7c4, 0x3, 0xd7c6, 0x3, 0xd7cd, 0x3, 0xe902, 
    0x3, 0xe945, 0x3, 0xf132, 0x3, 0xf14b, 0x3, 0xf152, 0x3, 0xf16b, 0x3, 
    0xf172, 0x3, 0xf18b, 0x3, 0x2, 0x4, 0xa6d8, 0x4, 0xa702, 0x4, 0xb736, 
    0x4, 0xb742, 0x4, 0xb81f, 0x4, 0xb822, 0x4, 0xcea3, 0x4, 0xceb2, 0x4, 
    0xebe2, 0x4, 0xf802, 0x4, 0xfa1f, 0x4, 0x9f, 0x2, 0x26, 0x2, 0x29, 0x2, 
    0x2f, 0x2, 0x3c, 0x2, 0x42, 0x2, 0x5c, 0x2, 0x61, 0x2, 0x61, 0x2, 0x63, 
    0x2, 0x7c, 0x2, 0x7e, 0x2, 0x7e, 0x2, 0xac, 0x2, 0xac, 0x2, 0xb7, 0x2, 
    0xb7, 0x2, 0xb9, 0x2, 0xb9, 0x2, 0xbc, 0x2, 0xbc, 0x2, 0xc2, 0x2, 0xd8, 
    0x2, 0xda, 0x2, 0xf8, 0x2, 0xfa, 0x2, 0x1bc, 0x2, 0x1be, 0x2, 0x1c1, 
    0x2, 0x1c6, 0x2, 0x295, 0x2, 0x297, 0x2, 0x2ba, 0x2, 0x2c2, 0x2, 0x2c3, 
    0x2, 0x2e2, 0x2, 0x2e6, 0x2, 0x347, 0x2, 0x347, 0x2, 0x372, 0x2, 0x375, 
    0x2, 0x378, 0x2, 0x379, 0x2, 0x37c, 0x2, 0x37f, 0x2, 0x381, 0x2, 0x381, 
    0x2, 0x388, 0x2, 0x388, 0x2, 0x38a, 0x2, 0x38c, 0x2, 0x38e, 0x2, 0x38e, 
    0x2, 0x390, 0x2, 0x3a3, 0x2, 0x3a5, 0x2, 0x3f7, 0x2, 0x3f9, 0x2, 0x483, 
    0x2, 0x48c, 0x2, 0x531, 0x2, 0x533, 0x2, 0x558, 0x2, 0x563, 0x2, 0x589, 
    0x2, 0x10a2, 0x2, 0x10c7, 0x2, 0x10c9, 0x2, 0x10c9, 0x2, 0x10cf, 0x2, 
    0x10cf, 0x2, 0x13a2, 0x2, 0x13f7, 0x2, 0x13fa, 0x2, 0x13ff, 0x2, 0x1c82, 
    0x2, 0x1c8a, 0x2, 0x1d02, 0x2, 0x1dc1, 0x2, 0x1e02, 0x2, 0x1f17, 0x2, 
    0x1f1a, 0x2, 0x1f1f, 0x2, 0x1f22, 0x2, 0x1f47, 0x2, 0x1f4a, 0x2, 0x1f4f, 
    0x2, 0x1f52, 0x2, 0x1f59, 0x2, 0x1f5b, 0x2, 0x1f5b, 0x2, 0x1f5d, 0x2, 
    0x1f5d, 0x2, 0x1f5f, 0x2, 0x1f5f, 0x2, 0x1f61, 0x2, 0x1f7f, 0x2, 0x1f82, 
    0x2, 0x1fb6, 0x2, 0x1fb8, 0x2, 0x1fbe, 0x2, 0x1fc0, 0x2, 0x1fc0, 0x2, 
    0x1fc4, 0x2, 0x1fc6, 0x2, 0x1fc8, 0x2, 0x1fce, 0x2, 0x1fd2, 0x2, 0x1fd5, 
    0x2, 0x1fd8, 0x2, 0x1fdd, 0x2, 0x1fe2, 0x2, 0x1fee, 0x2, 0x1ff4, 0x2, 
    0x1ff6, 0x2, 0x1ff8, 0x2, 0x1ffe, 0x2, 0x201e, 0x2, 0x201f, 0x2, 0x2073, 
    0x2, 0x2073, 0x2, 0x2081, 0x2, 0x2081, 0x2, 0x2092, 0x2, 0x209e, 0x2, 
    0x2104, 0x2, 0x2104, 0x2, 0x2109, 0x2, 0x2109, 0x2, 0x210c, 0x2, 0x2115, 
    0x2, 0x2117, 0x2, 0x2117, 0x2, 0x211b, 0x2, 0x211f, 0x2, 0x2126, 0x2, 
    0x2126, 0x2, 0x2128, 0x2, 0x2128, 0x2, 0x212a, 0x2, 0x212a, 0x2, 0x212c, 
    0x2, 0x212f, 0x2, 0x2131, 0x2, 0x2136, 0x2, 0x213b, 0x2, 0x213b, 0x2, 
    0x213e, 0x2, 0x2141, 0x2, 0x2147, 0x2, 0x214b, 0x2, 0x2150, 0x2, 0x2150, 
    0x2, 0x2162, 0x2, 0x2181, 0x2, 0x2185, 0x2, 0x2186, 0x2, 0x24b8, 0x2, 
    0x24eb, 0x2, 0x2c02, 0x2, 0x2c30, 0x2, 0x2c32, 0x2, 0x2c60, 0x2, 0x2c62, 
    0x2, 0x2ce6, 0x2, 0x2ced, 0x2, 0x2cf0, 0x2, 0x2cf4, 0x2, 0x2cf5, 0x2, 
    0x2d02, 0x2, 0x2d27, 0x2, 0x2d29, 0x2, 0x2d29, 0x2, 0x2d2f, 0x2, 0x2d2f, 
    0x2, 0x3008, 0x2, 0x3009, 0x2, 0x3023, 0x2, 0x302b, 0x2, 0x303a, 0x2, 
    0x303c, 0x2, 0x3402, 0x2, 0x4db7, 0x2, 0x4e02, 0x2, 0x9fec, 0x2, 0xa642, 
    0x2, 0xa66f, 0x2, 0xa682, 0x2, 0xa69f, 0x2, 0xa724, 0x2, 0xa789, 0x2, 
    0xa78d, 0x2, 0xa790, 0x2, 0xa792, 0x2, 0xa7b0, 0x2, 0xa7b2, 0x2, 0xa7b9, 
    0x2, 0xa7fa, 0x2, 0xa7fc, 0x2, 0xab32, 0x2, 0xab5c, 0x2, 0xab5e, 0x2, 
    0xab67, 0x2, 0xab72, 0x2, 0xabc1, 0x2, 0xf902, 0x2, 0xfa6f, 0x2, 0xfa72, 
    0x2, 0xfadb, 0x2, 0xfb02, 0x2, 0xfb08, 0x2, 0xfb15, 0x2, 0xfb19, 0x2, 
    0xff23, 0x2, 0xff3c, 0x2, 0xff43, 0x2, 0xff5c, 0x2, 0x402, 0x3, 0x451, 
    0x3, 0x4b2, 0x3, 0x4d5, 0x3, 0x4da, 0x3, 0x4fd, 0x3, 0xc82, 0x3, 0xcb4, 
    0x3, 0xcc2, 0x3, 0xcf4, 0x3, 0x18a2, 0x3, 0x18e1, 0x3, 0x7002, 0x3, 
    0x87ee, 0x3, 0x8802, 0x3, 0x8af4, 0x3, 0xb172, 0x3, 0xb2fd, 0x3, 0xd402, 
    0x3, 0xd456, 0x3, 0xd458, 0x3, 0xd49e, 0x3, 0xd4a0, 0x3, 0xd4a1, 0x3, 
    0xd4a4, 0x3, 0xd4a4, 0x3, 0xd4a7, 0x3, 0xd4a8, 0x3, 0xd4ab, 0x3, 0xd4ae, 
    0x3, 0xd4b0, 0x3, 0xd4bb, 0x3, 0xd4bd, 0x3, 0xd4bd, 0x3, 0xd4bf, 0x3, 
    0xd4c5, 0x3, 0xd4c7, 0x3, 0xd507, 0x3, 0xd509, 0x3, 0xd50c, 0x3, 0xd50f, 
    0x3, 0xd516, 0x3, 0xd518, 0x3, 0xd51e, 0x3, 0xd520, 0x3, 0xd53b, 0x3, 
    0xd53d, 0x3, 0xd540, 0x3, 0xd542, 0x3, 0xd546, 0x3, 0xd548, 0x3, 0xd548, 
    0x3, 0xd54c, 0x3, 0xd552, 0x3, 0xd554, 0x3, 0xd6a7, 0x3, 0xd6aa, 0x3, 
    0xd6c2, 0x3, 0xd6c4, 0x3, 0xd6dc, 0x3, 0xd6de, 0x3, 0xd6fc, 0x3, 0xd6fe, 
    0x3, 0xd716, 0x3, 0xd718, 0x3, 0xd736, 0x3, 0xd738, 0x3, 0xd750, 0x3, 
    0xd752, 0x3, 0xd770, 0x3, 0xd772, 0x3, 0xd78a, 0x3, 0xd78c, 0x3, 0xd7aa, 
    0x3, 0xd7ac, 0x3, 0xd7c4, 0x3, 0xd7c6, 0x3, 0xd7cd, 0x3, 0xe902, 0x3, 
    0xe945, 0x3, 0xf132, 0x3, 0xf14b, 0x3, 0xf152, 0x3, 0xf16b, 0x3, 0xf172, 
    0x3, 0xf18b, 0x3, 0x2, 0x4, 0xa6d8, 0x4, 0xa702, 0x4, 0xb736, 0x4, 0xb742, 
    0x4, 0xb81f, 0x4, 0xb822, 0x4, 0xcea3, 0x4, 0xceb2, 0x4, 0xebe2, 0x4, 
    0xf802, 0x4, 0xfa1f, 0x4, 0x9e, 0x2, 0x26, 0x2, 0x29, 0x2, 0x2f, 0x2, 
    0x3c, 0x2, 0x42, 0x2, 0x5c, 0x2, 0x61, 0x2, 0x61, 0x2, 0x63, 0x2, 0x7c, 
    0x2, 0xac, 0x2, 0xac, 0x2, 0xb7, 0x2, 0xb7, 0x2, 0xb9, 0x2, 0xb9, 0x2, 
    0xbc, 0x2, 0xbc, 0x2, 0xc2, 0x2, 0xd8, 0x2, 0xda, 0x2, 0xf8, 0x2, 0xfa, 
    0x2, 0x1bc, 0x2, 0x1be, 0x2, 0x1c1, 0x2, 0x1c6, 0x2, 0x295, 0x2, 0x297, 
    0x2, 0x2ba, 0x2, 0x2c2, 0x2, 0x2c3, 0x2, 0x2e2, 0x2, 0x2e6, 0x2, 0x347, 
    0x2, 0x347, 0x2, 0x372, 0x2, 0x375, 0x2, 0x378, 0x2, 0x379, 0x2, 0x37c, 
    0x2, 0x37f, 0x2, 0x381, 0x2, 0x381, 0x2, 0x388, 0x2, 0x388, 0x2, 0x38a, 
    0x2, 0x38c, 0x2, 0x38e, 0x2, 0x38e, 0x2, 0x390, 0x2, 0x3a3, 0x2, 0x3a5, 
    0x2, 0x3f7, 0x2, 0x3f9, 0x2, 0x483, 0x2, 0x48c, 0x2, 0x531, 0x2, 0x533, 
    0x2, 0x558, 0x2, 0x563, 0x2, 0x589, 0x2, 0x10a2, 0x2, 0x10c7, 0x2, 0x10c9, 
    0x2, 0x10c9, 0x2, 0x10cf, 0x2, 0x10cf, 0x2, 0x13a2, 0x2, 0x13f7, 0x2, 
    0x13fa, 0x2, 0x13ff, 0x2, 0x1c82, 0x2, 0x1c8a, 0x2, 0x1d02, 0x2, 0x1dc1, 
    0x2, 0x1e02, 0x2, 0x1f17, 0x2, 0x1f1a, 0x2, 0x1f1f, 0x2, 0x1f22, 0x2, 
    0x1f47, 0x2, 0x1f4a, 0x2, 0x1f4f, 0x2, 0x1f52, 0x2, 0x1f59, 0x2, 0x1f5b, 
    0x2, 0x1f5b, 0x2, 0x1f5d, 0x2, 0x1f5d, 0x2, 0x1f5f, 0x2, 0x1f5f, 0x2, 
    0x1f61, 0x2, 0x1f7f, 0x2, 0x1f82, 0x2, 0x1fb6, 0x2, 0x1fb8, 0x2, 0x1fbe, 
    0x2, 0x1fc0, 0x2, 0x1fc0, 0x2, 0x1fc4, 0x2, 0x1fc6, 0x2, 0x1fc8, 0x2, 
    0x1fce, 0x2, 0x1fd2, 0x2, 0x1fd5, 0x2, 0x1fd8, 0x2, 0x1fdd, 0x2, 0x1fe2, 
    0x2, 0x1fee, 0x2, 0x1ff4, 0x2, 0x1ff6, 0x2, 0x1ff8, 0x2, 0x1ffe, 0x2, 
    0x201e, 0x2, 0x201f, 0x2, 0x2073, 0x2, 0x2073, 0x2, 0x2081, 0x2, 0x2081, 
    0x2, 0x2092, 0x2, 0x209e, 0x2, 0x2104, 0x2, 0x2104, 0x2, 0x2109, 0x2, 
    0x2109, 0x2, 0x210c, 0x2, 0x2115, 0x2, 0x2117, 0x2, 0x2117, 0x2, 0x211b, 
    0x2, 0x211f, 0x2, 0x2126, 0x2, 0x2126, 0x2, 0x2128, 0x2, 0x2128, 0x2, 
    0x212a, 0x2, 0x212a, 0x2, 0x212c, 0x2, 0x212f, 0x2, 0x2131, 0x2, 0x2136, 
    0x2, 0x213b, 0x2, 0x213b, 0x2, 0x213e, 0x2, 0x2141, 0x2, 0x2147, 0x2, 
    0x214b, 0x2, 0x2150, 0x2, 0x2150, 0x2, 0x2162, 0x2, 0x2181, 0x2, 0x2185, 
    0x2, 0x2186, 0x2, 0x24b8, 0x2, 0x24eb, 0x2, 0x2c02, 0x2, 0x2c30, 0x2, 
    0x2c32, 0x2, 0x2c60, 0x2, 0x2c62, 0x2, 0x2ce6, 0x2, 0x2ced, 0x2, 0x2cf0, 
    0x2, 0x2cf4, 0x2, 0x2cf5, 0x2, 0x2d02, 0x2, 0x2d27, 0x2, 0x2d29, 0x2, 
    0x2d29, 0x2, 0x2d2f, 0x2, 0x2d2f, 0x2, 0x3008, 0x2, 0x3009, 0x2, 0x3023, 
    0x2, 0x302b, 0x2, 0x303a, 0x2, 0x303c, 0x2, 0x3402, 0x2, 0x4db7, 0x2, 
    0x4e02, 0x2, 0x9fec, 0x2, 0xa642, 0x2, 0xa66f, 0x2, 0xa682, 0x2, 0xa69f, 
    0x2, 0xa724, 0x2, 0xa789, 0x2, 0xa78d, 0x2, 0xa790, 0x2, 0xa792, 0x2, 
    0xa7b0, 0x2, 0xa7b2, 0x2, 0xa7b9, 0x2, 0xa7fa, 0x2, 0xa7fc, 0x2, 0xab32, 
    0x2, 0xab5c, 0x2, 0xab5e, 0x2, 0xab67, 0x2, 0xab72, 0x2, 0xabc1, 0x2, 
    0xf902, 0x2, 0xfa6f, 0x2, 0xfa72, 0x2, 0xfadb, 0x2, 0xfb02, 0x2, 0xfb08, 
    0x2, 0xfb15, 0x2, 0xfb19, 0x2, 0xff23, 0x2, 0xff3c, 0x2, 0xff43, 0x2, 
    0xff5c, 0x2, 0x402, 0x3, 0x451, 0x3, 0x4b2, 0x3, 0x4d5, 0x3, 0x4da, 
    0x3, 0x4fd, 0x3, 0xc82, 0x3, 0xcb4, 0x3, 0xcc2, 0x3, 0xcf4, 0x3, 0x18a2, 
    0x3, 0x18e1, 0x3, 0x7002, 0x3, 0x87ee, 0x3, 0x8802, 0x3, 0x8af4, 0x3, 
    0xb172, 0x3, 0xb2fd, 0x3, 0xd402, 0x3, 0xd456, 0x3, 0xd458, 0x3, 0xd49e, 
    0x3, 0xd4a0, 0x3, 0xd4a1, 0x3, 0xd4a4, 0x3, 0xd4a4, 0x3, 0xd4a7, 0x3, 
    0xd4a8, 0x3, 0xd4ab, 0x3, 0xd4ae, 0x3, 0xd4b0, 0x3, 0xd4bb, 0x3, 0xd4bd, 
    0x3, 0xd4bd, 0x3, 0xd4bf, 0x3, 0xd4c5, 0x3, 0xd4c7, 0x3, 0xd507, 0x3, 
    0xd509, 0x3, 0xd50c, 0x3, 0xd50f, 0x3, 0xd516, 0x3, 0xd518, 0x3, 0xd51e, 
    0x3, 0xd520, 0x3, 0xd53b, 0x3, 0xd53d, 0x3, 0xd540, 0x3, 0xd542, 0x3, 
    0xd546, 0x3, 0xd548, 0x3, 0xd548, 0x3, 0xd54c, 0x3, 0xd552, 0x3, 0xd554, 
    0x3, 0xd6a7, 0x3, 0xd6aa, 0x3, 0xd6c2, 0x3, 0xd6c4, 0x3, 0xd6dc, 0x3, 
    0xd6de, 0x3, 0xd6fc, 0x3, 0xd6fe, 0x3, 0xd716, 0x3, 0xd718, 0x3, 0xd736, 
    0x3, 0xd738, 0x3, 0xd750, 0x3, 0xd752, 0x3, 0xd770, 0x3, 0xd772, 0x3, 
    0xd78a, 0x3, 0xd78c, 0x3, 0xd7aa, 0x3, 0xd7ac, 0x3, 0xd7c4, 0x3, 0xd7c6, 
    0x3, 0xd7cd, 0x3, 0xe902, 0x3, 0xe945, 0x3, 0xf132, 0x3, 0xf14b, 0x3, 
    0xf152, 0x3, 0xf16b, 0x3, 0xf172, 0x3, 0xf18b, 0x3, 0x2, 0x4, 0xa6d8, 
    0x4, 0xa702, 0x4, 0xb736, 0x4, 0xb742, 0x4, 0xb81f, 0x4, 0xb822, 0x4, 
    0xcea3, 0x4, 0xceb2, 0x4, 0xebe2, 0x4, 0xf802, 0x4, 0xfa1f, 0x4, 0xf4, 
    0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x2, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x17, 0x3, 0x2, 0x2, 0x2, 0x2, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x2, 0x21, 0x3, 0x2, 0x2, 0x2, 0x2, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x25, 0x3, 0x2, 0x2, 0x2, 0x2, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x3, 0x47, 0x3, 0x2, 0x2, 0x2, 0x5, 0x49, 
    0x3, 0x2, 0x2, 0x2, 0x7, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x9, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0xb, 0x51, 0x3, 0x2, 0x2, 0x2, 0xd, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0xf, 0x55, 0x3, 0x2, 0x2, 0x2, 0x11, 0x57, 0x3, 0x2, 0x2, 0x2, 0x13, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0x15, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x17, 0x61, 
    0x3, 0x2, 0x2, 0x2, 0x19, 0x69, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x73, 0x3, 
    0x2, 0x2, 0x2, 0x1d, 0x82, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x92, 0x3, 0x2, 
    0x2, 0x2, 0x21, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x23, 0xa8, 0x3, 0x2, 0x2, 
    0x2, 0x25, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x27, 0xbf, 0x3, 0x2, 0x2, 0x2, 
    0x29, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x2b, 0xc4, 0x3, 0x2, 0x2, 0x2, 0x2d, 
    0xca, 0x3, 0x2, 0x2, 0x2, 0x2f, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x31, 0xd5, 
    0x3, 0x2, 0x2, 0x2, 0x33, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x35, 0xd9, 0x3, 
    0x2, 0x2, 0x2, 0x37, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x39, 0xdd, 0x3, 0x2, 
    0x2, 0x2, 0x3b, 0x48, 0x7, 0x3f, 0x2, 0x2, 0x3c, 0x3d, 0x7, 0x3e, 0x2, 
    0x2, 0x3d, 0x48, 0x7, 0x40, 0x2, 0x2, 0x3e, 0x48, 0x9, 0x2, 0x2, 0x2, 
    0x3f, 0x40, 0x7, 0x3e, 0x2, 0x2, 0x40, 0x48, 0x7, 0x3f, 0x2, 0x2, 0x41, 
    0x42, 0x7, 0x40, 0x2, 0x2, 0x42, 0x48, 0x7, 0x3f, 0x2, 0x2, 0x43, 0x44, 
    0x7, 0x23, 0x2, 0x2, 0x44, 0x48, 0x7, 0x3f, 0x2, 0x2, 0x45, 0x46, 0x7, 
    0x3f, 0x2, 0x2, 0x46, 0x48, 0x7, 0x3f, 0x2, 0x2, 0x47, 0x3b, 0x3, 0x2, 
    0x2, 0x2, 0x47, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x47, 0x3e, 0x3, 0x2, 0x2, 
    0x2, 0x47, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x47, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x47, 0x43, 0x3, 0x2, 0x2, 0x2, 0x47, 0x45, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x4, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x7, 0x7d, 0x2, 0x2, 0x4a, 0x6, 
    0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x7f, 0x2, 0x2, 0x4c, 0x8, 0x3, 
    0x2, 0x2, 0x2, 0x4d, 0x4f, 0x7, 0x42, 0x2, 0x2, 0x4e, 0x50, 0x7, 0x5e, 
    0x2, 0x2, 0x4f, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0xa, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x7, 0x5d, 0x2, 0x2, 
    0x52, 0xc, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0x5f, 0x2, 0x2, 0x54, 
    0xe, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x7, 0x7e, 0x2, 0x2, 0x56, 0x10, 
    0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x7, 0x2a, 0x2, 0x2, 0x58, 0x12, 0x3, 
    0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 0x2b, 0x2, 0x2, 0x5a, 0x14, 0x3, 0x2, 
    0x2, 0x2, 0x5b, 0x5c, 0x7, 0x6e, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x6b, 0x2, 
    0x2, 0x5d, 0x5e, 0x7, 0x75, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x76, 0x2, 0x2, 
    0x5f, 0x16, 0x3, 0x2, 0x2, 0x2, 0x60, 0x62, 0x5, 0x27, 0x14, 0x2, 0x61, 
    0x60, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 0x64, 
    0x3, 0x2, 0x2, 0x2, 0x63, 0x65, 0x9, 0x3, 0x2, 0x2, 0x64, 0x63, 0x3, 
    0x2, 0x2, 0x2, 0x65, 0x66, 0x3, 0x2, 0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 0x2, 0x2, 0x67, 0x18, 0x3, 0x2, 0x2, 
    0x2, 0x68, 0x6a, 0x5, 0x27, 0x14, 0x2, 0x69, 0x68, 0x3, 0x2, 0x2, 0x2, 
    0x69, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6b, 
    0x6d, 0x9, 0x3, 0x2, 0x2, 0x6c, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 
    0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 
    0x2, 0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x7, 0x27, 
    0x2, 0x2, 0x71, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x72, 0x74, 0x5, 0x27, 0x14, 
    0x2, 0x73, 0x72, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x78, 0x3, 0x2, 0x2, 0x2, 0x75, 0x77, 0x9, 0x3, 0x2, 0x2, 0x76, 
    0x75, 0x3, 0x2, 0x2, 0x2, 0x77, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x78, 0x76, 
    0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7b, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7d, 0x7, 0x30, 
    0x2, 0x2, 0x7c, 0x7e, 0x9, 0x3, 0x2, 0x2, 0x7d, 0x7c, 0x3, 0x2, 0x2, 
    0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 
    0x7f, 0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x81, 
    0x83, 0x9, 0x3, 0x2, 0x2, 0x82, 0x81, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 
    0x3, 0x2, 0x2, 0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x3, 
    0x2, 0x2, 0x2, 0x85, 0x86, 0x3, 0x2, 0x2, 0x2, 0x86, 0x88, 0x7, 0x30, 
    0x2, 0x2, 0x87, 0x89, 0x9, 0x3, 0x2, 0x2, 0x88, 0x87, 0x3, 0x2, 0x2, 
    0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 
    0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 
    0x8e, 0x7, 0x30, 0x2, 0x2, 0x8d, 0x8f, 0x9, 0x3, 0x2, 0x2, 0x8e, 0x8d, 
    0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8e, 0x3, 
    0x2, 0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 0x1e, 0x3, 0x2, 
    0x2, 0x2, 0x92, 0x98, 0x7, 0x29, 0x2, 0x2, 0x93, 0x97, 0xa, 0x4, 0x2, 
    0x2, 0x94, 0x95, 0x7, 0x5e, 0x2, 0x2, 0x95, 0x97, 0x9, 0x4, 0x2, 0x2, 
    0x96, 0x93, 0x3, 0x2, 0x2, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 0x2, 0x97, 
    0x9a, 0x3, 0x2, 0x2, 0x2, 0x98, 0x96, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 
    0x3, 0x2, 0x2, 0x2, 0x99, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x98, 0x3, 
    0x2, 0x2, 0x2, 0x9b, 0x9c, 0x7, 0x29, 0x2, 0x2, 0x9c, 0x20, 0x3, 0x2, 
    0x2, 0x2, 0x9d, 0xa3, 0x7, 0x24, 0x2, 0x2, 0x9e, 0xa2, 0xa, 0x4, 0x2, 
    0x2, 0x9f, 0xa0, 0x7, 0x5e, 0x2, 0x2, 0xa0, 0xa2, 0x9, 0x4, 0x2, 0x2, 
    0xa1, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa2, 
    0xa5, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa3, 0x3, 
    0x2, 0x2, 0x2, 0xa6, 0xa7, 0x7, 0x24, 0x2, 0x2, 0xa7, 0x22, 0x3, 0x2, 
    0x2, 0x2, 0xa8, 0xae, 0x7, 0x201e, 0x2, 0x2, 0xa9, 0xad, 0xa, 0x4, 0x2, 
    0x2, 0xaa, 0xab, 0x7, 0x5e, 0x2, 0x2, 0xab, 0xad, 0x9, 0x4, 0x2, 0x2, 
    0xac, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xad, 
    0xb0, 0x3, 0x2, 0x2, 0x2, 0xae, 0xac, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 
    0x3, 0x2, 0x2, 0x2, 0xaf, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xae, 0x3, 
    0x2, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0x201f, 0x2, 0x2, 0xb2, 0x24, 0x3, 0x2, 
    0x2, 0x2, 0xb3, 0xbd, 0x5, 0x35, 0x1b, 0x2, 0xb4, 0xbe, 0x3, 0x2, 0x2, 
    0x2, 0xb5, 0xbe, 0x5, 0x39, 0x1d, 0x2, 0xb6, 0xb8, 0x5, 0x37, 0x1c, 
    0x2, 0xb7, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x3, 0x2, 0x2, 0x2, 
    0xb9, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 
    0xbb, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x5, 0x39, 0x1d, 0x2, 0xbc, 0xbe, 
    0x3, 0x2, 0x2, 0x2, 0xbd, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xb5, 0x3, 
    0x2, 0x2, 0x2, 0xbd, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x26, 0x3, 0x2, 
    0x2, 0x2, 0xbf, 0xc0, 0x5, 0x31, 0x19, 0x2, 0xc0, 0x28, 0x3, 0x2, 0x2, 
    0x2, 0xc1, 0xc2, 0x5, 0x33, 0x1a, 0x2, 0xc2, 0x2a, 0x3, 0x2, 0x2, 0x2, 
    0xc3, 0xc5, 0x9, 0x5, 0x2, 0x2, 0xc4, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc5, 
    0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 
    0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x8, 
    0x16, 0x2, 0x2, 0xc9, 0x2c, 0x3, 0x2, 0x2, 0x2, 0xca, 0xce, 0x7, 0x25, 
    0x2, 0x2, 0xcb, 0xcd, 0xa, 0x6, 0x2, 0x2, 0xcc, 0xcb, 0x3, 0x2, 0x2, 
    0x2, 0xcd, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 
    0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd0, 
    0xce, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x8, 0x17, 0x3, 0x2, 0xd2, 0x2e, 
    0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x9, 0x7, 0x2, 0x2, 0xd4, 0x30, 0x3, 
    0x2, 0x2, 0x2, 0xd5, 0xd6, 0x9, 0x8, 0x2, 0x2, 0xd6, 0x32, 0x3, 0x2, 
    0x2, 0x2, 0xd7, 0xd8, 0x9, 0x9, 0x2, 0x2, 0xd8, 0x34, 0x3, 0x2, 0x2, 
    0x2, 0xd9, 0xda, 0x9, 0xa, 0x2, 0x2, 0xda, 0x36, 0x3, 0x2, 0x2, 0x2, 
    0xdb, 0xdc, 0x9, 0xb, 0x2, 0x2, 0xdc, 0x38, 0x3, 0x2, 0x2, 0x2, 0xdd, 
    0xde, 0x9, 0xc, 0x2, 0x2, 0xde, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x19, 0x2, 
    0x47, 0x4f, 0x61, 0x66, 0x69, 0x6e, 0x73, 0x78, 0x7f, 0x84, 0x8a, 0x90, 
    0x96, 0x98, 0xa1, 0xa3, 0xac, 0xae, 0xb9, 0xbd, 0xc6, 0xce, 0x4, 0x8, 
    0x2, 0x2, 0x2, 0x3, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ParadoxFileLexer::Initializer ParadoxFileLexer::_init;
