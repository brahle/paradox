
// Generated from antlr/ParadoxFile.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ParadoxFileParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ParadoxFileParser.
 */
class  ParadoxFileListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterConfig(ParadoxFileParser::ConfigContext *ctx) = 0;
  virtual void exitConfig(ParadoxFileParser::ConfigContext *ctx) = 0;

  virtual void enterAssignment(ParadoxFileParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(ParadoxFileParser::AssignmentContext *ctx) = 0;

  virtual void enterField(ParadoxFileParser::FieldContext *ctx) = 0;
  virtual void exitField(ParadoxFileParser::FieldContext *ctx) = 0;

  virtual void enterValue(ParadoxFileParser::ValueContext *ctx) = 0;
  virtual void exitValue(ParadoxFileParser::ValueContext *ctx) = 0;

  virtual void enterSymbol(ParadoxFileParser::SymbolContext *ctx) = 0;
  virtual void exitSymbol(ParadoxFileParser::SymbolContext *ctx) = 0;

  virtual void enterString(ParadoxFileParser::StringContext *ctx) = 0;
  virtual void exitString(ParadoxFileParser::StringContext *ctx) = 0;

  virtual void enterInteger(ParadoxFileParser::IntegerContext *ctx) = 0;
  virtual void exitInteger(ParadoxFileParser::IntegerContext *ctx) = 0;

  virtual void enterReal(ParadoxFileParser::RealContext *ctx) = 0;
  virtual void exitReal(ParadoxFileParser::RealContext *ctx) = 0;

  virtual void enterDate(ParadoxFileParser::DateContext *ctx) = 0;
  virtual void exitDate(ParadoxFileParser::DateContext *ctx) = 0;

  virtual void enterPercent(ParadoxFileParser::PercentContext *ctx) = 0;
  virtual void exitPercent(ParadoxFileParser::PercentContext *ctx) = 0;

  virtual void enterMap(ParadoxFileParser::MapContext *ctx) = 0;
  virtual void exitMap(ParadoxFileParser::MapContext *ctx) = 0;

  virtual void enterArray(ParadoxFileParser::ArrayContext *ctx) = 0;
  virtual void exitArray(ParadoxFileParser::ArrayContext *ctx) = 0;

  virtual void enterVariable(ParadoxFileParser::VariableContext *ctx) = 0;
  virtual void exitVariable(ParadoxFileParser::VariableContext *ctx) = 0;

  virtual void enterVariable_expression(ParadoxFileParser::Variable_expressionContext *ctx) = 0;
  virtual void exitVariable_expression(ParadoxFileParser::Variable_expressionContext *ctx) = 0;

  virtual void enterExpression(ParadoxFileParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(ParadoxFileParser::ExpressionContext *ctx) = 0;

  virtual void enterList(ParadoxFileParser::ListContext *ctx) = 0;
  virtual void exitList(ParadoxFileParser::ListContext *ctx) = 0;

  virtual void enterConstructor(ParadoxFileParser::ConstructorContext *ctx) = 0;
  virtual void exitConstructor(ParadoxFileParser::ConstructorContext *ctx) = 0;


};

