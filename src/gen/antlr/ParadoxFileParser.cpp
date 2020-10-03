
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
      | (1ULL << ParadoxFileParser::REAL)
      | (1ULL << ParadoxFileParser::SSTRING)
      | (1ULL << ParadoxFileParser::DSTRING)
      | (1ULL << ParadoxFileParser::CSTRING)
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

ParadoxFileParser::ValueContext* ParadoxFileParser::AssignmentContext::value() {
  return getRuleContext<ParadoxFileParser::ValueContext>(0);
}

tree::TerminalNode* ParadoxFileParser::AssignmentContext::OPERATOR() {
  return getToken(ParadoxFileParser::OPERATOR, 0);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    field();
    setState(42);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ParadoxFileParser::OPERATOR) {
      setState(41);
      match(ParadoxFileParser::OPERATOR);
    }
    setState(44);
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
    setState(50);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(46);
      string();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(47);
      symbol();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(48);
      variable();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(49);
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

ParadoxFileParser::ConstructorContext* ParadoxFileParser::ValueContext::constructor() {
  return getRuleContext<ParadoxFileParser::ConstructorContext>(0);
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
    setState(64);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(52);
      integer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(53);
      percent();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(54);
      real();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(55);
      date();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(56);
      string();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(57);
      symbol();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(58);
      variable();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(59);
      variable_expression();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(60);
      map();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(61);
      array();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(62);
      list();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(63);
      constructor();
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

ParadoxFileParser::StringContext* ParadoxFileParser::SymbolContext::string() {
  return getRuleContext<ParadoxFileParser::StringContext>(0);
}

tree::TerminalNode* ParadoxFileParser::SymbolContext::INT() {
  return getToken(ParadoxFileParser::INT, 0);
}

tree::TerminalNode* ParadoxFileParser::SymbolContext::REAL() {
  return getToken(ParadoxFileParser::REAL, 0);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(70);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ParadoxFileParser::SSTRING:
      case ParadoxFileParser::DSTRING:
      case ParadoxFileParser::CSTRING: {
        enterOuterAlt(_localctx, 1);
        setState(66);
        string();
        break;
      }

      case ParadoxFileParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(67);
        match(ParadoxFileParser::INT);
        break;
      }

      case ParadoxFileParser::REAL: {
        enterOuterAlt(_localctx, 3);
        setState(68);
        match(ParadoxFileParser::REAL);
        break;
      }

      case ParadoxFileParser::SYMBOL: {
        enterOuterAlt(_localctx, 4);
        setState(69);
        match(ParadoxFileParser::SYMBOL);
        break;
      }

    default:
      throw NoViableAltException(this);
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

tree::TerminalNode* ParadoxFileParser::StringContext::DSTRING() {
  return getToken(ParadoxFileParser::DSTRING, 0);
}

tree::TerminalNode* ParadoxFileParser::StringContext::SSTRING() {
  return getToken(ParadoxFileParser::SSTRING, 0);
}

tree::TerminalNode* ParadoxFileParser::StringContext::CSTRING() {
  return getToken(ParadoxFileParser::CSTRING, 0);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ParadoxFileParser::SSTRING)
      | (1ULL << ParadoxFileParser::DSTRING)
      | (1ULL << ParadoxFileParser::CSTRING))) != 0))) {
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
    setState(74);
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
    setState(76);
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
    setState(78);
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
    setState(80);
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
    setState(82);
    match(ParadoxFileParser::BLOCK_START);
    setState(86);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ParadoxFileParser::VARIABLE_START)
      | (1ULL << ParadoxFileParser::LIST_START)
      | (1ULL << ParadoxFileParser::INT)
      | (1ULL << ParadoxFileParser::REAL)
      | (1ULL << ParadoxFileParser::SSTRING)
      | (1ULL << ParadoxFileParser::DSTRING)
      | (1ULL << ParadoxFileParser::CSTRING)
      | (1ULL << ParadoxFileParser::SYMBOL))) != 0)) {
      setState(83);
      assignment();
      setState(88);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(89);
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

std::vector<ParadoxFileParser::ValueContext *> ParadoxFileParser::ArrayContext::value() {
  return getRuleContexts<ParadoxFileParser::ValueContext>();
}

ParadoxFileParser::ValueContext* ParadoxFileParser::ArrayContext::value(size_t i) {
  return getRuleContext<ParadoxFileParser::ValueContext>(i);
}

tree::TerminalNode* ParadoxFileParser::ArrayContext::BLOCK_END() {
  return getToken(ParadoxFileParser::BLOCK_END, 0);
}

std::vector<tree::TerminalNode *> ParadoxFileParser::ArrayContext::COMMA() {
  return getTokens(ParadoxFileParser::COMMA);
}

tree::TerminalNode* ParadoxFileParser::ArrayContext::COMMA(size_t i) {
  return getToken(ParadoxFileParser::COMMA, i);
}

std::vector<ParadoxFileParser::AssignmentContext *> ParadoxFileParser::ArrayContext::assignment() {
  return getRuleContexts<ParadoxFileParser::AssignmentContext>();
}

ParadoxFileParser::AssignmentContext* ParadoxFileParser::ArrayContext::assignment(size_t i) {
  return getRuleContext<ParadoxFileParser::AssignmentContext>(i);
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
    size_t alt;
    setState(137);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(91);
      match(ParadoxFileParser::BLOCK_START);
      setState(92);
      value();
      setState(94);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ParadoxFileParser::COMMA) {
        setState(93);
        match(ParadoxFileParser::COMMA);
      }
      setState(105);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ParadoxFileParser::BLOCK_START)
        | (1ULL << ParadoxFileParser::VARIABLE_START)
        | (1ULL << ParadoxFileParser::LIST_START)
        | (1ULL << ParadoxFileParser::INT)
        | (1ULL << ParadoxFileParser::PCT)
        | (1ULL << ParadoxFileParser::REAL)
        | (1ULL << ParadoxFileParser::DATE)
        | (1ULL << ParadoxFileParser::SSTRING)
        | (1ULL << ParadoxFileParser::DSTRING)
        | (1ULL << ParadoxFileParser::CSTRING)
        | (1ULL << ParadoxFileParser::SYMBOL))) != 0)) {
        setState(98);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          setState(96);
          value();
          break;
        }

        case 2: {
          setState(97);
          assignment();
          break;
        }

        }
        setState(101);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ParadoxFileParser::COMMA) {
          setState(100);
          match(ParadoxFileParser::COMMA);
        }
        setState(107);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(108);
      match(ParadoxFileParser::BLOCK_END);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(110);
      match(ParadoxFileParser::BLOCK_START);
      setState(115); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(111);
                assignment();
                setState(113);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == ParadoxFileParser::COMMA) {
                  setState(112);
                  match(ParadoxFileParser::COMMA);
                }
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(117); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(119);
      value();
      setState(121);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ParadoxFileParser::COMMA) {
        setState(120);
        match(ParadoxFileParser::COMMA);
      }
      setState(132);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ParadoxFileParser::BLOCK_START)
        | (1ULL << ParadoxFileParser::VARIABLE_START)
        | (1ULL << ParadoxFileParser::LIST_START)
        | (1ULL << ParadoxFileParser::INT)
        | (1ULL << ParadoxFileParser::PCT)
        | (1ULL << ParadoxFileParser::REAL)
        | (1ULL << ParadoxFileParser::DATE)
        | (1ULL << ParadoxFileParser::SSTRING)
        | (1ULL << ParadoxFileParser::DSTRING)
        | (1ULL << ParadoxFileParser::CSTRING)
        | (1ULL << ParadoxFileParser::SYMBOL))) != 0)) {
        setState(125);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          setState(123);
          value();
          break;
        }

        case 2: {
          setState(124);
          assignment();
          break;
        }

        }
        setState(128);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ParadoxFileParser::COMMA) {
          setState(127);
          match(ParadoxFileParser::COMMA);
        }
        setState(134);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(135);
      match(ParadoxFileParser::BLOCK_END);
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

tree::TerminalNode* ParadoxFileParser::VariableContext::INT() {
  return getToken(ParadoxFileParser::INT, 0);
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
  enterRule(_localctx, 24, ParadoxFileParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(143);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(139);
      match(ParadoxFileParser::VARIABLE_START);
      setState(140);
      match(ParadoxFileParser::SYMBOL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(141);
      match(ParadoxFileParser::VARIABLE_START);
      setState(142);
      match(ParadoxFileParser::INT);
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
  enterRule(_localctx, 26, ParadoxFileParser::RuleVariable_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    match(ParadoxFileParser::VARIABLE_START);
    setState(146);
    match(ParadoxFileParser::VARIABLE_EXPRESSION_START);
    setState(147);
    expression(0);
    setState(148);
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

std::vector<tree::TerminalNode *> ParadoxFileParser::ExpressionContext::ABS_VALUE() {
  return getTokens(ParadoxFileParser::ABS_VALUE);
}

tree::TerminalNode* ParadoxFileParser::ExpressionContext::ABS_VALUE(size_t i) {
  return getToken(ParadoxFileParser::ABS_VALUE, i);
}

std::vector<ParadoxFileParser::ExpressionContext *> ParadoxFileParser::ExpressionContext::expression() {
  return getRuleContexts<ParadoxFileParser::ExpressionContext>();
}

ParadoxFileParser::ExpressionContext* ParadoxFileParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<ParadoxFileParser::ExpressionContext>(i);
}

tree::TerminalNode* ParadoxFileParser::ExpressionContext::OPEN_PARENS() {
  return getToken(ParadoxFileParser::OPEN_PARENS, 0);
}

tree::TerminalNode* ParadoxFileParser::ExpressionContext::CLOSE_PARENS() {
  return getToken(ParadoxFileParser::CLOSE_PARENS, 0);
}

tree::TerminalNode* ParadoxFileParser::ExpressionContext::PLUS_MINUS() {
  return getToken(ParadoxFileParser::PLUS_MINUS, 0);
}

ParadoxFileParser::ValueContext* ParadoxFileParser::ExpressionContext::value() {
  return getRuleContext<ParadoxFileParser::ValueContext>(0);
}

tree::TerminalNode* ParadoxFileParser::ExpressionContext::MULTIPLY_DIVIDE() {
  return getToken(ParadoxFileParser::MULTIPLY_DIVIDE, 0);
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
   return expression(0);
}

ParadoxFileParser::ExpressionContext* ParadoxFileParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ParadoxFileParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  ParadoxFileParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, ParadoxFileParser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(162);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ParadoxFileParser::ABS_VALUE: {
        setState(151);
        match(ParadoxFileParser::ABS_VALUE);
        setState(152);
        expression(0);
        setState(153);
        match(ParadoxFileParser::ABS_VALUE);
        break;
      }

      case ParadoxFileParser::OPEN_PARENS: {
        setState(155);
        match(ParadoxFileParser::OPEN_PARENS);
        setState(156);
        expression(0);
        setState(157);
        match(ParadoxFileParser::CLOSE_PARENS);
        break;
      }

      case ParadoxFileParser::PLUS_MINUS: {
        setState(159);
        match(ParadoxFileParser::PLUS_MINUS);
        setState(160);
        value();
        break;
      }

      case ParadoxFileParser::BLOCK_START:
      case ParadoxFileParser::VARIABLE_START:
      case ParadoxFileParser::LIST_START:
      case ParadoxFileParser::INT:
      case ParadoxFileParser::PCT:
      case ParadoxFileParser::REAL:
      case ParadoxFileParser::DATE:
      case ParadoxFileParser::SSTRING:
      case ParadoxFileParser::DSTRING:
      case ParadoxFileParser::CSTRING:
      case ParadoxFileParser::SYMBOL: {
        setState(161);
        value();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(172);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(170);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(164);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(165);
          match(ParadoxFileParser::MULTIPLY_DIVIDE);
          setState(166);
          expression(7);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(167);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(168);
          match(ParadoxFileParser::PLUS_MINUS);
          setState(169);
          expression(6);
          break;
        }

        } 
      }
      setState(174);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
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

ParadoxFileParser::StringContext* ParadoxFileParser::ListContext::string() {
  return getRuleContext<ParadoxFileParser::StringContext>(0);
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
  enterRule(_localctx, 30, ParadoxFileParser::RuleList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    match(ParadoxFileParser::LIST_START);
    setState(178);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ParadoxFileParser::SYMBOL: {
        setState(176);
        match(ParadoxFileParser::SYMBOL);
        break;
      }

      case ParadoxFileParser::SSTRING:
      case ParadoxFileParser::DSTRING:
      case ParadoxFileParser::CSTRING: {
        setState(177);
        string();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorContext ------------------------------------------------------------------

ParadoxFileParser::ConstructorContext::ConstructorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ParadoxFileParser::SymbolContext* ParadoxFileParser::ConstructorContext::symbol() {
  return getRuleContext<ParadoxFileParser::SymbolContext>(0);
}

ParadoxFileParser::ArrayContext* ParadoxFileParser::ConstructorContext::array() {
  return getRuleContext<ParadoxFileParser::ArrayContext>(0);
}


size_t ParadoxFileParser::ConstructorContext::getRuleIndex() const {
  return ParadoxFileParser::RuleConstructor;
}

void ParadoxFileParser::ConstructorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructor(this);
}

void ParadoxFileParser::ConstructorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParadoxFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructor(this);
}


antlrcpp::Any ParadoxFileParser::ConstructorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ParadoxFileVisitor*>(visitor))
    return parserVisitor->visitConstructor(this);
  else
    return visitor->visitChildren(this);
}

ParadoxFileParser::ConstructorContext* ParadoxFileParser::constructor() {
  ConstructorContext *_localctx = _tracker.createInstance<ConstructorContext>(_ctx, getState());
  enterRule(_localctx, 32, ParadoxFileParser::RuleConstructor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    symbol();
    setState(181);
    array();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ParadoxFileParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 14: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ParadoxFileParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ParadoxFileParser::_decisionToDFA;
atn::PredictionContextCache ParadoxFileParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ParadoxFileParser::_atn;
std::vector<uint16_t> ParadoxFileParser::_serializedATN;

std::vector<std::string> ParadoxFileParser::_ruleNames = {
  "config", "assignment", "field", "value", "symbol", "string", "integer", 
  "real", "date", "percent", "map", "array", "variable", "variable_expression", 
  "expression", "list", "constructor"
};

std::vector<std::string> ParadoxFileParser::_literalNames = {
  "", "", "'{'", "'}'", "", "'['", "']'", "'|'", "'('", "')'", "'list'", 
  "", "", "", "", "", "", "", "", "", "", "','"
};

std::vector<std::string> ParadoxFileParser::_symbolicNames = {
  "", "OPERATOR", "BLOCK_START", "BLOCK_END", "VARIABLE_START", "VARIABLE_EXPRESSION_START", 
  "VARIABLE_EXPRESSION_END", "ABS_VALUE", "OPEN_PARENS", "CLOSE_PARENS", 
  "LIST_START", "INT", "PCT", "REAL", "DATE", "SSTRING", "DSTRING", "CSTRING", 
  "SYMBOL", "PLUS_MINUS", "MULTIPLY_DIVIDE", "COMMA", "WHITESPACE", "LINE_COMMENT"
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
    0x3, 0x19, 0xba, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x3, 0x2, 0x7, 0x2, 0x26, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x29, 
    0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2d, 0xa, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x35, 0xa, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x43, 0xa, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x49, 0xa, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x57, 0xa, 
    0xc, 0xc, 0xc, 0xe, 0xc, 0x5a, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x61, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 
    0xd, 0x65, 0xa, 0xd, 0x3, 0xd, 0x5, 0xd, 0x68, 0xa, 0xd, 0x7, 0xd, 0x6a, 
    0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x6d, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x74, 0xa, 0xd, 0x6, 0xd, 0x76, 0xa, 
    0xd, 0xd, 0xd, 0xe, 0xd, 0x77, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x7c, 0xa, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x80, 0xa, 0xd, 0x3, 0xd, 0x5, 0xd, 
    0x83, 0xa, 0xd, 0x7, 0xd, 0x85, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x88, 
    0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x8c, 0xa, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x92, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xa5, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xad, 0xa, 0x10, 
    0xc, 0x10, 0xe, 0x10, 0xb0, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0xb5, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x2, 0x3, 0x1e, 0x13, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x2, 0x3, 0x3, 0x2, 
    0x11, 0x13, 0x2, 0xce, 0x2, 0x27, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2a, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x34, 0x3, 0x2, 0x2, 0x2, 0x8, 0x42, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x48, 0x3, 0x2, 0x2, 0x2, 0xc, 0x4a, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x4c, 0x3, 0x2, 0x2, 0x2, 0x10, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x12, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x52, 0x3, 0x2, 0x2, 0x2, 0x16, 0x54, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x91, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x93, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xa4, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x22, 0xb6, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x26, 0x5, 0x4, 0x3, 0x2, 0x25, 0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0x27, 0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x3, 0x3, 0x2, 0x2, 0x2, 0x29, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0x2a, 0x2c, 0x5, 0x6, 0x4, 0x2, 0x2b, 0x2d, 0x7, 0x3, 
    0x2, 0x2, 0x2c, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x5, 0x8, 0x5, 0x2, 
    0x2f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x30, 0x35, 0x5, 0xc, 0x7, 0x2, 0x31, 
    0x35, 0x5, 0xa, 0x6, 0x2, 0x32, 0x35, 0x5, 0x1a, 0xe, 0x2, 0x33, 0x35, 
    0x7, 0xc, 0x2, 0x2, 0x34, 0x30, 0x3, 0x2, 0x2, 0x2, 0x34, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x34, 0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0x35, 0x7, 0x3, 0x2, 0x2, 0x2, 0x36, 0x43, 0x5, 0xe, 0x8, 
    0x2, 0x37, 0x43, 0x5, 0x14, 0xb, 0x2, 0x38, 0x43, 0x5, 0x10, 0x9, 0x2, 
    0x39, 0x43, 0x5, 0x12, 0xa, 0x2, 0x3a, 0x43, 0x5, 0xc, 0x7, 0x2, 0x3b, 
    0x43, 0x5, 0xa, 0x6, 0x2, 0x3c, 0x43, 0x5, 0x1a, 0xe, 0x2, 0x3d, 0x43, 
    0x5, 0x1c, 0xf, 0x2, 0x3e, 0x43, 0x5, 0x16, 0xc, 0x2, 0x3f, 0x43, 0x5, 
    0x18, 0xd, 0x2, 0x40, 0x43, 0x5, 0x20, 0x11, 0x2, 0x41, 0x43, 0x5, 0x22, 
    0x12, 0x2, 0x42, 0x36, 0x3, 0x2, 0x2, 0x2, 0x42, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x42, 0x38, 0x3, 0x2, 0x2, 0x2, 0x42, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x42, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x42, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x3c, 0x3, 0x2, 0x2, 0x2, 0x42, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x42, 0x3e, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x42, 0x40, 0x3, 
    0x2, 0x2, 0x2, 0x42, 0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x49, 0x5, 0xc, 0x7, 0x2, 0x45, 0x49, 0x7, 0xd, 0x2, 
    0x2, 0x46, 0x49, 0x7, 0xf, 0x2, 0x2, 0x47, 0x49, 0x7, 0x14, 0x2, 0x2, 
    0x48, 0x44, 0x3, 0x2, 0x2, 0x2, 0x48, 0x45, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x46, 0x3, 0x2, 0x2, 0x2, 0x48, 0x47, 0x3, 0x2, 0x2, 0x2, 0x49, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x9, 0x2, 0x2, 0x2, 0x4b, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0xd, 0x2, 0x2, 0x4d, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x4e, 0x4f, 0x7, 0xf, 0x2, 0x2, 0x4f, 0x11, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x51, 0x7, 0x10, 0x2, 0x2, 0x51, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x53, 0x7, 0xe, 0x2, 0x2, 0x53, 0x15, 0x3, 0x2, 0x2, 0x2, 0x54, 
    0x58, 0x7, 0x4, 0x2, 0x2, 0x55, 0x57, 0x5, 0x4, 0x3, 0x2, 0x56, 0x55, 
    0x3, 0x2, 0x2, 0x2, 0x57, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x58, 0x56, 0x3, 
    0x2, 0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5b, 0x3, 0x2, 
    0x2, 0x2, 0x5a, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x5, 0x2, 
    0x2, 0x5c, 0x17, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0x4, 0x2, 0x2, 
    0x5e, 0x60, 0x5, 0x8, 0x5, 0x2, 0x5f, 0x61, 0x7, 0x17, 0x2, 0x2, 0x60, 
    0x5f, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0x6b, 
    0x3, 0x2, 0x2, 0x2, 0x62, 0x65, 0x5, 0x8, 0x5, 0x2, 0x63, 0x65, 0x5, 
    0x4, 0x3, 0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 0x64, 0x63, 0x3, 0x2, 
    0x2, 0x2, 0x65, 0x67, 0x3, 0x2, 0x2, 0x2, 0x66, 0x68, 0x7, 0x17, 0x2, 
    0x2, 0x67, 0x66, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x3, 0x2, 0x2, 0x2, 
    0x68, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x69, 0x64, 0x3, 0x2, 0x2, 0x2, 0x6a, 
    0x6d, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 
    0x3, 0x2, 0x2, 0x2, 0x6c, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 0x3, 
    0x2, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x5, 0x2, 0x2, 0x6f, 0x8c, 0x3, 0x2, 
    0x2, 0x2, 0x70, 0x75, 0x7, 0x4, 0x2, 0x2, 0x71, 0x73, 0x5, 0x4, 0x3, 
    0x2, 0x72, 0x74, 0x7, 0x17, 0x2, 0x2, 0x73, 0x72, 0x3, 0x2, 0x2, 0x2, 
    0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 0x76, 0x3, 0x2, 0x2, 0x2, 0x75, 
    0x71, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x3, 
    0x2, 0x2, 0x2, 0x79, 0x7b, 0x5, 0x8, 0x5, 0x2, 0x7a, 0x7c, 0x7, 0x17, 
    0x2, 0x2, 0x7b, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 
    0x2, 0x7c, 0x86, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x80, 0x5, 0x8, 0x5, 0x2, 
    0x7e, 0x80, 0x5, 0x4, 0x3, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7f, 
    0x7e, 0x3, 0x2, 0x2, 0x2, 0x80, 0x82, 0x3, 0x2, 0x2, 0x2, 0x81, 0x83, 
    0x7, 0x17, 0x2, 0x2, 0x82, 0x81, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x3, 
    0x2, 0x2, 0x2, 0x83, 0x85, 0x3, 0x2, 0x2, 0x2, 0x84, 0x7f, 0x3, 0x2, 
    0x2, 0x2, 0x85, 0x88, 0x3, 0x2, 0x2, 0x2, 0x86, 0x84, 0x3, 0x2, 0x2, 
    0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x89, 0x3, 0x2, 0x2, 0x2, 
    0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x7, 0x5, 0x2, 0x2, 0x8a, 
    0x8c, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x70, 
    0x3, 0x2, 0x2, 0x2, 0x8c, 0x19, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x7, 
    0x6, 0x2, 0x2, 0x8e, 0x92, 0x7, 0x14, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x6, 
    0x2, 0x2, 0x90, 0x92, 0x7, 0xd, 0x2, 0x2, 0x91, 0x8d, 0x3, 0x2, 0x2, 
    0x2, 0x91, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x92, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x93, 0x94, 0x7, 0x6, 0x2, 0x2, 0x94, 0x95, 0x7, 0x7, 0x2, 0x2, 0x95, 
    0x96, 0x5, 0x1e, 0x10, 0x2, 0x96, 0x97, 0x7, 0x8, 0x2, 0x2, 0x97, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x8, 0x10, 0x1, 0x2, 0x99, 0x9a, 0x7, 
    0x9, 0x2, 0x2, 0x9a, 0x9b, 0x5, 0x1e, 0x10, 0x2, 0x9b, 0x9c, 0x7, 0x9, 
    0x2, 0x2, 0x9c, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x7, 0xa, 0x2, 
    0x2, 0x9e, 0x9f, 0x5, 0x1e, 0x10, 0x2, 0x9f, 0xa0, 0x7, 0xb, 0x2, 0x2, 
    0xa0, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x15, 0x2, 0x2, 0xa2, 
    0xa5, 0x5, 0x8, 0x5, 0x2, 0xa3, 0xa5, 0x5, 0x8, 0x5, 0x2, 0xa4, 0x98, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa1, 0x3, 
    0x2, 0x2, 0x2, 0xa4, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xae, 0x3, 0x2, 
    0x2, 0x2, 0xa6, 0xa7, 0xc, 0x8, 0x2, 0x2, 0xa7, 0xa8, 0x7, 0x16, 0x2, 
    0x2, 0xa8, 0xad, 0x5, 0x1e, 0x10, 0x9, 0xa9, 0xaa, 0xc, 0x7, 0x2, 0x2, 
    0xaa, 0xab, 0x7, 0x15, 0x2, 0x2, 0xab, 0xad, 0x5, 0x1e, 0x10, 0x8, 0xac, 
    0xa6, 0x3, 0x2, 0x2, 0x2, 0xac, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xad, 0xb0, 
    0x3, 0x2, 0x2, 0x2, 0xae, 0xac, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x3, 
    0x2, 0x2, 0x2, 0xaf, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xae, 0x3, 0x2, 
    0x2, 0x2, 0xb1, 0xb4, 0x7, 0xc, 0x2, 0x2, 0xb2, 0xb5, 0x7, 0x14, 0x2, 
    0x2, 0xb3, 0xb5, 0x5, 0xc, 0x7, 0x2, 0xb4, 0xb2, 0x3, 0x2, 0x2, 0x2, 
    0xb4, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb5, 0x21, 0x3, 0x2, 0x2, 0x2, 0xb6, 
    0xb7, 0x5, 0xa, 0x6, 0x2, 0xb7, 0xb8, 0x5, 0x18, 0xd, 0x2, 0xb8, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x27, 0x2c, 0x34, 0x42, 0x48, 0x58, 0x60, 
    0x64, 0x67, 0x6b, 0x73, 0x77, 0x7b, 0x7f, 0x82, 0x86, 0x8b, 0x91, 0xa4, 
    0xac, 0xae, 0xb4, 
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
