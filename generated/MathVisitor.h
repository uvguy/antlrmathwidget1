
// Generated from Math.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MathParser.h"


namespace antlrtest {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by MathParser.
 */
class  MathVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MathParser.
   */
    virtual antlrcpp::Any visitProg(MathParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitBaseExpr(MathParser::BaseExprContext *context) = 0;

    virtual antlrcpp::Any visitSetVariable(MathParser::SetVariableContext *context) = 0;

    virtual antlrcpp::Any visitInteger(MathParser::IntegerContext *context) = 0;

    virtual antlrcpp::Any visitVariable(MathParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitAritLondo(MathParser::AritLondoContext *context) = 0;

    virtual antlrcpp::Any visitAritPipo(MathParser::AritPipoContext *context) = 0;

    virtual antlrcpp::Any visitArithBraches(MathParser::ArithBrachesContext *context) = 0;


};

}  // namespace antlrtest
