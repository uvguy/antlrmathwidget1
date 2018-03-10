grammar Math;

/** The start rule; begin parsing here. */
prog:   stat+ EOF; 

stat:   expr    ';'         # BaseExpr    
    |   ID '=' expr ';'    # SetVariable         
    ;

expr:   expr op=('*'|'/') expr    # AritPipo
    |   expr op=('+'|'-') expr   # AritLondo
    |   MIN? INT                    # Integer
    |   ID                    # Variable
    |   '(' expr ')'         # ArithBraches
    ;

ID  :   [a-zA-Z]+ ;      // match identifiers <label id="code.tour.expr.3"/>
INT :  [0-9]+ ;         // match integers
MIN : '-' ;
WS : [ \t\r\n] + -> skip ;
