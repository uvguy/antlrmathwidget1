
// Generated from Math.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MathVisitor.h"


namespace antlrtest {

/**
 * This class provides an empty implementation of MathVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MathBaseVisitor : public MathVisitor {
public:

  virtual antlrcpp::Any visitProg(MathParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBaseExpr(MathParser::BaseExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetVariable(MathParser::SetVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInteger(MathParser::IntegerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(MathParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAritLondo(MathParser::AritLondoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAritPipo(MathParser::AritPipoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArithBraches(MathParser::ArithBrachesContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrtest
