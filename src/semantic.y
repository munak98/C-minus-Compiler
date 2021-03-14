/* Definition Section */
%{
#include "../include/symbtable.h"
#include <stdio.h>
#include <stdlib.h>
#include "../include/tree.h"

void yyerror(char *s);
extern int yylex();
extern int yylex_destroy();
extern int yyparse();
extern FILE *yyin;
%}

%union {
  sym *yyref;
  int ival;
  float fval;
  char cval;
  char* sval;
  node *tval;
}

%start program
%token <ival> TYPE
%token <yyref> ID
%token <ival> RELOP
%token IF ELSE FOR RETURN
%token FORALL IN IS_SET ADD REMOVE EXISTS
%token READ WRITE WRITELN
%token <ival> INTEGER
%token <fval> FLOAT
%token <cval> CHAR
%token <sval> STRING
%token EMPTY DISJ CONJ
%type <tval> program declaration varDecl funcDecl
%right THEN ELSE


%%
/* Grammar Definition */

program       : program  declaration
              {
                $$ = createNode(0, 0, $1, $2, NULL, NULL);
              }
              | declaration
              {
                node *root;
                root = createNode(0, 0, $1, NULL, NULL, NULL);
                printTree(root);
              }
              ;

declaration   : varDecl
              | funcDecl
              ;

varDecl       : TYPE varList ';'
              ;

varList       : varList ',' ID
              | ID
              ;


funcDecl      : TYPE ID '(' arguments ')' '{' funcBody '}'
              ;

arguments     :
              | argsList
              ;

argsList      : argsList ',' TYPE ID
              | TYPE ID
              ;

funcBody      :
              | funcBody varDecl
              | funcBody funcDecl
              | funcBody stmt
              ;

stmt          : exprStmt
              | returnStmt
              | iterStmt
              | condStmt
              ;

iterStmt      : FOR '(' exprStmt exprStmt ')' body
              | FOR '(' exprStmt exprStmt expression ')' body
              | FORALL '(' elem IN set ')' body
              ;

body          : '{' funcBody '}'
              | stmt
              | varDecl
              | funcDecl
              ;


condStmt      : IF '(' expression ')' body            %prec THEN
              | IF '(' expression ')' body ELSE body
              ;

returnStmt    : RETURN exprStmt

exprStmt      : expression ';'
              | ';'
              | error ';'         {printf("Expression statment error\n"); yyerrok;}
              ;

expression    : assign
              | inExpr
              | outExpr
              | simpleExpr
              | setExpr
              ;

assign        : ID '=' simpleExpr
              ;

inExpr        : READ '(' ID ')'
              ;

outExpr       : WRITE '(' output ')'
              | WRITELN '(' output ')'
              ;

output        : ID
              | CHAR
              | STRING
              ;

simpleExpr    : simpleExpr DISJ disjExpr
              | disjExpr
              ;

disjExpr      : disjExpr CONJ negExpr
              | negExpr
              ;

negExpr       : '!' negExpr
              | relExpr
              ;

relExpr       : relExpr RELOP artExpr1
              | artExpr1
              ;

artExpr1      : artExpr1 artop1 artExpr2
              | artExpr2
              ;

artop1        : '+'
              | '-'
              ;

artExpr2      : artExpr2 artop2 factor
              | factor
              ;

artop2        : '*'
              | '/'
              ;

factor        : ID
              | '(' simpleExpr ')'
              | constant
              | call
              | IS_SET '(' ID ')'
              | elem IN set
              ;

constant      : INTEGER
              | FLOAT
              | EMPTY
              ;

call          : ID '(' params ')'
              ;

params        :
              | paramList
              ;

paramList     : paramList ',' simpleExpr
              | simpleExpr
              ;

setExpr       : setOp '(' elem IN set ')'
              | EXISTS '(' elem IN set ')'
              ;

setOp         : REMOVE
              | ADD
              ;

elem          : ID
              | '(' EXISTS '(' elem IN set ')' ')'
              | call
              | '(' simpleExpr ')'
              | constant
              ;

set           : ID
              | setOp '(' elem IN set ')'
              ;



%%
void yyerror(char *s){
  printf("%s\n", s);
}


int main(int argc, char *argv[]){
    FILE *fp;
    if (argc > 1){
      fp = fopen(argv[1],"r");
      if (fp == NULL) {printf("File not found.\n"); exit(-1);}
      yyin = fp;
    }
    else {printf("No input file.\n"); exit(-1);}

    initTablesList();
    yyparse();


    fclose(yyin);
    yylex_destroy();
    freeTables();


    return 0;
}
