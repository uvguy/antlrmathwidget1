#include "visitormath.h" 

VisitorMath::VisitorMath() :edit(nullptr){}

void VisitorMath::setWidgetDebug(QTextEdit *out)
{
    edit=out;
}

antlrcpp::Any VisitorMath::visitProg(MathParser::ProgContext *context) {
  for (auto m : context->stat()) {
    visit(m);
  }
  QString msg;
  msg.append(QObject::tr("\nresult %1").arg (value.value.toString()));
  for (const std::pair<std::string, QVariant> &vars : value.globalvars) {  
    msg.append(QObject::tr("\nglobal id %1 it's val is %2").arg (QString::fromStdString (vars.first)).arg (vars.second.toString()));
  }
  
  edit->append (msg) ;
  return nullptr;
}

antlrcpp::Any VisitorMath::visitBaseExpr(MathParser::BaseExprContext *context) {
  visit(context->expr());
  return nullptr;
}

antlrcpp::Any VisitorMath::visitSetVariable(
    MathParser::SetVariableContext *context) {
  visit(context->expr());
  value.globalvars[context->ID()->getText()] = value.value;
  return nullptr;
}

antlrcpp::Any VisitorMath::visitInteger(MathParser::IntegerContext *context) {
  
  auto str = QString::fromStdString(context->INT()->getText());  
  tmpVal = context->MIN () ? -str.toInt (): str.toInt();
  return nullptr;
}

antlrcpp::Any VisitorMath::visitVariable(MathParser::VariableContext *context) {
  auto s = value.globalvars.find(context->ID()->getText());
  if (s != value.globalvars.end()) {
    tmpVal = s->second;
  } else {
      QString msg;
      msg.append (QObject::tr ("\nwarning not found id var %1").arg (context->ID()->getText().c_str()));
      edit->append (msg) ;
  }
  return nullptr;
}

antlrcpp::Any VisitorMath::visitAritLondo(
    MathParser::AritLondoContext *context) {
  visit(context->expr().at(0));
  auto left = tmpVal.toInt();
  visit(context->expr().at(1));
  auto right = tmpVal.toInt();
  if (context->op->getText() == "+") {
    auto ret = (int)left + right;
    value.value=ret;
    tmpVal=ret;
  } else {  
    auto ret = (int)left - right;
    value.value=ret;
    tmpVal=ret;
  }
  return nullptr;
}

antlrcpp::Any VisitorMath::visitAritPipo(MathParser::AritPipoContext *context) {
  visit(context->expr().at(0));
  auto left = tmpVal.toInt();
  visit(context->expr().at(1));
  auto right = tmpVal.toInt();
  if (context->op->getText() == "*") {
    auto ret = (int)left * right;
    value.value=ret;
    tmpVal=ret;
  } else {
    if (right == 0) {
        QString msg;
        msg.append (QObject::tr ("\ncannot divide by 0!"));
        edit->append (msg);
      return nullptr;
    }
    auto ret = (int)left / right;
    value.value=ret;
    tmpVal=ret;
  }
  return nullptr;
}

antlrcpp::Any VisitorMath::visitArithBraches(
    MathParser::ArithBrachesContext *context) {
  visit(context->expr());
  return nullptr;
}
