
// Generated from antlr/ParadoxFile.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ParadoxFileListener.h"


/**
 * This class provides an empty implementation of ParadoxFileListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ParadoxFileBaseListener : public ParadoxFileListener {
public:

  virtual void enterConfig(ParadoxFileParser::ConfigContext * /*ctx*/) override { }
  virtual void exitConfig(ParadoxFileParser::ConfigContext * /*ctx*/) override { }

  virtual void enterAssignment(ParadoxFileParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(ParadoxFileParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterField(ParadoxFileParser::FieldContext * /*ctx*/) override { }
  virtual void exitField(ParadoxFileParser::FieldContext * /*ctx*/) override { }

  virtual void enterValue(ParadoxFileParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(ParadoxFileParser::ValueContext * /*ctx*/) override { }

  virtual void enterSymbol(ParadoxFileParser::SymbolContext * /*ctx*/) override { }
  virtual void exitSymbol(ParadoxFileParser::SymbolContext * /*ctx*/) override { }

  virtual void enterString(ParadoxFileParser::StringContext * /*ctx*/) override { }
  virtual void exitString(ParadoxFileParser::StringContext * /*ctx*/) override { }

  virtual void enterInteger(ParadoxFileParser::IntegerContext * /*ctx*/) override { }
  virtual void exitInteger(ParadoxFileParser::IntegerContext * /*ctx*/) override { }

  virtual void enterReal(ParadoxFileParser::RealContext * /*ctx*/) override { }
  virtual void exitReal(ParadoxFileParser::RealContext * /*ctx*/) override { }

  virtual void enterDate(ParadoxFileParser::DateContext * /*ctx*/) override { }
  virtual void exitDate(ParadoxFileParser::DateContext * /*ctx*/) override { }

  virtual void enterPercent(ParadoxFileParser::PercentContext * /*ctx*/) override { }
  virtual void exitPercent(ParadoxFileParser::PercentContext * /*ctx*/) override { }

  virtual void enterMap(ParadoxFileParser::MapContext * /*ctx*/) override { }
  virtual void exitMap(ParadoxFileParser::MapContext * /*ctx*/) override { }

  virtual void enterArray(ParadoxFileParser::ArrayContext * /*ctx*/) override { }
  virtual void exitArray(ParadoxFileParser::ArrayContext * /*ctx*/) override { }

  virtual void enterVariable(ParadoxFileParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(ParadoxFileParser::VariableContext * /*ctx*/) override { }

  virtual void enterVariable_expression(ParadoxFileParser::Variable_expressionContext * /*ctx*/) override { }
  virtual void exitVariable_expression(ParadoxFileParser::Variable_expressionContext * /*ctx*/) override { }

  virtual void enterExpression(ParadoxFileParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(ParadoxFileParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterList(ParadoxFileParser::ListContext * /*ctx*/) override { }
  virtual void exitList(ParadoxFileParser::ListContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

