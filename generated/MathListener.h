
// Generated from Math.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MathParser.h"


namespace antlrtest {

/**
 * This interface defines an abstract listener for a parse tree produced by MathParser.
 */
class  MathListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(MathParser::ProgContext *ctx) = 0;
  virtual void exitProg(MathParser::ProgContext *ctx) = 0;

  virtual void enterBaseExpr(MathParser::BaseExprContext *ctx) = 0;
  virtual void exitBaseExpr(MathParser::BaseExprContext *ctx) = 0;

  virtual void enterSetVariable(MathParser::SetVariableContext *ctx) = 0;
  virtual void exitSetVariable(MathParser::SetVariableContext *ctx) = 0;

  virtual void enterInteger(MathParser::IntegerContext *ctx) = 0;
  virtual void exitInteger(MathParser::IntegerContext *ctx) = 0;

  virtual void enterVariable(MathParser::VariableContext *ctx) = 0;
  virtual void exitVariable(MathParser::VariableContext *ctx) = 0;

  virtual void enterAritLondo(MathParser::AritLondoContext *ctx) = 0;
  virtual void exitAritLondo(MathParser::AritLondoContext *ctx) = 0;

  virtual void enterAritPipo(MathParser::AritPipoContext *ctx) = 0;
  virtual void exitAritPipo(MathParser::AritPipoContext *ctx) = 0;

  virtual void enterArithBraches(MathParser::ArithBrachesContext *ctx) = 0;
  virtual void exitArithBraches(MathParser::ArithBrachesContext *ctx) = 0;


};

}  // namespace antlrtest
