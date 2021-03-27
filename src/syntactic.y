/* Definition Section */
%{
#include "../include/symbtable.h"
#include "../include/tree.h"
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
extern int curr_level;
int varType;
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
%type <tnode> disjExpr negExpr relExpr artExpr1 artExpr2
%type <tnode> constant call params paramList setExpr pertExpr
%type <tnode> var new_id output factor elem set arg


%destructor {freeSymbol($$);} <tnode>
%destructor {printf("freeing id %s\n", $$); free($$);} ID
%destructor {printf("freeing string %s\n", $$); free($$);} STRING


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

varDecl       : TYPE varList ';'                                {
                                                                  $$ = UnaryNode(VARDECL, $2);
                                                                  setVarsType($2, $1);
                                                                  insertGlobalLeafs($2);
                                                                }
              | TYPE error                                     {printf("reduziu erro com varDecl\n"); $$ = nullLeaf(); yyerrok;}
              ;

varList       : varList ',' new_id                                 {$$ = BinaryNode(SEQ, $1, $3);}
              | new_id                                             {$$ = $1;}
              ;

new_id        : ID                                                  {
                                                                      $$ = idLeaf(createNewEntry($1, curr_level));
                                                                      $$->leaf->is_decl = 1;
                                                                    }
              ;

funcDecl      : TYPE new_id arguments '{' funcBody '}'      {
                                                                        $2->leaf->ref->sym_kind = FUNCTION;
                                                                        $2->leaf->ref->return_type = $1;
                                                                        $2->leaf->ref->n_args = countArgs($3, 0);
                                                                        $2->leaf->ref->args_type = malloc(sizeof(int)*$2->leaf->ref->n_args);
                                                                        setArgsInfo($2->leaf->ref, $3, 0);

                                                                        insertInScope($2->leaf->ref, global_scope);

                                                                        $$ = TernaryNode(FUNCDECL, $2, $3, $5);
                                                                        $$->internal->ref = $2->leaf->ref;

                                                                        table *func_scope = createNewScope($2->leaf->ref->identifier);
                                                                        pushScope(func_scope);
                                                                        insertLeafs(func_scope, $3);
                                                                        insertLeafs(func_scope, $5);
                                                                    }
              ;


arguments     : '(' ')'                                         {$$ = nullLeaf();}
              | '(' argsList ')'                                {$$ = $2;}
              | '(' error ')'                                   {printf("reduziu erro com arguments\n"); $$ = nullLeaf(); yyerrok;}
              ;

argsList      : argsList ',' arg                                {$$ = BinaryNode(SEQ, $1, $3);}
              | arg                                             {$$ = $1;}
              ;

arg           : TYPE ID                                         {
                                                                  $$ = idLeaf(createNewEntry($2, curr_level+1));
                                                                  $$->leaf->is_decl = 1;
                                                                  $$->leaf->ref->sym_kind = VARIABLE;
                                                                  $$->leaf->ref->var_type = $1;
                                                                }
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

iterStmt      : FOR '(' exprStmt exprStmt ')' body                  {$$ = TernaryNode(FOR1, $3, $4, $6);}
              | FOR '(' exprStmt exprStmt expression ')' body       {$$ = QuaternaryNode(FOR2, $3, $4, $5, $7);}
              | FORALL '(' pertExpr ')' body                    {$$ = BinaryNode(FORALL, $3, $5);}
              | FORALL '(' error ')'  body                      {printf("reduced with error forall\n"); $$ = BinaryNode(FORALL, nullLeaf(), $5); yyerrok;}
              | FOR '(' error ')' body                          {printf("reduced with error for\n"); $$ = BinaryNode(FOR, nullLeaf(), $5); yyerrok;}
              ;


body          : '{' funcBody '}'                                {$$ = $2;}
              | stmt                                            {$$ = $1;}
              | varDecl                                         {$$ = $1;}
              | funcDecl                                        {$$ = $1;}
              ;


condStmt      : IF cond body   %prec THEN         {$$ = BinaryNode(IF, $2, $3);}
              | IF cond body ELSE body            {$$ = TernaryNode(IF_ELSE, $2, $3, $5);}
              ;

cond          : '(' expression ')'                {$$ = $2;}

              | '(' error ')'                     {printf("reduced with cond error \n"); $$ = nullLeaf(); yyerrok;}
              ;

returnStmt    : RETURN exprStmt                                 {$$ = UnaryNode(RETURN, $2);}


exprStmt      : expression ';'                                  {$$ = $1;}
              | error                                           {printf("reduced with exprStmt error \n"); $$ = nullLeaf(); yyerrok;}
              | ';'                                             {$$ = nullLeaf();}
              ;

expression    : assign                                          {$$ = $1;}
              | inExpr                                          {$$ = $1;}
              | outExpr                                         {$$ = $1;}
              | simpleExpr                                      {$$ = $1;}
              | setExpr                                         {$$ = $1;}
              ;

assign        : var '=' simpleExpr                              {$$ = BinaryNode(ASSIGN, $1, $3);}
              ;

var           :  ID                                              {
                                                                  $$ = idLeaf(createNewEntry($1, curr_level));
                                                                }
              ;

inExpr        : READ '(' var ')'                                {$$ = UnaryNode(READ, $3);}
              ;

outExpr       : WRITE '(' output ')'                            {$$ = UnaryNode(WRITE, $3);}
              | WRITELN '(' output ')'                          {$$ = UnaryNode(WRITELN, $3);}
              ;

output        : ID                                              {
                                                                  $$ = idLeaf(createNewEntry($1, curr_level));
                                                                }
              | CHAR                                            {$$ = charLeaf($1);}
              | STRING                                          {$$ = stringLeaf($1);}
              ;

simpleExpr    : simpleExpr DISJ disjExpr                        {$$ = BinaryNode(DISJ, $1, $3);}
              | disjExpr                                        {$$ = $1;}
              ;

disjExpr      : disjExpr CONJ negExpr                           {$$ = BinaryNode(CONJ, $1, $3);}
              | negExpr                                         {$$ = $1;}
              ;

negExpr       : NEG negExpr                                     {$$ = UnaryNode(NEG, $2);}
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

factor        : ID                                              {$$ = idLeaf(createNewEntry($1, curr_level));}
              | '(' simpleExpr ')'                              {$$ = $2;}
              | constant                                        {$$ = $1;}
              | call                                            {$$ = $1;}
              | IS_SET '(' set ')'                              {$$ = UnaryNode(IS_SET, $3);}
              | pertExpr                                        {$$ = $1;}
              | EXISTS '(' pertExpr ')'                         {$$ = UnaryNode(EXISTS, $3);}
              ;

constant      : INTEGER                                         {$$ = intLeaf($1);}
              | FLOAT                                           {$$ = floatLeaf($1);}
              | EMPTY                                           {$$ = setLeaf();}
              ;

call          : var '(' params ')'                              {$$ = BinaryNode(CALL, $1, $3);}
              ;

              ;

params        : %empty                                          {$$ = nullLeaf();}
              | paramList                                       {$$ = $1;}
              ;

paramList     : paramList ',' simpleExpr                        {$$ = BinaryNode(SEQ, $1, $3);}
              | simpleExpr                                      {$$ = $1;}
              ;

pertExpr      : elem IN set                                     {$$ = BinaryNode(IN, $1, $3);}
              ;

setExpr       : SETOP '(' pertExpr ')'                          {$$ = UnaryNode(SETOP, $3);  $$->internal->op_specifier = $1;}
              ;


elem          : ID                                              {
                                                                  $$ = idLeaf(createNewEntry($1, curr_level));
                                                                }
              | EXISTS '(' pertExpr ')'                         {$$ = UnaryNode(EXISTS, $3);}
              | call                                            {$$ = $1;}
              | '(' simpleExpr ')'                              {$$ = $2;}
              | constant                                        {$$ = $1;}
              ;


set           : ID                                              {
                                                                  $$ = idLeaf(createNewEntry($1, curr_level));
                                                                }
              | setExpr                                         {$$ = $1;}
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
    initTablesList();
    yyparse();

    bindLevel(root, 0, 0);
    printTree(root);
    showAllTables();

    fclose(yyin);
    yylex_destroy();
    freeTables();
    freeTree(root);

    return 0;
}
