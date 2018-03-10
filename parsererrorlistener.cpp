#include "parsererrorlistener.h"
#include <Exceptions.h>
#include <sstream> 
ParserErrorListener::ParserErrorListener() {}

ParserErrorListener::~ParserErrorListener() {}

void ParserErrorListener::syntaxError(Recognizer *, Token *, size_t line,
                                      size_t charPositionInLine,
                                      const std::string &msg,
                                      std::exception_ptr) {
  std::stringstream stm;
  stm << "error line " << line << ":" << charPositionInLine << " " << msg
      << std::endl;
  throw antlr4::RuntimeException(stm.str());
}

void ParserErrorListener::reportAmbiguity(Parser *, const dfa::DFA &, size_t,
                                          size_t, bool,
                                          const antlrcpp::BitSet &,
                                          atn::ATNConfigSet *) {}

void ParserErrorListener::reportAttemptingFullContext(Parser *,
                                                      const dfa::DFA &, size_t,
                                                      size_t,
                                                      const antlrcpp::BitSet &,
                                                      atn::ATNConfigSet *) {}

void ParserErrorListener::reportContextSensitivity(Parser *, const dfa::DFA &,
                                                   size_t, size_t, size_t,
                                                   atn::ATNConfigSet *) {}
