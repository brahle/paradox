
// Generated from antlr/ParadoxFile.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ParadoxFileVisitor.h"


/**
 * This class provides an empty implementation of ParadoxFileVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ParadoxFileBaseVisitor : public ParadoxFileVisitor {
public:

  virtual antlrcpp::Any visitConfig(ParadoxFileParser::ConfigContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment(ParadoxFileParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitField(ParadoxFileParser::FieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue(ParadoxFileParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSymbol(ParadoxFileParser::SymbolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(ParadoxFileParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInteger(ParadoxFileParser::IntegerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReal(ParadoxFileParser::RealContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDate(ParadoxFileParser::DateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPercent(ParadoxFileParser::PercentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMap(ParadoxFileParser::MapContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArray(ParadoxFileParser::ArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(ParadoxFileParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_expression(ParadoxFileParser::Variable_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(ParadoxFileParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList(ParadoxFileParser::ListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstructor(ParadoxFileParser::ConstructorContext *ctx) override {
    return visitChildren(ctx);
  }


};

