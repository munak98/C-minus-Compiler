/* Definition Section */
%{
#include "../include/symbtable.h"
#include "../include/tree.h"
#include "../include/tac_generation.h"
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
int n_params;
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
%token <ival> TYPE RELOP COMP SETOP ARTOP1 ARTOP2
%token <sval> ID
%token IF ELSE FOR RETURN
%token FORALL IN IS_SET EXISTS DISJ CONJ NEG
%token READ WRITE WRITELN
%token <ival> INTEGER
%token <fval> FLOAT
%token <sval> STRING CHAR
%token EMPTY

%type <tnode> program declaration varDecl varList funcDecl
%type <tnode> arguments argsList funcBody stmt iterStmt body condStmt
%type <tnode> returnStmt exprStmt expression minusFactor
%type <tnode> assign inExpr outExpr  simpleExpr cond
%type <tnode> disjExpr conjExpr relExpr artExpr1 artExpr2 negExpr compExpr
%type <tnode> constant call params paramList
%type <tnode> var new_id output factor arg


%destructor {freeSymbol($$);} <tnode>
%destructor {free($$);} ID
%destructor {free($$);} STRING
%destructor {free($$);} CHAR


%right THEN ELSE

%define parse.error verbose
%define lr.type canonical-lr

%%
/* Grammar Definition */

begin         : program                                         {root = $1; checkMain();}
              ;

program       : program  declaration                            {$$ = BinaryNode(SEQ, $1, $2);}
              | error                                           {$$ = nullLeaf(); yyerrok;}
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

                arguments                 {aux->n_args = n_args; aux->args_type = (int *)calloc(n_args, sizeof(int)); setArgsInfo(aux, $4, 0);}

                '{' funcBody '}'          {$$ = BinaryNode(FUNCDECL, $4, $7); $$->ref = aux; hideScope(); curr_level-=1;}
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
              | funcBody stmt                                   {$$ = BinaryNode(SEQ, $1, $2);}
              ;

stmt          : exprStmt                                        {$$ = $1;}
              | returnStmt                                      {$$ = $1;}
              | iterStmt                                        {$$ = $1;}
              | condStmt                                        {$$ = $1;}
              ;

iterStmt      : FOR '(' exprStmt exprStmt ')' prepareScope body              {$$ = TernaryNode(FOR1, $3, $4, $7); hideScope(); curr_level -= 1;}
              | FOR '(' exprStmt exprStmt expression ')' prepareScope body   {$$ = QuaternaryNode(FOR2, $3, $4, $5, $8); hideScope(); curr_level -= 1;}
              | FORALL '(' simpleExpr ')' prepareScope   body                {$$ = BinaryNode(FORALL, $3, $6);  hideScope(); curr_level -= 1;}
              | FORALL '(' error ')'  prepareScope   body                    {$$ = BinaryNode(FORALL, nullLeaf(), $6); yyerrok;  hideScope(); curr_level -= 1;}
              | FOR '(' error ')' prepareScope   body                        {$$ = BinaryNode(FOR, nullLeaf(), $6); yyerrok;  hideScope(); curr_level -= 1;}
              ;


body          : '{' funcBody '}'                                {$$ = $2;}
              | stmt                                            {$$ = $1;}
              | varDecl                                         {$$ = $1;}
              | funcDecl                                        {$$ = $1;}
              ;


condStmt      : IF cond prepareScope  body   %prec THEN                       {$$ = BinaryNode(IF, $2, $4); hideScope(); curr_level -= 1; }
              | IF cond prepareScope
              body ELSE {hideScope(); curr_level -= 1;}  prepareScope body                          {$$ = TernaryNode(IF_ELSE, $2, $4, $8); hideScope(); curr_level -= 1;}
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

assign        : var '=' simpleExpr                              {$$ = typeCheck(ASSIGN, $1, $3);}
              ;

var           :  ID                                             {$$ = idLeaf(findDecl($1));}
              ;

inExpr        : READ '(' var ')'                                {$$ = UnaryNode(READ, $3);}
              ;

outExpr       : WRITE '(' output ')'                            {$$ = UnaryNode(WRITE, $3);}
              | WRITELN '(' output ')'                          {$$ = UnaryNode(WRITELN, $3);}
              ;

output        : simpleExpr                                      {$$ = $1;}
              | CHAR                                            {$$ = charLeaf($1);}
              | STRING                                          {$$ = stringLeaf($1);}
              ;

simpleExpr    : simpleExpr IN conjExpr                            {$$ = typeCheck(IN, $1, $3);}
              | conjExpr                                          {$$ = $1;}
              ;

conjExpr      : conjExpr CONJ disjExpr                           {$$ = typeCheck(CONJ, $1, $3);}
              | disjExpr                                         {$$ = $1;}
              ;

disjExpr      : disjExpr DISJ compExpr                          {$$ = typeCheck(DISJ, $1, $3);}
              | compExpr                                        {$$ = $1;}
              ;

compExpr      : compExpr COMP relExpr                           {$$ = typeCheck(COMP, $1, $3); $$->op_specifier = $2;}
              | relExpr                                         {$$ = $1;}
              ;

relExpr       : relExpr RELOP artExpr1                          {$$ = typeCheck(RELOP, $1, $3); $$->op_specifier = $2;}
              | artExpr1                                        {$$ = $1;}
              ;

artExpr1      : artExpr1 ARTOP1 artExpr2                        {$$ = typeCheck(ARTOP1, $1, $3); $$->op_specifier = $2;}
              | artExpr2                                        {$$ = $1;}
              ;

artExpr2      : artExpr2 ARTOP2 negExpr                          {$$ = typeCheck(ARTOP2, $1, $3); $$->op_specifier = $2;}
              | negExpr                                          {$$ = $1;}
              ;

negExpr       : NEG negExpr                                     {$$ = typeCheck(NEG, $2, NULL);}
              | minusFactor                                     {$$ = $1;}
              ;

minusFactor   : ARTOP1 factor                                   {$$ = UnaryNode(ARTOP1, $2); $$->sem_type = $2->sem_type; $$->op_specifier = $1;}
              | factor                                          {$$ = $1;}
              ;

factor        : ID                                               {$$ = idLeaf(findDecl($1));}
              | '(' simpleExpr ')'                               {$$ = $2;}
              | constant                                         {$$ = $1;}
              | call                                             {$$ = $1;}
              | IS_SET '(' factor ')'                            {$$ = typeCheck(IS_SET, $3, NULL);}
              | EXISTS '(' simpleExpr ')'                        {$$ = typeCheck(EXISTS, $3, NULL);}
              | SETOP '(' simpleExpr ')'                         {$$ = typeCheck(SETOP, $3, NULL); $$->op_specifier = $1;}
              ;

constant      : INTEGER                                         {$$ = intLeaf($1);}
              | FLOAT                                           {$$ = floatLeaf($1);}
              | EMPTY                                           {$$ = setLeaf();}
              ;

call          : var {aux = $1->ref; n_params = 0;} '(' params ')'   {$$ = BinaryNode(CALL, $1, $4); $$->sem_type = $1->sem_type;}
              ;

              ;

params        : %empty                                          {$$ = checkParam(UNDEF, aux, NULL, NULL, n_params);}
              | paramList                                       {$$ = $1;}
              ;

paramList     : paramList ',' simpleExpr                        {$$ = checkParam(SEQ, aux, $1, $3, n_params); n_params += 1; }
              | simpleExpr                                      {$$ = checkParam(UNDEF, aux, NULL, $1, n_params); n_params += 1;}
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
    init();
    tac_code = fopen("tac_code.txt", "w");
    fprintf(tac_code, ".code\n");
    code_gen(root);

    fclose(yyin);
    yylex_destroy();
    freeTables(global_scope);
    freeTree(root);

    return 0;
}
