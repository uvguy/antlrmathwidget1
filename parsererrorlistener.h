#ifndef PARSERERRORLISTENER_H
#define PARSERERRORLISTENER_H

#include <ANTLRErrorListener.h>
using namespace antlr4 ;

class ParserErrorListener:public  ANTLRErrorListener 
{
public:
    ParserErrorListener();
    ~ParserErrorListener();
    virtual void syntaxError(Recognizer *, Token *, size_t line,
                             size_t charPositionInLine, const std::string &msg, std::exception_ptr) ;
    virtual void reportAmbiguity(Parser *, const dfa::DFA &, size_t, size_t, bool, const antlrcpp::BitSet &, atn::ATNConfigSet *) ;
    
    virtual void reportAttemptingFullContext(Parser * , const dfa::DFA & , size_t  , size_t  ,
      const antlrcpp::BitSet & , atn::ATNConfigSet * ) ;
    
    virtual void reportContextSensitivity(Parser * , const dfa::DFA & , size_t  , size_t  ,
      size_t  , atn::ATNConfigSet * );
};

#endif // PARSERERRORLISTENER_H