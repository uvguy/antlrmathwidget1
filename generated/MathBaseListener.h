
// Generated from Math.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MathListener.h"


namespace antlrtest {

/**
 * This class provides an empty implementation of MathListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MathBaseListener : public MathListener {
public:

  virtual void enterProg(MathParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(MathParser::ProgContext * /*ctx*/) override { }

  virtual void enterBaseExpr(MathParser::BaseExprContext * /*ctx*/) override { }
  virtual void exitBaseExpr(MathParser::BaseExprContext * /*ctx*/) override { }

  virtual void enterSetVariable(MathParser::SetVariableContext * /*ctx*/) override { }
  virtual void exitSetVariable(MathParser::SetVariableContext * /*ctx*/) override { }

  virtual void enterInteger(MathParser::IntegerContext * /*ctx*/) override { }
  virtual void exitInteger(MathParser::IntegerContext * /*ctx*/) override { }

  virtual void enterVariable(MathParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(MathParser::VariableContext * /*ctx*/) override { }

  virtual void enterAritLondo(MathParser::AritLondoContext * /*ctx*/) override { }
  virtual void exitAritLondo(MathParser::AritLondoContext * /*ctx*/) override { }

  virtual void enterAritPipo(MathParser::AritPipoContext * /*ctx*/) override { }
  virtual void exitAritPipo(MathParser::AritPipoContext * /*ctx*/) override { }

  virtual void enterArithBraches(MathParser::ArithBrachesContext * /*ctx*/) override { }
  virtual void exitArithBraches(MathParser::ArithBrachesContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace antlrtest
