
// Generated from antlr/ParadoxFile.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ParadoxFileParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ParadoxFileParser.
 */
class  ParadoxFileVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ParadoxFileParser.
   */
    virtual antlrcpp::Any visitConfig(ParadoxFileParser::ConfigContext *context) = 0;

    virtual antlrcpp::Any visitAssignment(ParadoxFileParser::AssignmentContext *context) = 0;

    virtual antlrcpp::Any visitField(ParadoxFileParser::FieldContext *context) = 0;

    virtual antlrcpp::Any visitValue(ParadoxFileParser::ValueContext *context) = 0;

    virtual antlrcpp::Any visitSimpleValue(ParadoxFileParser::SimpleValueContext *context) = 0;

    virtual antlrcpp::Any visitSymbol(ParadoxFileParser::SymbolContext *context) = 0;

    virtual antlrcpp::Any visitString(ParadoxFileParser::StringContext *context) = 0;

    virtual antlrcpp::Any visitInteger(ParadoxFileParser::IntegerContext *context) = 0;

    virtual antlrcpp::Any visitReal(ParadoxFileParser::RealContext *context) = 0;

    virtual antlrcpp::Any visitDate(ParadoxFileParser::DateContext *context) = 0;

    virtual antlrcpp::Any visitPercent(ParadoxFileParser::PercentContext *context) = 0;

    virtual antlrcpp::Any visitMap(ParadoxFileParser::MapContext *context) = 0;

    virtual antlrcpp::Any visitArray(ParadoxFileParser::ArrayContext *context) = 0;

    virtual antlrcpp::Any visitVariable(ParadoxFileParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitVariable_expression(ParadoxFileParser::Variable_expressionContext *context) = 0;

    virtual antlrcpp::Any visitExpression(ParadoxFileParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitList(ParadoxFileParser::ListContext *context) = 0;


};

