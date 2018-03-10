#ifndef VISITORMATH_H
#define VISITORMATH_H
#include <MathVisitor.h>
#include <QVariant>
#include <QTextEdit>

struct MathValue{
    //temp global expr val
    QVariant value;
    //stored global expr val
    std::unordered_map<std::string,QVariant> globalvars;
};

using namespace antlrtest;
class VisitorMath: public MathVisitor
{
    MathValue value;
    QVariant tmpVal;
public:
    VisitorMath();
    void setWidgetDebug(QTextEdit *out);
    virtual antlrcpp::Any visitProg(MathParser::ProgContext *context);

    virtual antlrcpp::Any visitBaseExpr(MathParser::BaseExprContext *context) ;

    virtual antlrcpp::Any visitSetVariable(MathParser::SetVariableContext *context) ;

    virtual antlrcpp::Any visitInteger(MathParser::IntegerContext *context) ;

    virtual antlrcpp::Any visitVariable(MathParser::VariableContext *context) ;

    virtual antlrcpp::Any visitAritLondo(MathParser::AritLondoContext *context) ;

    virtual antlrcpp::Any visitAritPipo(MathParser::AritPipoContext *context) ;

    virtual antlrcpp::Any visitArithBraches(MathParser::ArithBrachesContext *context) ;
private:
    QTextEdit *edit;
};

#endif // VISITORMATH_H