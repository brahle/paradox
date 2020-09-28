
// Generated from antlr/ParadoxFile.g4 by ANTLR 4.8


#include "ParadoxFileListener.h"
#include "ParadoxFileVisitor.h"

#include "ParadoxFileParser.h"


using namespace antlrcpp;
using namespace antlr4;

ParadoxFileParser::ParadoxFileParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ParadoxFileParser::~ParadoxFileParser() {
  delete _interpreter;
}

std::string ParadoxFileParser::getGrammarFileName() const {
  return "ParadoxFile.g4";
}

const std::vector<std::string>& ParadoxFileParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ParadoxFileParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ConfigContext ------------------------------------------------------------------

ParadoxFileParser::ConfigContext::ConfigContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ParadoxFileParser::AssignmentContext *> ParadoxFileParser::ConfigContext::assignment() {
  return getRuleContexts<ParadoxFileParser::AssignmentContext>();
}

ParadoxFileParser::AssignmentContext* ParadoxFileParser::ConfigContext::assignment(size_t i) {
  return getRuleContext<ParadoxFileParser::AssignmentContext>(i);
}


size_t ParadoxFileParser::ConfigContext::getRuleIndex() const {
  return ParadoxFileParser::RuleConfig;
}

void ParadoxFileParser::ConfigContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConfig(this);
}

void ParadoxFileParser::ConfigContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConfig(this);
}


antlrcpp::Any ParadoxFileParser::ConfigContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ParadoxFileVisitor*>(visitor))
    return parserVisitor->visitConfig(this);
  else
    return visitor->visitChildren(this);
}

ParadoxFileParser::ConfigContext* ParadoxFileParser::config() {
  ConfigContext *_localctx = _tracker.createInstance<ConfigContext>(_ctx, getState());
  enterRule(_localctx, 0, ParadoxFileParser::RuleConfig);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(27);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ParadoxFileParser::INT)
      | (1ULL << ParadoxFileParser::STRING)
      | (1ULL << ParadoxFileParser::SYMBOL))) != 0)) {
      setState(24);
      assignment();
      setState(29);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

ParadoxFileParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ParadoxFileParser::FieldContext* ParadoxFileParser::AssignmentContext::field() {
  return getRuleContext<ParadoxFileParser::FieldContext>(0);
}

tree::TerminalNode* ParadoxFileParser::AssignmentContext::OPERATOR() {
  return getToken(ParadoxFileParser::OPERATOR, 0);
}

ParadoxFileParser::ValueContext* ParadoxFileParser::AssignmentContext::value() {
  return getRuleContext<ParadoxFileParser::ValueContext>(0);
}


size_t ParadoxFileParser::AssignmentContext::getRuleIndex() const {
  return ParadoxFileParser::RuleAssignment;
}

void ParadoxFileParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void ParadoxFileParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


antlrcpp::Any ParadoxFileParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ParadoxFileVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

ParadoxFileParser::AssignmentContext* ParadoxFileParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 2, ParadoxFileParser::RuleAssignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(30);
    field();
    setState(31);
    match(ParadoxFileParser::OPERATOR);
    setState(32);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldContext ------------------------------------------------------------------

ParadoxFileParser::FieldContext::FieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ParadoxFileParser::StringContext* ParadoxFileParser::FieldContext::string() {
  return getRuleContext<ParadoxFileParser::StringContext>(0);
}

ParadoxFileParser::SymbolContext* ParadoxFileParser::FieldContext::symbol() {
  return getRuleContext<ParadoxFileParser::SymbolContext>(0);
}


size_t ParadoxFileParser::FieldContext::getRuleIndex() const {
  return ParadoxFileParser::RuleField;
}

void ParadoxFileParser::FieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField(this);
}

void ParadoxFileParser::FieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField(this);
}


antlrcpp::Any ParadoxFileParser::FieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ParadoxFileVisitor*>(visitor))
    return parserVisitor->visitField(this);
  else
    return visitor->visitChildren(this);
}

ParadoxFileParser::FieldContext* ParadoxFileParser::field() {
  FieldContext *_localctx = _tracker.createInstance<FieldContext>(_ctx, getState());
  enterRule(_localctx, 4, ParadoxFileParser::RuleField);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(36);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(34);
      string();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(35);
      symbol();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

ParadoxFileParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ParadoxFileParser::IntegerContext* ParadoxFileParser::ValueContext::integer() {
  return getRuleContext<ParadoxFileParser::IntegerContext>(0);
}

ParadoxFileParser::PercentContext* ParadoxFileParser::ValueContext::percent() {
  return getRuleContext<ParadoxFileParser::PercentContext>(0);
}

ParadoxFileParser::RealContext* ParadoxFileParser::ValueContext::real() {
  return getRuleContext<ParadoxFileParser::RealContext>(0);
}

ParadoxFileParser::DateContext* ParadoxFileParser::ValueContext::date() {
  return getRuleContext<ParadoxFileParser::DateContext>(0);
}

ParadoxFileParser::StringContext* ParadoxFileParser::ValueContext::string() {
  return getRuleContext<ParadoxFileParser::StringContext>(0);
}

ParadoxFileParser::SymbolContext* ParadoxFileParser::ValueContext::symbol() {
  return getRuleContext<ParadoxFileParser::SymbolContext>(0);
}

ParadoxFileParser::MapContext* ParadoxFileParser::ValueContext::map() {
  return getRuleContext<ParadoxFileParser::MapContext>(0);
}

ParadoxFileParser::ArrayContext* ParadoxFileParser::ValueContext::array() {
  return getRuleContext<ParadoxFileParser::ArrayContext>(0);
}


size_t ParadoxFileParser::ValueContext::getRuleIndex() const {
  return ParadoxFileParser::RuleValue;
}

void ParadoxFileParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void ParadoxFileParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}


antlrcpp::Any ParadoxFileParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ParadoxFileVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

ParadoxFileParser::ValueContext* ParadoxFileParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 6, ParadoxFileParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(46);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(38);
      integer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(39);
      percent();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(40);
      real();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(41);
      date();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(42);
      string();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(43);
      symbol();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(44);
      map();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(45);
      array();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SymbolContext ------------------------------------------------------------------

ParadoxFileParser::SymbolContext::SymbolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ParadoxFileParser::SymbolContext::STRING() {
  return getToken(ParadoxFileParser::STRING, 0);
}

tree::TerminalNode* ParadoxFileParser::SymbolContext::INT() {
  return getToken(ParadoxFileParser::INT, 0);
}

tree::TerminalNode* ParadoxFileParser::SymbolContext::SYMBOL() {
  return getToken(ParadoxFileParser::SYMBOL, 0);
}


size_t ParadoxFileParser::SymbolContext::getRuleIndex() const {
  return ParadoxFileParser::RuleSymbol;
}

void ParadoxFileParser::SymbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSymbol(this);
}

void ParadoxFileParser::SymbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSymbol(this);
}


antlrcpp::Any ParadoxFileParser::SymbolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ParadoxFileVisitor*>(visitor))
    return parserVisitor->visitSymbol(this);
  else
    return visitor->visitChildren(this);
}

ParadoxFileParser::SymbolContext* ParadoxFileParser::symbol() {
  SymbolContext *_localctx = _tracker.createInstance<SymbolContext>(_ctx, getState());
  enterRule(_localctx, 8, ParadoxFileParser::RuleSymbol);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ParadoxFileParser::INT)
      | (1ULL << ParadoxFileParser::STRING)
      | (1ULL << ParadoxFileParser::SYMBOL))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

ParadoxFileParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ParadoxFileParser::StringContext::STRING() {
  return getToken(ParadoxFileParser::STRING, 0);
}


size_t ParadoxFileParser::StringContext::getRuleIndex() const {
  return ParadoxFileParser::RuleString;
}

void ParadoxFileParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}

void ParadoxFileParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}


antlrcpp::Any ParadoxFileParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ParadoxFileVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

ParadoxFileParser::StringContext* ParadoxFileParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 10, ParadoxFileParser::RuleString);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    match(ParadoxFileParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerContext ------------------------------------------------------------------

ParadoxFileParser::IntegerContext::IntegerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ParadoxFileParser::IntegerContext::INT() {
  return getToken(ParadoxFileParser::INT, 0);
}


size_t ParadoxFileParser::IntegerContext::getRuleIndex() const {
  return ParadoxFileParser::RuleInteger;
}

void ParadoxFileParser::IntegerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger(this);
}

void ParadoxFileParser::IntegerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger(this);
}


antlrcpp::Any ParadoxFileParser::IntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ParadoxFileVisitor*>(visitor))
    return parserVisitor->visitInteger(this);
  else
    return visitor->visitChildren(this);
}

ParadoxFileParser::IntegerContext* ParadoxFileParser::integer() {
  IntegerContext *_localctx = _tracker.createInstance<IntegerContext>(_ctx, getState());
  enterRule(_localctx, 12, ParadoxFileParser::RuleInteger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    match(ParadoxFileParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RealContext ------------------------------------------------------------------

ParadoxFileParser::RealContext::RealContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ParadoxFileParser::RealContext::REAL() {
  return getToken(ParadoxFileParser::REAL, 0);
}


size_t ParadoxFileParser::RealContext::getRuleIndex() const {
  return ParadoxFileParser::RuleReal;
}

void ParadoxFileParser::RealContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReal(this);
}

void ParadoxFileParser::RealContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReal(this);
}


antlrcpp::Any ParadoxFileParser::RealContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ParadoxFileVisitor*>(visitor))
    return parserVisitor->visitReal(this);
  else
    return visitor->visitChildren(this);
}

ParadoxFileParser::RealContext* ParadoxFileParser::real() {
  RealContext *_localctx = _tracker.createInstance<RealContext>(_ctx, getState());
  enterRule(_localctx, 14, ParadoxFileParser::RuleReal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    match(ParadoxFileParser::REAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DateContext ------------------------------------------------------------------

ParadoxFileParser::DateContext::DateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ParadoxFileParser::DateContext::DATE() {
  return getToken(ParadoxFileParser::DATE, 0);
}


size_t ParadoxFileParser::DateContext::getRuleIndex() const {
  return ParadoxFileParser::RuleDate;
}

void ParadoxFileParser::DateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDate(this);
}

void ParadoxFileParser::DateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDate(this);
}


antlrcpp::Any ParadoxFileParser::DateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ParadoxFileVisitor*>(visitor))
    return parserVisitor->visitDate(this);
  else
    return visitor->visitChildren(this);
}

ParadoxFileParser::DateContext* ParadoxFileParser::date() {
  DateContext *_localctx = _tracker.createInstance<DateContext>(_ctx, getState());
  enterRule(_localctx, 16, ParadoxFileParser::RuleDate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    match(ParadoxFileParser::DATE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PercentContext ------------------------------------------------------------------

ParadoxFileParser::PercentContext::PercentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ParadoxFileParser::PercentContext::PCT() {
  return getToken(ParadoxFileParser::PCT, 0);
}


size_t ParadoxFileParser::PercentContext::getRuleIndex() const {
  return ParadoxFileParser::RulePercent;
}

void ParadoxFileParser::PercentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPercent(this);
}

void ParadoxFileParser::PercentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPercent(this);
}


antlrcpp::Any ParadoxFileParser::PercentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ParadoxFileVisitor*>(visitor))
    return parserVisitor->visitPercent(this);
  else
    return visitor->visitChildren(this);
}

ParadoxFileParser::PercentContext* ParadoxFileParser::percent() {
  PercentContext *_localctx = _tracker.createInstance<PercentContext>(_ctx, getState());
  enterRule(_localctx, 18, ParadoxFileParser::RulePercent);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    match(ParadoxFileParser::PCT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapContext ------------------------------------------------------------------

ParadoxFileParser::MapContext::MapContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ParadoxFileParser::MapContext::BLOCK_START() {
  return getToken(ParadoxFileParser::BLOCK_START, 0);
}

tree::TerminalNode* ParadoxFileParser::MapContext::BLOCK_END() {
  return getToken(ParadoxFileParser::BLOCK_END, 0);
}

std::vector<ParadoxFileParser::AssignmentContext *> ParadoxFileParser::MapContext::assignment() {
  return getRuleContexts<ParadoxFileParser::AssignmentContext>();
}

ParadoxFileParser::AssignmentContext* ParadoxFileParser::MapContext::assignment(size_t i) {
  return getRuleContext<ParadoxFileParser::AssignmentContext>(i);
}


size_t ParadoxFileParser::MapContext::getRuleIndex() const {
  return ParadoxFileParser::RuleMap;
}

void ParadoxFileParser::MapContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMap(this);
}

void ParadoxFileParser::MapContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMap(this);
}


antlrcpp::Any ParadoxFileParser::MapContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ParadoxFileVisitor*>(visitor))
    return parserVisitor->visitMap(this);
  else
    return visitor->visitChildren(this);
}

ParadoxFileParser::MapContext* ParadoxFileParser::map() {
  MapContext *_localctx = _tracker.createInstance<MapContext>(_ctx, getState());
  enterRule(_localctx, 20, ParadoxFileParser::RuleMap);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    match(ParadoxFileParser::BLOCK_START);
    setState(64);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ParadoxFileParser::INT)
      | (1ULL << ParadoxFileParser::STRING)
      | (1ULL << ParadoxFileParser::SYMBOL))) != 0)) {
      setState(61);
      assignment();
      setState(66);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(67);
    match(ParadoxFileParser::BLOCK_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayContext ------------------------------------------------------------------

ParadoxFileParser::ArrayContext::ArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ParadoxFileParser::ArrayContext::BLOCK_START() {
  return getToken(ParadoxFileParser::BLOCK_START, 0);
}

tree::TerminalNode* ParadoxFileParser::ArrayContext::BLOCK_END() {
  return getToken(ParadoxFileParser::BLOCK_END, 0);
}

std::vector<ParadoxFileParser::ValueContext *> ParadoxFileParser::ArrayContext::value() {
  return getRuleContexts<ParadoxFileParser::ValueContext>();
}

ParadoxFileParser::ValueContext* ParadoxFileParser::ArrayContext::value(size_t i) {
  return getRuleContext<ParadoxFileParser::ValueContext>(i);
}


size_t ParadoxFileParser::ArrayContext::getRuleIndex() const {
  return ParadoxFileParser::RuleArray;
}

void ParadoxFileParser::ArrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray(this);
}

void ParadoxFileParser::ArrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray(this);
}


antlrcpp::Any ParadoxFileParser::ArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ParadoxFileVisitor*>(visitor))
    return parserVisitor->visitArray(this);
  else
    return visitor->visitChildren(this);
}

ParadoxFileParser::ArrayContext* ParadoxFileParser::array() {
  ArrayContext *_localctx = _tracker.createInstance<ArrayContext>(_ctx, getState());
  enterRule(_localctx, 22, ParadoxFileParser::RuleArray);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    match(ParadoxFileParser::BLOCK_START);
    setState(71); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(70);
      value();
      setState(73); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ParadoxFileParser::BLOCK_START)
      | (1ULL << ParadoxFileParser::INT)
      | (1ULL << ParadoxFileParser::PCT)
      | (1ULL << ParadoxFileParser::REAL)
      | (1ULL << ParadoxFileParser::DATE)
      | (1ULL << ParadoxFileParser::STRING)
      | (1ULL << ParadoxFileParser::SYMBOL))) != 0));
    setState(75);
    match(ParadoxFileParser::BLOCK_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> ParadoxFileParser::_decisionToDFA;
atn::PredictionContextCache ParadoxFileParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ParadoxFileParser::_atn;
std::vector<uint16_t> ParadoxFileParser::_serializedATN;

std::vector<std::string> ParadoxFileParser::_ruleNames = {
  "config", "assignment", "field", "value", "symbol", "string", "integer", 
  "real", "date", "percent", "map", "array"
};

std::vector<std::string> ParadoxFileParser::_literalNames = {
  "", "", "'{'", "'}'"
};

std::vector<std::string> ParadoxFileParser::_symbolicNames = {
  "", "OPERATOR", "BLOCK_START", "BLOCK_END", "INT", "PCT", "REAL", "DATE", 
  "STRING", "SYMBOL", "WHITESPACE", "LINE_COMMENT"
};

dfa::Vocabulary ParadoxFileParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ParadoxFileParser::_tokenNames;

ParadoxFileParser::Initializer::Initializer() {
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
    0x3, 0xd, 0x50, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x3, 0x2, 0x7, 0x2, 0x1c, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x1f, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x27, 0xa, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x5, 0x5, 0x31, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x41, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 
    0x44, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x6, 0xd, 0x4a, 
    0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0x4b, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x2, 
    0x2, 0xe, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x2, 0x3, 0x4, 0x2, 0x6, 0x6, 0xa, 0xb, 0x2, 0x4e, 0x2, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x20, 0x3, 0x2, 0x2, 0x2, 0x6, 0x26, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x30, 0x3, 0x2, 0x2, 0x2, 0xa, 0x32, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x34, 0x3, 0x2, 0x2, 0x2, 0xe, 0x36, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x38, 0x3, 0x2, 0x2, 0x2, 0x12, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x14, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x16, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x18, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0x1c, 0x5, 0x4, 0x3, 0x2, 0x1b, 0x1a, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x1d, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x1f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x20, 0x21, 0x5, 0x6, 0x4, 0x2, 0x21, 
    0x22, 0x7, 0x3, 0x2, 0x2, 0x22, 0x23, 0x5, 0x8, 0x5, 0x2, 0x23, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x24, 0x27, 0x5, 0xc, 0x7, 0x2, 0x25, 0x27, 0x5, 
    0xa, 0x6, 0x2, 0x26, 0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0x27, 0x7, 0x3, 0x2, 0x2, 0x2, 0x28, 0x31, 0x5, 0xe, 0x8, 
    0x2, 0x29, 0x31, 0x5, 0x14, 0xb, 0x2, 0x2a, 0x31, 0x5, 0x10, 0x9, 0x2, 
    0x2b, 0x31, 0x5, 0x12, 0xa, 0x2, 0x2c, 0x31, 0x5, 0xc, 0x7, 0x2, 0x2d, 
    0x31, 0x5, 0xa, 0x6, 0x2, 0x2e, 0x31, 0x5, 0x16, 0xc, 0x2, 0x2f, 0x31, 
    0x5, 0x18, 0xd, 0x2, 0x30, 0x28, 0x3, 0x2, 0x2, 0x2, 0x30, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x30, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x31, 0x9, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x9, 0x2, 0x2, 0x2, 0x33, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x7, 0xa, 0x2, 0x2, 0x35, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x7, 0x6, 0x2, 0x2, 0x37, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x39, 0x7, 0x8, 0x2, 0x2, 0x39, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x3b, 0x7, 0x9, 0x2, 0x2, 0x3b, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0x3d, 0x7, 0x7, 0x2, 0x2, 0x3d, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x42, 0x7, 0x4, 0x2, 0x2, 0x3f, 0x41, 0x5, 0x4, 0x3, 0x2, 0x40, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x44, 0x3, 0x2, 0x2, 0x2, 0x42, 0x40, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 0x43, 0x45, 0x3, 
    0x2, 0x2, 0x2, 0x44, 0x42, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x7, 0x5, 
    0x2, 0x2, 0x46, 0x17, 0x3, 0x2, 0x2, 0x2, 0x47, 0x49, 0x7, 0x4, 0x2, 
    0x2, 0x48, 0x4a, 0x5, 0x8, 0x5, 0x2, 0x49, 0x48, 0x3, 0x2, 0x2, 0x2, 
    0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 
    0x4c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 
    0x7, 0x5, 0x2, 0x2, 0x4e, 0x19, 0x3, 0x2, 0x2, 0x2, 0x7, 0x1d, 0x26, 
    0x30, 0x42, 0x4b, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ParadoxFileParser::Initializer ParadoxFileParser::_init;
