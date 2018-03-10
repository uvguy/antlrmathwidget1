#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <parsererrorlistener.h>
#include <visitormath.h>
#include <MathLexer.h>
#include <MathParser.h>
#include <QFile>
#include <Exceptions.h>

using namespace antlrtest;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_parse_clicked()
{
    antlr4::ANTLRInputStream input(ui->textEdit_inputmath->toPlainText ().toUtf8 ().constData ());
    antlrtest::MathLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    antlrtest::MathParser parser(&tokens);
    ParserErrorListener pel;
    parser.addErrorListener(&pel);
    try {
      parser.setBuildParseTree(true);
      tokens.fill(); 
      antlr4::tree::ParseTree *tree = parser.prog(); 
   
      VisitorMath v;
      v.setWidgetDebug (ui->textEdit_outputmath);
      v.visit(tree);
  
    } catch (std::exception &e) {
      ui->textEdit_outputmath->append ("\nerror: "+QString::fromStdString (e.what()));
    }
}

void MainWindow::on_pushButton_inputclear_clicked()
{
    ui->textEdit_inputmath->clear ();
}

void MainWindow::on_pushButton_clearoutput_clicked()
{
    ui->textEdit_outputmath->clear ();
}
