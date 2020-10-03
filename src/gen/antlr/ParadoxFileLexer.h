
// Generated from antlr/ParadoxFile.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  ParadoxFileLexer : public antlr4::Lexer {
public:
  enum {
    OPERATOR = 1, BLOCK_START = 2, BLOCK_END = 3, VARIABLE_START = 4, VARIABLE_EXPRESSION_START = 5, 
    VARIABLE_EXPRESSION_END = 6, ABS_VALUE = 7, OPEN_PARENS = 8, CLOSE_PARENS = 9, 
    LIST_START = 10, INT = 11, PCT = 12, REAL = 13, DATE = 14, SSTRING = 15, 
    DSTRING = 16, CSTRING = 17, SYMBOL = 18, PLUS_MINUS = 19, MULTIPLY_DIVIDE = 20, 
    WHITESPACE = 21, LINE_COMMENT = 22
  };

  ParadoxFileLexer(antlr4::CharStream *input);
  ~ParadoxFileLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

