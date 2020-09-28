
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
  u8"OPERATOR", u8"BLOCK_START", u8"BLOCK_END", u8"INT", u8"PCT", u8"REAL", 
  u8"DATE", u8"STRING", u8"SYMBOL", u8"WHITESPACE", u8"LINE_COMMENT", u8"STRING_DELIM", 
  u8"NEGATION"
};

std::vector<std::string> ParadoxFileLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> ParadoxFileLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> ParadoxFileLexer::_literalNames = {
  "", "", u8"'{'", u8"'}'"
};

std::vector<std::string> ParadoxFileLexer::_symbolicNames = {
  "", u8"OPERATOR", u8"BLOCK_START", u8"BLOCK_END", u8"INT", u8"PCT", u8"REAL", 
  u8"DATE", u8"STRING", u8"SYMBOL", u8"WHITESPACE", u8"LINE_COMMENT"
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
    0x2, 0xd, 0x82, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 
    0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
    0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 
    0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 
    0xe, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x5, 0x2, 0x26, 0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x5, 0x5, 0x5, 0x2d, 0xa, 0x5, 0x3, 0x5, 0x6, 0x5, 0x30, 
    0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x31, 0x3, 0x6, 0x5, 0x6, 0x35, 0xa, 0x6, 
    0x3, 0x6, 0x6, 0x6, 0x38, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0x39, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x7, 0x5, 0x7, 0x3f, 0xa, 0x7, 0x3, 0x7, 0x6, 0x7, 0x42, 
    0xa, 0x7, 0xd, 0x7, 0xe, 0x7, 0x43, 0x3, 0x7, 0x3, 0x7, 0x6, 0x7, 0x48, 
    0xa, 0x7, 0xd, 0x7, 0xe, 0x7, 0x49, 0x3, 0x8, 0x6, 0x8, 0x4d, 0xa, 0x8, 
    0xd, 0x8, 0xe, 0x8, 0x4e, 0x3, 0x8, 0x3, 0x8, 0x6, 0x8, 0x53, 0xa, 0x8, 
    0xd, 0x8, 0xe, 0x8, 0x54, 0x3, 0x8, 0x3, 0x8, 0x6, 0x8, 0x59, 0xa, 0x8, 
    0xd, 0x8, 0xe, 0x8, 0x5a, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 
    0x9, 0x61, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x64, 0xb, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x6a, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 
    0x6d, 0xb, 0xa, 0x3, 0xb, 0x6, 0xb, 0x70, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 
    0x71, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x78, 0xa, 0xc, 
    0xc, 0xc, 0xe, 0xc, 0x7b, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xe, 0x3, 0xe, 0x2, 0x2, 0xf, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 
    0x9, 0x6, 0xb, 0x7, 0xd, 0x8, 0xf, 0x9, 0x11, 0xa, 0x13, 0xb, 0x15, 
    0xc, 0x17, 0xd, 0x19, 0x2, 0x1b, 0x2, 0x3, 0x2, 0x9, 0x4, 0x2, 0x3e, 
    0x3e, 0x40, 0x40, 0x3, 0x2, 0x32, 0x3b, 0x4, 0x2, 0x24, 0x24, 0x5e, 
    0x5e, 0x5, 0x2, 0x32, 0x3b, 0x43, 0x5c, 0x63, 0x7c, 0x8, 0x2, 0x27, 
    0x27, 0x2f, 0x30, 0x32, 0x3c, 0x42, 0x5c, 0x61, 0x61, 0x63, 0x7c, 0x5, 
    0x2, 0xb, 0xc, 0xf, 0xf, 0x22, 0x22, 0x4, 0x2, 0xc, 0xc, 0xf, 0xf, 0x2, 
    0x92, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 0x2, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x2, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0x2, 0x17, 0x3, 0x2, 0x2, 0x2, 0x3, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x5, 0x27, 0x3, 0x2, 0x2, 0x2, 0x7, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0x9, 0x2c, 0x3, 0x2, 0x2, 0x2, 0xb, 0x34, 0x3, 0x2, 0x2, 0x2, 
    0xd, 0x3e, 0x3, 0x2, 0x2, 0x2, 0xf, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x11, 
    0x5c, 0x3, 0x2, 0x2, 0x2, 0x13, 0x67, 0x3, 0x2, 0x2, 0x2, 0x15, 0x6f, 
    0x3, 0x2, 0x2, 0x2, 0x17, 0x75, 0x3, 0x2, 0x2, 0x2, 0x19, 0x7e, 0x3, 
    0x2, 0x2, 0x2, 0x1b, 0x80, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x26, 0x7, 0x3f, 
    0x2, 0x2, 0x1e, 0x1f, 0x7, 0x3e, 0x2, 0x2, 0x1f, 0x26, 0x7, 0x40, 0x2, 
    0x2, 0x20, 0x26, 0x9, 0x2, 0x2, 0x2, 0x21, 0x22, 0x7, 0x3e, 0x2, 0x2, 
    0x22, 0x26, 0x7, 0x3f, 0x2, 0x2, 0x23, 0x24, 0x7, 0x40, 0x2, 0x2, 0x24, 
    0x26, 0x7, 0x3f, 0x2, 0x2, 0x25, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x25, 0x1e, 
    0x3, 0x2, 0x2, 0x2, 0x25, 0x20, 0x3, 0x2, 0x2, 0x2, 0x25, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 0x2, 0x26, 0x4, 0x3, 0x2, 
    0x2, 0x2, 0x27, 0x28, 0x7, 0x7d, 0x2, 0x2, 0x28, 0x6, 0x3, 0x2, 0x2, 
    0x2, 0x29, 0x2a, 0x7, 0x7f, 0x2, 0x2, 0x2a, 0x8, 0x3, 0x2, 0x2, 0x2, 
    0x2b, 0x2d, 0x5, 0x1b, 0xe, 0x2, 0x2c, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x30, 
    0x9, 0x3, 0x2, 0x2, 0x2f, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x31, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0xa, 0x3, 0x2, 0x2, 0x2, 0x33, 0x35, 0x5, 0x1b, 0xe, 
    0x2, 0x34, 0x33, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0x35, 0x37, 0x3, 0x2, 0x2, 0x2, 0x36, 0x38, 0x9, 0x3, 0x2, 0x2, 0x37, 
    0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 0x2, 0x2, 0x2, 0x39, 0x37, 
    0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x3b, 0x3c, 0x7, 0x27, 0x2, 0x2, 0x3c, 0xc, 0x3, 0x2, 
    0x2, 0x2, 0x3d, 0x3f, 0x5, 0x1b, 0xe, 0x2, 0x3e, 0x3d, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x42, 0x9, 0x3, 0x2, 0x2, 0x41, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x47, 0x7, 
    0x30, 0x2, 0x2, 0x46, 0x48, 0x9, 0x3, 0x2, 0x2, 0x47, 0x46, 0x3, 0x2, 
    0x2, 0x2, 0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x49, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4a, 0xe, 0x3, 0x2, 0x2, 0x2, 
    0x4b, 0x4d, 0x9, 0x3, 0x2, 0x2, 0x4c, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4d, 
    0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 
    0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x2, 0x2, 0x50, 0x52, 0x7, 
    0x30, 0x2, 0x2, 0x51, 0x53, 0x9, 0x3, 0x2, 0x2, 0x52, 0x51, 0x3, 0x2, 
    0x2, 0x2, 0x53, 0x54, 0x3, 0x2, 0x2, 0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x55, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x3, 0x2, 0x2, 0x2, 
    0x56, 0x58, 0x7, 0x30, 0x2, 0x2, 0x57, 0x59, 0x9, 0x3, 0x2, 0x2, 0x58, 
    0x57, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x58, 
    0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x10, 0x3, 
    0x2, 0x2, 0x2, 0x5c, 0x62, 0x5, 0x19, 0xd, 0x2, 0x5d, 0x61, 0xa, 0x4, 
    0x2, 0x2, 0x5e, 0x5f, 0x7, 0x5e, 0x2, 0x2, 0x5f, 0x61, 0x9, 0x4, 0x2, 
    0x2, 0x60, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5e, 0x3, 0x2, 0x2, 0x2, 
    0x61, 0x64, 0x3, 0x2, 0x2, 0x2, 0x62, 0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x63, 0x3, 0x2, 0x2, 0x2, 0x63, 0x65, 0x3, 0x2, 0x2, 0x2, 0x64, 0x62, 
    0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x5, 0x19, 0xd, 0x2, 0x66, 0x12, 0x3, 
    0x2, 0x2, 0x2, 0x67, 0x6b, 0x9, 0x5, 0x2, 0x2, 0x68, 0x6a, 0x9, 0x6, 
    0x2, 0x2, 0x69, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6d, 0x3, 0x2, 0x2, 
    0x2, 0x6b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x14, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6e, 
    0x70, 0x9, 0x7, 0x2, 0x2, 0x6f, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 
    0x3, 0x2, 0x2, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x73, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x8, 0xb, 
    0x2, 0x2, 0x74, 0x16, 0x3, 0x2, 0x2, 0x2, 0x75, 0x79, 0x7, 0x25, 0x2, 
    0x2, 0x76, 0x78, 0xa, 0x8, 0x2, 0x2, 0x77, 0x76, 0x3, 0x2, 0x2, 0x2, 
    0x78, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 
    0x7a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x79, 
    0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x8, 0xc, 0x3, 0x2, 0x7d, 0x18, 0x3, 
    0x2, 0x2, 0x2, 0x7e, 0x7f, 0x7, 0x24, 0x2, 0x2, 0x7f, 0x1a, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x81, 0x7, 0x2f, 0x2, 0x2, 0x81, 0x1c, 0x3, 0x2, 0x2, 
    0x2, 0x13, 0x2, 0x25, 0x2c, 0x31, 0x34, 0x39, 0x3e, 0x43, 0x49, 0x4e, 
    0x54, 0x5a, 0x60, 0x62, 0x6b, 0x71, 0x79, 0x4, 0x8, 0x2, 0x2, 0x2, 0x3, 
    0x2, 
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
