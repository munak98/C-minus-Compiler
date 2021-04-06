/* Definition Section */
%{
#include "../include/symbtable.h"
#include "../include/tree.h"
#include "../include/semantic.h"
#include <stdio.h>
#include <stdlib.h>
#include "string.h"

void yyerror(const char *s);
extern int yylex();
extern int yylex_destroy();
extern int yyparse();
extern FILE *yyin;
extern node *root;
extern int line;
extern int column;
int curr_level = 0;
int n_args;
sym *aux;
%}


%union {
  int ival;
  float fval;
  char cval;
  char* sval;
  struct NODE *tnode;
}

%start begin
%token <ival> TYPE RELOP SETOP ARTOP1 ARTOP2
%token <sval> ID
%token IF ELSE FOR RETURN
%token FORALL IN IS_SET EXISTS DISJ CONJ NEG
%token READ WRITE WRITELN
%token <ival> INTEGER
%token <fval> FLOAT
%token <cval> CHAR
%token <sval> STRING
%token EMPTY

%type <tnode> program declaration varDecl varList funcDecl
%type <tnode> arguments argsList funcBody stmt iterStmt body condStmt
%type <tnode> returnStmt exprStmt expression
%type <tnode> assign inExpr outExpr  simpleExpr cond
%type <tnode> disjExpr conjExpr relExpr artExpr1 artExpr2 negExpr
%type <tnode> constant call params paramList
%type <tnode> var new_id output factor arg


%destructor {freeSymbol($$);} <tnode>
%destructor {free($$);} ID
%destructor {free($$);} STRING


%right THEN ELSE

%define parse.error verbose
%define lr.type canonical-lr

%%
/* Grammar Definition */

begin         : program                                         {root = $1;}
              ;

program       : program  declaration                            {$$ = BinaryNode(SEQ, $1, $2);}
              | %empty                                          {$$ = nullLeaf();}
              ;

declaration   : varDecl                                         {$$ = $1;}
              | funcDecl                                        {$$ = $1;}
              ;

varDecl       : TYPE varList ';'                                {$$ = UnaryNode(VARDECL, $2); setVarsType($2, $1);}
              | TYPE error                                      {$$ = nullLeaf(); yyerrok;}
              ;


varList       : varList ',' new_id                              {$$ = BinaryNode(SEQ, $1, $3);}
              | new_id                                          {$$ = $1;}
              ;

new_id        : ID                                              {$$ = idLeaf(declare($1, UNDEF, VARIABLE));}
              ;

funcDecl      : TYPE ID { aux = declare($2, $1, FUNCTION);
                          pushScope(newScope($2, curr_level+1));
                          n_args = 0;
                          curr_level += 1;}

                arguments                 {aux->n_args = n_args; aux->args_type = malloc(sizeof(int)*n_args); setArgsInfo(aux, $4, 0);}

                '{' funcBody '}'          {$$ = BinaryNode(FUNCDECL, $4, $7); $$->internal->ref = aux; hideScope(); curr_level-=1;}
              ;


arguments     : '(' ')'                                         {$$ = nullLeaf();}
              | '(' argsList ')'                                {$$ = $2;}
              | '(' error ')'                                   {$$ = nullLeaf(); yyerrok;}
              ;

argsList      : argsList ',' arg                                {$$ = BinaryNode(SEQ, $1, $3);}
              | arg                                             {$$ = $1;}
              ;

arg           : TYPE ID                                         { n_args += 1;
                                                                  $$ = idLeaf(declare($2, $1, VARIABLE)); }
              ;

funcBody      : %empty                                          {$$ = nullLeaf();}
              | funcBody varDecl                                {$$ = BinaryNode(SEQ, $1, $2);}
              | funcBody funcDecl                               {$$ = BinaryNode(SEQ, $1, $2);}
              | funcBody stmt                                   {$$ = BinaryNode(SEQ, $1, $2);}
              ;

stmt          : exprStmt                                        {$$ = $1;}
              | returnStmt                                      {$$ = $1;}
              | iterStmt                                        {$$ = $1;}
              | condStmt                                        {$$ = $1;}
              ;

iterStmt      : FOR '(' exprStmt exprStmt ')' prepareScope body              {$$ = TernaryNode(FOR1, $3, $4, $7); hideScope(); curr_level -= 1;}
              | FOR '(' exprStmt exprStmt expression ')' prepareScope body   {$$ = QuaternaryNode(FOR2, $3, $4, $5, $8);  hideScope(); curr_level -= 1;}
              | FORALL '(' simpleExpr ')' prepareScope   body                {$$ = BinaryNode(FORALL, $3, $6);  hideScope(); curr_level -= 1;}
              | FORALL '(' error ')'  prepareScope   body                    {$$ = BinaryNode(FORALL, nullLeaf(), $6); yyerrok;  hideScope(); curr_level -= 1;}
              | FOR '(' error ')' prepareScope   body                        {$$ = BinaryNode(FOR, nullLeaf(), $6); yyerrok;  hideScope(); curr_level -= 1;}
              ;


body          : '{' funcBody '}'                                {$$ = $2;}
              | stmt                                            {$$ = $1;}
              | varDecl                                         {$$ = $1;}
              | funcDecl                                        {$$ = $1;}
              ;


condStmt      : IF cond prepareScope  body   %prec THEN                       {$$ = BinaryNode(IF, $2, $4); hideScope(); curr_level -= 1;}
              | IF cond prepareScope
              body ELSE {hideScope(); curr_level -= 1;}  body                          {$$ = TernaryNode(IF_ELSE, $2, $4, $7); hideScope(); curr_level -= 1;}
              ;

prepareScope : %empty {curr_level += 1; pushScope(newScope(curr_scope->name, curr_level));}
             ;

cond          : '(' expression ')'                              {$$ = $2;}
              | '(' error ')'                                   {$$ = nullLeaf(); yyerrok;}
              ;

returnStmt    : RETURN exprStmt                                 {$$ = UnaryNode(RETURN, $2);}


exprStmt      : expression ';'                                  {$$ = $1;}
              | error                                           {$$ = nullLeaf(); yyerrok;}
              | ';'                                             {$$ = nullLeaf();}
              ;

expression    : assign                                          {$$ = $1;}
              | inExpr                                          {$$ = $1;}
              | outExpr                                         {$$ = $1;}
              | simpleExpr                                      {$$ = $1;}
              ;

assign        : var '=' simpleExpr                              {$$ = BinaryNode(ASSIGN, $1, $3);}
              ;

var           :  ID                                             {$$ = idLeaf(findDecl($1)); free($1);}
              ;

inExpr        : READ '(' var ')'                                {$$ = UnaryNode(READ, $3);}
              ;

outExpr       : WRITE '(' output ')'                            {$$ = UnaryNode(WRITE, $3);}
              | WRITELN '(' output ')'                          {$$ = UnaryNode(WRITELN, $3);}
              ;

output        : var                                             {$$ = $1;}
              | CHAR                                            {$$ = charLeaf($1);}
              | STRING                                          {$$ = stringLeaf($1);}
              ;

simpleExpr    : simpleExpr IN negExpr                            {$$ = BinaryNode(IN, $1, $3);}
              | negExpr                                          {$$ = $1;}
              ;

negExpr       : NEG negExpr                                     {$$ = UnaryNode(NEG, $2);}
              | disjExpr                                        {$$ = $1;}
              ;

disjExpr      : disjExpr DISJ conjExpr                          {$$ = BinaryNode(DISJ, $1, $3);}
              | conjExpr                                        {$$ = $1;}
              ;

conjExpr      : conjExpr CONJ relExpr                           {$$ = BinaryNode(CONJ, $1, $3);}
              | relExpr                                         {$$ = $1;}
              ;

relExpr       : relExpr RELOP artExpr1                          {$$ = BinaryNode(RELOP, $1, $3); $$->internal->op_specifier = $2;}
              | artExpr1                                        {$$ = $1;}
              ;

artExpr1      : artExpr1 ARTOP1 artExpr2                        {$$ = BinaryNode(ARTOP1, $1, $3); $$->internal->op_specifier = $2;}
              | artExpr2                                        {$$ = $1;}
              ;

artExpr2      : artExpr2 ARTOP2 factor                          {$$ = BinaryNode(ARTOP2, $1, $3); $$->internal->op_specifier = $2;}
              | factor                                          {$$ = $1;}
              ;



factor        : ID                                               {$$ = idLeaf(findDecl($1)); free($1);}
              | '(' simpleExpr ')'                               {$$ = $2;}
              | constant                                         {$$ = $1;}
              | call                                             {$$ = $1;}
              | IS_SET '(' factor ')'                            {$$ = UnaryNode(IS_SET, $3);}
              | EXISTS '(' simpleExpr ')'                        {$$ = UnaryNode(EXISTS, $3);}
              | SETOP '(' simpleExpr ')'                         {$$ = UnaryNode(SETOP, $3);  $$->internal->op_specifier = $1;}
              ;

constant      : INTEGER                                         {$$ = intLeaf($1);}
              | FLOAT                                           {$$ = floatLeaf($1);}
              | EMPTY                                           {$$ = setLeaf();}
              ;

call          : var '(' params ')'                              {checkParams($1->leaf->ref, $3); $$ = BinaryNode(CALL, $1, $3);}
              ;

              ;

params        : %empty                                          {$$ = nullLeaf();}
              | paramList                                       {$$ = $1;}
              ;

paramList     : paramList ',' simpleExpr                        {$$ = BinaryNode(SEQ, $1, $3);}
              | simpleExpr                                      {$$ = $1;}
              ;



%%
void yyerror(const char *s){
  printf("(line %d, column %d) [%s]\n", line, column, s);
}


int main(int argc, char *argv[]){
    FILE *fp;
    if (argc > 1){
      fp = fopen(argv[1],"r");
      if (fp == NULL) {printf("File not found.\n"); exit(-1);}
      yyin = fp;
    }
    else {printf("No input file.\n"); exit(-1);}
    initScopesList();
    yyparse();

    bindLevel(root, 0, 0);
    printTree(root);
    showTables(global_scope);

    fclose(yyin);
    yylex_destroy();
    freeTables(global_scope);
    freeTree(root);

    return 0;
}
