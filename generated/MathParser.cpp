
// Generated from Math.g4 by ANTLR 4.7.1


#include "MathListener.h"
#include "MathVisitor.h"

#include "MathParser.h"


using namespace antlrcpp;
using namespace antlrtest;
using namespace antlr4;

MathParser::MathParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MathParser::~MathParser() {
  delete _interpreter;
}

std::string MathParser::getGrammarFileName() const {
  return "Math.g4";
}

const std::vector<std::string>& MathParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& MathParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

MathParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MathParser::ProgContext::EOF() {
  return getToken(MathParser::EOF, 0);
}

std::vector<MathParser::StatContext *> MathParser::ProgContext::stat() {
  return getRuleContexts<MathParser::StatContext>();
}

MathParser::StatContext* MathParser::ProgContext::stat(size_t i) {
  return getRuleContext<MathParser::StatContext>(i);
}


size_t MathParser::ProgContext::getRuleIndex() const {
  return MathParser::RuleProg;
}

void MathParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void MathParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}


antlrcpp::Any MathParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MathVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

MathParser::ProgContext* MathParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, MathParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(7); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(6);
      stat();
      setState(9); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MathParser::T__5)
      | (1ULL << MathParser::ID)
      | (1ULL << MathParser::INT)
      | (1ULL << MathParser::MIN))) != 0));
    setState(11);
    match(MathParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

MathParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MathParser::StatContext::getRuleIndex() const {
  return MathParser::RuleStat;
}

void MathParser::StatContext::copyFrom(StatContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BaseExprContext ------------------------------------------------------------------

MathParser::ExprContext* MathParser::BaseExprContext::expr() {
  return getRuleContext<MathParser::ExprContext>(0);
}

MathParser::BaseExprContext::BaseExprContext(StatContext *ctx) { copyFrom(ctx); }

void MathParser::BaseExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseExpr(this);
}
void MathParser::BaseExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseExpr(this);
}

antlrcpp::Any MathParser::BaseExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MathVisitor*>(visitor))
    return parserVisitor->visitBaseExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SetVariableContext ------------------------------------------------------------------

tree::TerminalNode* MathParser::SetVariableContext::ID() {
  return getToken(MathParser::ID, 0);
}

MathParser::ExprContext* MathParser::SetVariableContext::expr() {
  return getRuleContext<MathParser::ExprContext>(0);
}

MathParser::SetVariableContext::SetVariableContext(StatContext *ctx) { copyFrom(ctx); }

void MathParser::SetVariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetVariable(this);
}
void MathParser::SetVariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetVariable(this);
}

antlrcpp::Any MathParser::SetVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MathVisitor*>(visitor))
    return parserVisitor->visitSetVariable(this);
  else
    return visitor->visitChildren(this);
}
MathParser::StatContext* MathParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, MathParser::RuleStat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(21);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<MathParser::BaseExprContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(13);
      expr(0);
      setState(14);
      match(MathParser::T__0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<MathParser::SetVariableContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(16);
      match(MathParser::ID);
      setState(17);
      match(MathParser::T__1);
      setState(18);
      expr(0);
      setState(19);
      match(MathParser::T__0);
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

//----------------- ExprContext ------------------------------------------------------------------

MathParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MathParser::ExprContext::getRuleIndex() const {
  return MathParser::RuleExpr;
}

void MathParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IntegerContext ------------------------------------------------------------------

tree::TerminalNode* MathParser::IntegerContext::INT() {
  return getToken(MathParser::INT, 0);
}

tree::TerminalNode* MathParser::IntegerContext::MIN() {
  return getToken(MathParser::MIN, 0);
}

MathParser::IntegerContext::IntegerContext(ExprContext *ctx) { copyFrom(ctx); }

void MathParser::IntegerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger(this);
}
void MathParser::IntegerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger(this);
}

antlrcpp::Any MathParser::IntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MathVisitor*>(visitor))
    return parserVisitor->visitInteger(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableContext ------------------------------------------------------------------

tree::TerminalNode* MathParser::VariableContext::ID() {
  return getToken(MathParser::ID, 0);
}

MathParser::VariableContext::VariableContext(ExprContext *ctx) { copyFrom(ctx); }

void MathParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}
void MathParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}

antlrcpp::Any MathParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MathVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AritLondoContext ------------------------------------------------------------------

std::vector<MathParser::ExprContext *> MathParser::AritLondoContext::expr() {
  return getRuleContexts<MathParser::ExprContext>();
}

MathParser::ExprContext* MathParser::AritLondoContext::expr(size_t i) {
  return getRuleContext<MathParser::ExprContext>(i);
}

MathParser::AritLondoContext::AritLondoContext(ExprContext *ctx) { copyFrom(ctx); }

void MathParser::AritLondoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAritLondo(this);
}
void MathParser::AritLondoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAritLondo(this);
}

antlrcpp::Any MathParser::AritLondoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MathVisitor*>(visitor))
    return parserVisitor->visitAritLondo(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AritPipoContext ------------------------------------------------------------------

std::vector<MathParser::ExprContext *> MathParser::AritPipoContext::expr() {
  return getRuleContexts<MathParser::ExprContext>();
}

MathParser::ExprContext* MathParser::AritPipoContext::expr(size_t i) {
  return getRuleContext<MathParser::ExprContext>(i);
}

MathParser::AritPipoContext::AritPipoContext(ExprContext *ctx) { copyFrom(ctx); }

void MathParser::AritPipoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAritPipo(this);
}
void MathParser::AritPipoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAritPipo(this);
}

antlrcpp::Any MathParser::AritPipoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MathVisitor*>(visitor))
    return parserVisitor->visitAritPipo(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithBrachesContext ------------------------------------------------------------------

MathParser::ExprContext* MathParser::ArithBrachesContext::expr() {
  return getRuleContext<MathParser::ExprContext>(0);
}

MathParser::ArithBrachesContext::ArithBrachesContext(ExprContext *ctx) { copyFrom(ctx); }

void MathParser::ArithBrachesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithBraches(this);
}
void MathParser::ArithBrachesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithBraches(this);
}

antlrcpp::Any MathParser::ArithBrachesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MathVisitor*>(visitor))
    return parserVisitor->visitArithBraches(this);
  else
    return visitor->visitChildren(this);
}

MathParser::ExprContext* MathParser::expr() {
   return expr(0);
}

MathParser::ExprContext* MathParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MathParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  MathParser::ExprContext *previousContext = _localctx;
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, MathParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(33);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MathParser::INT:
      case MathParser::MIN: {
        _localctx = _tracker.createInstance<IntegerContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(25);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MathParser::MIN) {
          setState(24);
          match(MathParser::MIN);
        }
        setState(27);
        match(MathParser::INT);
        break;
      }

      case MathParser::ID: {
        _localctx = _tracker.createInstance<VariableContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(28);
        match(MathParser::ID);
        break;
      }

      case MathParser::T__5: {
        _localctx = _tracker.createInstance<ArithBrachesContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(29);
        match(MathParser::T__5);
        setState(30);
        expr(0);
        setState(31);
        match(MathParser::T__6);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(43);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(41);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<AritPipoContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(35);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(36);
          dynamic_cast<AritPipoContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == MathParser::T__2

          || _la == MathParser::T__3)) {
            dynamic_cast<AritPipoContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(37);
          expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AritLondoContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(38);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(39);
          dynamic_cast<AritLondoContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == MathParser::T__4

          || _la == MathParser::MIN)) {
            dynamic_cast<AritLondoContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(40);
          expr(5);
          break;
        }

        } 
      }
      setState(45);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool MathParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MathParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> MathParser::_decisionToDFA;
atn::PredictionContextCache MathParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MathParser::_atn;
std::vector<uint16_t> MathParser::_serializedATN;

std::vector<std::string> MathParser::_ruleNames = {
  "prog", "stat", "expr"
};

std::vector<std::string> MathParser::_literalNames = {
  "", "';'", "'='", "'*'", "'/'", "'+'", "'('", "')'", "", "", "'-'"
};

std::vector<std::string> MathParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "ID", "INT", "MIN", "WS"
};

dfa::Vocabulary MathParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MathParser::_tokenNames;

MathParser::Initializer::Initializer() {
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
    0x3, 0xd, 0x31, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x3, 0x2, 0x6, 0x2, 0xa, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0xb, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x18, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 
    0x5, 0x4, 0x1c, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x5, 0x4, 0x24, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x2c, 0xa, 0x4, 0xc, 0x4, 0xe, 
    0x4, 0x2f, 0xb, 0x4, 0x3, 0x4, 0x2, 0x3, 0x6, 0x5, 0x2, 0x4, 0x6, 0x2, 
    0x4, 0x3, 0x2, 0x5, 0x6, 0x4, 0x2, 0x7, 0x7, 0xc, 0xc, 0x2, 0x34, 0x2, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0x4, 0x17, 0x3, 0x2, 0x2, 0x2, 0x6, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0x8, 0xa, 0x5, 0x4, 0x3, 0x2, 0x9, 0x8, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0xb, 0x3, 0x2, 0x2, 0x2, 0xb, 0x9, 0x3, 0x2, 0x2, 0x2, 0xb, 
    0xc, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x3, 0x2, 0x2, 0x2, 0xd, 0xe, 0x7, 
    0x2, 0x2, 0x3, 0xe, 0x3, 0x3, 0x2, 0x2, 0x2, 0xf, 0x10, 0x5, 0x6, 0x4, 
    0x2, 0x10, 0x11, 0x7, 0x3, 0x2, 0x2, 0x11, 0x18, 0x3, 0x2, 0x2, 0x2, 
    0x12, 0x13, 0x7, 0xa, 0x2, 0x2, 0x13, 0x14, 0x7, 0x4, 0x2, 0x2, 0x14, 
    0x15, 0x5, 0x6, 0x4, 0x2, 0x15, 0x16, 0x7, 0x3, 0x2, 0x2, 0x16, 0x18, 
    0x3, 0x2, 0x2, 0x2, 0x17, 0xf, 0x3, 0x2, 0x2, 0x2, 0x17, 0x12, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x5, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1b, 0x8, 0x4, 
    0x1, 0x2, 0x1a, 0x1c, 0x7, 0xc, 0x2, 0x2, 0x1b, 0x1a, 0x3, 0x2, 0x2, 
    0x2, 0x1b, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x1d, 0x24, 0x7, 0xb, 0x2, 0x2, 0x1e, 0x24, 0x7, 0xa, 0x2, 0x2, 0x1f, 
    0x20, 0x7, 0x8, 0x2, 0x2, 0x20, 0x21, 0x5, 0x6, 0x4, 0x2, 0x21, 0x22, 
    0x7, 0x9, 0x2, 0x2, 0x22, 0x24, 0x3, 0x2, 0x2, 0x2, 0x23, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x23, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x23, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x24, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0xc, 0x7, 0x2, 
    0x2, 0x26, 0x27, 0x9, 0x2, 0x2, 0x2, 0x27, 0x2c, 0x5, 0x6, 0x4, 0x8, 
    0x28, 0x29, 0xc, 0x6, 0x2, 0x2, 0x29, 0x2a, 0x9, 0x3, 0x2, 0x2, 0x2a, 
    0x2c, 0x5, 0x6, 0x4, 0x7, 0x2b, 0x25, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x28, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x8, 0xb, 0x17, 0x1b, 0x23, 
    0x2b, 0x2d, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MathParser::Initializer MathParser::_init;
