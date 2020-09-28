
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
    setState(37);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ParadoxFileParser::VARIABLE_START)
      | (1ULL << ParadoxFileParser::LIST_START)
      | (1ULL << ParadoxFileParser::INT)
      | (1ULL << ParadoxFileParser::STRING)
      | (1ULL << ParadoxFileParser::SYMBOL))) != 0)) {
      setState(34);
      assignment();
      setState(39);
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
    setState(40);
    field();
    setState(41);
    match(ParadoxFileParser::OPERATOR);
    setState(42);
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

ParadoxFileParser::VariableContext* ParadoxFileParser::FieldContext::variable() {
  return getRuleContext<ParadoxFileParser::VariableContext>(0);
}

tree::TerminalNode* ParadoxFileParser::FieldContext::LIST_START() {
  return getToken(ParadoxFileParser::LIST_START, 0);
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
    setState(48);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(44);
      string();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(45);
      symbol();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(46);
      variable();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(47);
      match(ParadoxFileParser::LIST_START);
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

ParadoxFileParser::VariableContext* ParadoxFileParser::ValueContext::variable() {
  return getRuleContext<ParadoxFileParser::VariableContext>(0);
}

ParadoxFileParser::Variable_expressionContext* ParadoxFileParser::ValueContext::variable_expression() {
  return getRuleContext<ParadoxFileParser::Variable_expressionContext>(0);
}

ParadoxFileParser::MapContext* ParadoxFileParser::ValueContext::map() {
  return getRuleContext<ParadoxFileParser::MapContext>(0);
}

ParadoxFileParser::ArrayContext* ParadoxFileParser::ValueContext::array() {
  return getRuleContext<ParadoxFileParser::ArrayContext>(0);
}

ParadoxFileParser::ListContext* ParadoxFileParser::ValueContext::list() {
  return getRuleContext<ParadoxFileParser::ListContext>(0);
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
    setState(61);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(50);
      integer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(51);
      percent();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(52);
      real();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(53);
      date();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(54);
      string();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(55);
      symbol();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(56);
      variable();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(57);
      variable_expression();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(58);
      map();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(59);
      array();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(60);
      list();
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

//----------------- SimpleValueContext ------------------------------------------------------------------

ParadoxFileParser::SimpleValueContext::SimpleValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ParadoxFileParser::IntegerContext* ParadoxFileParser::SimpleValueContext::integer() {
  return getRuleContext<ParadoxFileParser::IntegerContext>(0);
}

ParadoxFileParser::PercentContext* ParadoxFileParser::SimpleValueContext::percent() {
  return getRuleContext<ParadoxFileParser::PercentContext>(0);
}

ParadoxFileParser::RealContext* ParadoxFileParser::SimpleValueContext::real() {
  return getRuleContext<ParadoxFileParser::RealContext>(0);
}

ParadoxFileParser::DateContext* ParadoxFileParser::SimpleValueContext::date() {
  return getRuleContext<ParadoxFileParser::DateContext>(0);
}

ParadoxFileParser::StringContext* ParadoxFileParser::SimpleValueContext::string() {
  return getRuleContext<ParadoxFileParser::StringContext>(0);
}

ParadoxFileParser::SymbolContext* ParadoxFileParser::SimpleValueContext::symbol() {
  return getRuleContext<ParadoxFileParser::SymbolContext>(0);
}

ParadoxFileParser::VariableContext* ParadoxFileParser::SimpleValueContext::variable() {
  return getRuleContext<ParadoxFileParser::VariableContext>(0);
}

ParadoxFileParser::Variable_expressionContext* ParadoxFileParser::SimpleValueContext::variable_expression() {
  return getRuleContext<ParadoxFileParser::Variable_expressionContext>(0);
}


size_t ParadoxFileParser::SimpleValueContext::getRuleIndex() const {
  return ParadoxFileParser::RuleSimpleValue;
}

void ParadoxFileParser::SimpleValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleValue(this);
}

void ParadoxFileParser::SimpleValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleValue(this);
}


antlrcpp::Any ParadoxFileParser::SimpleValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ParadoxFileVisitor*>(visitor))
    return parserVisitor->visitSimpleValue(this);
  else
    return visitor->visitChildren(this);
}

ParadoxFileParser::SimpleValueContext* ParadoxFileParser::simpleValue() {
  SimpleValueContext *_localctx = _tracker.createInstance<SimpleValueContext>(_ctx, getState());
  enterRule(_localctx, 8, ParadoxFileParser::RuleSimpleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(71);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(63);
      integer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(64);
      percent();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(65);
      real();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(66);
      date();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(67);
      string();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(68);
      symbol();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(69);
      variable();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(70);
      variable_expression();
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
  enterRule(_localctx, 10, ParadoxFileParser::RuleSymbol);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
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
  enterRule(_localctx, 12, ParadoxFileParser::RuleString);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
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
  enterRule(_localctx, 14, ParadoxFileParser::RuleInteger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
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
  enterRule(_localctx, 16, ParadoxFileParser::RuleReal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
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
  enterRule(_localctx, 18, ParadoxFileParser::RuleDate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
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
  enterRule(_localctx, 20, ParadoxFileParser::RulePercent);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
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
  enterRule(_localctx, 22, ParadoxFileParser::RuleMap);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(ParadoxFileParser::BLOCK_START);
    setState(89);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ParadoxFileParser::VARIABLE_START)
      | (1ULL << ParadoxFileParser::LIST_START)
      | (1ULL << ParadoxFileParser::INT)
      | (1ULL << ParadoxFileParser::STRING)
      | (1ULL << ParadoxFileParser::SYMBOL))) != 0)) {
      setState(86);
      assignment();
      setState(91);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(92);
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

std::vector<ParadoxFileParser::SimpleValueContext *> ParadoxFileParser::ArrayContext::simpleValue() {
  return getRuleContexts<ParadoxFileParser::SimpleValueContext>();
}

ParadoxFileParser::SimpleValueContext* ParadoxFileParser::ArrayContext::simpleValue(size_t i) {
  return getRuleContext<ParadoxFileParser::SimpleValueContext>(i);
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
  enterRule(_localctx, 24, ParadoxFileParser::RuleArray);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    match(ParadoxFileParser::BLOCK_START);
    setState(96); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(95);
      simpleValue();
      setState(98); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ParadoxFileParser::VARIABLE_START)
      | (1ULL << ParadoxFileParser::INT)
      | (1ULL << ParadoxFileParser::PCT)
      | (1ULL << ParadoxFileParser::REAL)
      | (1ULL << ParadoxFileParser::DATE)
      | (1ULL << ParadoxFileParser::STRING)
      | (1ULL << ParadoxFileParser::SYMBOL))) != 0));
    setState(100);
    match(ParadoxFileParser::BLOCK_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

ParadoxFileParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ParadoxFileParser::VariableContext::VARIABLE_START() {
  return getToken(ParadoxFileParser::VARIABLE_START, 0);
}

tree::TerminalNode* ParadoxFileParser::VariableContext::SYMBOL() {
  return getToken(ParadoxFileParser::SYMBOL, 0);
}


size_t ParadoxFileParser::VariableContext::getRuleIndex() const {
  return ParadoxFileParser::RuleVariable;
}

void ParadoxFileParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void ParadoxFileParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}


antlrcpp::Any ParadoxFileParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ParadoxFileVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

ParadoxFileParser::VariableContext* ParadoxFileParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 26, ParadoxFileParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(ParadoxFileParser::VARIABLE_START);
    setState(103);
    match(ParadoxFileParser::SYMBOL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_expressionContext ------------------------------------------------------------------

ParadoxFileParser::Variable_expressionContext::Variable_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ParadoxFileParser::Variable_expressionContext::VARIABLE_START() {
  return getToken(ParadoxFileParser::VARIABLE_START, 0);
}

tree::TerminalNode* ParadoxFileParser::Variable_expressionContext::VARIABLE_EXPRESSION_START() {
  return getToken(ParadoxFileParser::VARIABLE_EXPRESSION_START, 0);
}

ParadoxFileParser::ExpressionContext* ParadoxFileParser::Variable_expressionContext::expression() {
  return getRuleContext<ParadoxFileParser::ExpressionContext>(0);
}

tree::TerminalNode* ParadoxFileParser::Variable_expressionContext::VARIABLE_EXPRESSION_END() {
  return getToken(ParadoxFileParser::VARIABLE_EXPRESSION_END, 0);
}


size_t ParadoxFileParser::Variable_expressionContext::getRuleIndex() const {
  return ParadoxFileParser::RuleVariable_expression;
}

void ParadoxFileParser::Variable_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_expression(this);
}

void ParadoxFileParser::Variable_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_expression(this);
}


antlrcpp::Any ParadoxFileParser::Variable_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ParadoxFileVisitor*>(visitor))
    return parserVisitor->visitVariable_expression(this);
  else
    return visitor->visitChildren(this);
}

ParadoxFileParser::Variable_expressionContext* ParadoxFileParser::variable_expression() {
  Variable_expressionContext *_localctx = _tracker.createInstance<Variable_expressionContext>(_ctx, getState());
  enterRule(_localctx, 28, ParadoxFileParser::RuleVariable_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    match(ParadoxFileParser::VARIABLE_START);
    setState(106);
    match(ParadoxFileParser::VARIABLE_EXPRESSION_START);
    setState(107);
    expression();
    setState(108);
    match(ParadoxFileParser::VARIABLE_EXPRESSION_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

ParadoxFileParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ParadoxFileParser::ValueContext* ParadoxFileParser::ExpressionContext::value() {
  return getRuleContext<ParadoxFileParser::ValueContext>(0);
}

tree::TerminalNode* ParadoxFileParser::ExpressionContext::EXPRESSION_OPERATOR() {
  return getToken(ParadoxFileParser::EXPRESSION_OPERATOR, 0);
}

ParadoxFileParser::ExpressionContext* ParadoxFileParser::ExpressionContext::expression() {
  return getRuleContext<ParadoxFileParser::ExpressionContext>(0);
}


size_t ParadoxFileParser::ExpressionContext::getRuleIndex() const {
  return ParadoxFileParser::RuleExpression;
}

void ParadoxFileParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void ParadoxFileParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any ParadoxFileParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ParadoxFileVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

ParadoxFileParser::ExpressionContext* ParadoxFileParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 30, ParadoxFileParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(115);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(110);
      value();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(111);
      value();
      setState(112);
      match(ParadoxFileParser::EXPRESSION_OPERATOR);
      setState(113);
      expression();
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

//----------------- ListContext ------------------------------------------------------------------

ParadoxFileParser::ListContext::ListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ParadoxFileParser::ListContext::LIST_START() {
  return getToken(ParadoxFileParser::LIST_START, 0);
}

tree::TerminalNode* ParadoxFileParser::ListContext::SYMBOL() {
  return getToken(ParadoxFileParser::SYMBOL, 0);
}

tree::TerminalNode* ParadoxFileParser::ListContext::STRING() {
  return getToken(ParadoxFileParser::STRING, 0);
}


size_t ParadoxFileParser::ListContext::getRuleIndex() const {
  return ParadoxFileParser::RuleList;
}

void ParadoxFileParser::ListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList(this);
}

void ParadoxFileParser::ListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList(this);
}


antlrcpp::Any ParadoxFileParser::ListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ParadoxFileVisitor*>(visitor))
    return parserVisitor->visitList(this);
  else
    return visitor->visitChildren(this);
}

ParadoxFileParser::ListContext* ParadoxFileParser::list() {
  ListContext *_localctx = _tracker.createInstance<ListContext>(_ctx, getState());
  enterRule(_localctx, 32, ParadoxFileParser::RuleList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(ParadoxFileParser::LIST_START);
    setState(118);
    _la = _input->LA(1);
    if (!(_la == ParadoxFileParser::STRING

    || _la == ParadoxFileParser::SYMBOL)) {
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

// Static vars and initialization.
std::vector<dfa::DFA> ParadoxFileParser::_decisionToDFA;
atn::PredictionContextCache ParadoxFileParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ParadoxFileParser::_atn;
std::vector<uint16_t> ParadoxFileParser::_serializedATN;

std::vector<std::string> ParadoxFileParser::_ruleNames = {
  "config", "assignment", "field", "value", "simpleValue", "symbol", "string", 
  "integer", "real", "date", "percent", "map", "array", "variable", "variable_expression", 
  "expression", "list"
};

std::vector<std::string> ParadoxFileParser::_literalNames = {
  "", "", "'{'", "'}'", "'@'", "'['", "']'", "", "'list'"
};

std::vector<std::string> ParadoxFileParser::_symbolicNames = {
  "", "OPERATOR", "BLOCK_START", "BLOCK_END", "VARIABLE_START", "VARIABLE_EXPRESSION_START", 
  "VARIABLE_EXPRESSION_END", "EXPRESSION_OPERATOR", "LIST_START", "INT", 
  "PCT", "REAL", "DATE", "STRING", "SYMBOL", "WHITESPACE", "LINE_COMMENT"
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
    0x3, 0x12, 0x7b, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x3, 0x2, 0x7, 0x2, 0x26, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x29, 
    0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x33, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x40, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x4a, 0xa, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x7, 0xd, 0x5a, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x5d, 0xb, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x6, 0xe, 0x63, 0xa, 0xe, 0xd, 0xe, 
    0xe, 0xe, 0x64, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x76, 0xa, 0x11, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x2, 0x2, 0x13, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x2, 0x4, 0x4, 0x2, 0xb, 0xb, 0xf, 0x10, 0x3, 0x2, 0xf, 0x10, 
    0x2, 0x81, 0x2, 0x27, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2a, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x32, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3f, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0xc, 0x4b, 0x3, 0x2, 0x2, 0x2, 0xe, 0x4d, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x12, 0x51, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x53, 0x3, 0x2, 0x2, 0x2, 0x16, 0x55, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x60, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x68, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x6b, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x75, 0x3, 0x2, 0x2, 0x2, 0x22, 0x77, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x26, 0x5, 0x4, 0x3, 0x2, 0x25, 0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x29, 
    0x3, 0x2, 0x2, 0x2, 0x27, 0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 0x3, 
    0x2, 0x2, 0x2, 0x28, 0x3, 0x3, 0x2, 0x2, 0x2, 0x29, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0x2b, 0x5, 0x6, 0x4, 0x2, 0x2b, 0x2c, 0x7, 0x3, 0x2, 
    0x2, 0x2c, 0x2d, 0x5, 0x8, 0x5, 0x2, 0x2d, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x2e, 0x33, 0x5, 0xe, 0x8, 0x2, 0x2f, 0x33, 0x5, 0xc, 0x7, 0x2, 0x30, 
    0x33, 0x5, 0x1c, 0xf, 0x2, 0x31, 0x33, 0x7, 0xa, 0x2, 0x2, 0x32, 0x2e, 
    0x3, 0x2, 0x2, 0x2, 0x32, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x32, 0x30, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x34, 0x40, 0x5, 0x10, 0x9, 0x2, 0x35, 0x40, 0x5, 0x16, 0xc, 
    0x2, 0x36, 0x40, 0x5, 0x12, 0xa, 0x2, 0x37, 0x40, 0x5, 0x14, 0xb, 0x2, 
    0x38, 0x40, 0x5, 0xe, 0x8, 0x2, 0x39, 0x40, 0x5, 0xc, 0x7, 0x2, 0x3a, 
    0x40, 0x5, 0x1c, 0xf, 0x2, 0x3b, 0x40, 0x5, 0x1e, 0x10, 0x2, 0x3c, 0x40, 
    0x5, 0x18, 0xd, 0x2, 0x3d, 0x40, 0x5, 0x1a, 0xe, 0x2, 0x3e, 0x40, 0x5, 
    0x22, 0x12, 0x2, 0x3f, 0x34, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x35, 0x3, 0x2, 
    0x2, 0x2, 0x3f, 0x36, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x3f, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x3f, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3f, 
    0x3c, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3e, 
    0x3, 0x2, 0x2, 0x2, 0x40, 0x9, 0x3, 0x2, 0x2, 0x2, 0x41, 0x4a, 0x5, 
    0x10, 0x9, 0x2, 0x42, 0x4a, 0x5, 0x16, 0xc, 0x2, 0x43, 0x4a, 0x5, 0x12, 
    0xa, 0x2, 0x44, 0x4a, 0x5, 0x14, 0xb, 0x2, 0x45, 0x4a, 0x5, 0xe, 0x8, 
    0x2, 0x46, 0x4a, 0x5, 0xc, 0x7, 0x2, 0x47, 0x4a, 0x5, 0x1c, 0xf, 0x2, 
    0x48, 0x4a, 0x5, 0x1e, 0x10, 0x2, 0x49, 0x41, 0x3, 0x2, 0x2, 0x2, 0x49, 
    0x42, 0x3, 0x2, 0x2, 0x2, 0x49, 0x43, 0x3, 0x2, 0x2, 0x2, 0x49, 0x44, 
    0x3, 0x2, 0x2, 0x2, 0x49, 0x45, 0x3, 0x2, 0x2, 0x2, 0x49, 0x46, 0x3, 
    0x2, 0x2, 0x2, 0x49, 0x47, 0x3, 0x2, 0x2, 0x2, 0x49, 0x48, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x9, 0x2, 0x2, 
    0x2, 0x4c, 0xd, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0xf, 0x2, 0x2, 
    0x4e, 0xf, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x7, 0xb, 0x2, 0x2, 0x50, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x7, 0xd, 0x2, 0x2, 0x52, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0xe, 0x2, 0x2, 0x54, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x55, 0x56, 0x7, 0xc, 0x2, 0x2, 0x56, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x57, 0x5b, 0x7, 0x4, 0x2, 0x2, 0x58, 0x5a, 0x5, 0x4, 0x3, 
    0x2, 0x59, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x5e, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 
    0x7, 0x5, 0x2, 0x2, 0x5f, 0x19, 0x3, 0x2, 0x2, 0x2, 0x60, 0x62, 0x7, 
    0x4, 0x2, 0x2, 0x61, 0x63, 0x5, 0xa, 0x6, 0x2, 0x62, 0x61, 0x3, 0x2, 
    0x2, 0x2, 0x63, 0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 
    0x2, 0x64, 0x65, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x67, 0x7, 0x5, 0x2, 0x2, 0x67, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x68, 
    0x69, 0x7, 0x6, 0x2, 0x2, 0x69, 0x6a, 0x7, 0x10, 0x2, 0x2, 0x6a, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x7, 0x6, 0x2, 0x2, 0x6c, 0x6d, 0x7, 
    0x7, 0x2, 0x2, 0x6d, 0x6e, 0x5, 0x20, 0x11, 0x2, 0x6e, 0x6f, 0x7, 0x8, 
    0x2, 0x2, 0x6f, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x70, 0x76, 0x5, 0x8, 0x5, 
    0x2, 0x71, 0x72, 0x5, 0x8, 0x5, 0x2, 0x72, 0x73, 0x7, 0x9, 0x2, 0x2, 
    0x73, 0x74, 0x5, 0x20, 0x11, 0x2, 0x74, 0x76, 0x3, 0x2, 0x2, 0x2, 0x75, 
    0x70, 0x3, 0x2, 0x2, 0x2, 0x75, 0x71, 0x3, 0x2, 0x2, 0x2, 0x76, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x7, 0xa, 0x2, 0x2, 0x78, 0x79, 0x9, 
    0x3, 0x2, 0x2, 0x79, 0x23, 0x3, 0x2, 0x2, 0x2, 0x9, 0x27, 0x32, 0x3f, 
    0x49, 0x5b, 0x64, 0x75, 
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
