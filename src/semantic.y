/* Definition Section */
%{
#include "../include/symbtable.h"
#include "../include/tree.h"
#include <stdio.h>
#include <stdlib.h>



void yyerror(const char *s);
extern int yylex();
extern int yylex_destroy();
extern int yyparse();
extern FILE *yyin;
extern node *root;
extern int line;
extern int column;
extern int curr_scope;
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
%type <tnode> assign inExpr outExpr output simpleExpr
%type <tnode> disjExpr negExpr relExpr artExpr1 artExpr2 var new_id
%type <tnode> factor constant call params paramList setExpr pertExpr elem set arg

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
              | TYPE error ';'                                  {$$ = nullLeaf(); yyerrok;}
              ;

varList       : varList ',' new_id                                 {$$ = BinaryNode(SEQ, $1, $3);}
              | new_id                                             {$$ = $1;}
              ;

new_id       : ID                                              {$$ = idLeaf(insert($1, curr_scope));}
              ;

funcDecl      : TYPE new_id '(' arguments ')' '{' funcBody '}'      {
                                                                        showAllTables();
                                                                        $$ = TernaryNode(FUNCDECL, $2, $4, $7);
                                                                        $$->internal->ref = $2->leaf->ref;
                                                                        $$->internal->ref->sym_kind = FUNCTION;
                                                                        $$->internal->ref->return_type = $1;
                                                                        $$->internal->ref->n_args = countArgs($4, 0);
                                                                        $$->internal->ref->args_type = malloc(sizeof(int)*$$->internal->ref->n_args);
                                                                        setArgsInfo($$->internal->ref, $4, 0);
                                                                }
              | TYPE new_id '(' error ')' '{'                       {$$ = nullLeaf(); yyerrok;}
              ;



arguments     : %empty                                          {$$ = nullLeaf();}
              | argsList                                        {$$ = $1;}
              ;

argsList      : argsList ',' arg                                {$$ = BinaryNode(SEQ, $1, $3);}
              | arg                                             {$$ = $1;}
              ;

arg           : TYPE ID                                         {
                                                                  $$ = idLeaf(insert($2, curr_scope+1));
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

iterStmt      : FOR '(' exprStmt exprStmt ')' body              {$$ = TernaryNode(FOR1, $3, $4, $6);}
              | FOR '(' exprStmt exprStmt expression ')' body   {$$ = QuaternaryNode(FOR2, $3, $4, $5, $7);}
              | FORALL '(' pertExpr ')' body                    {$$ = BinaryNode(FORALL, $3, $5);}
              | FORALL '(' error ')'                            {$$ = nullLeaf(); yyerrok;}
              | FOR '(' error ')'                               {$$ = nullLeaf(); yyerrok;}
              ;

body          : '{' funcBody '}'                                {$$ = $2;}
              | stmt                                            {$$ = $1;}
              | varDecl                                         {$$ = $1;}
              | funcDecl                                        {$$ = $1;}
              ;


condStmt      : IF '(' expression ')' body   %prec THEN         {$$ = BinaryNode(IF, $3, $5);}
              | IF '(' expression ')' body ELSE body            {$$ = TernaryNode(IF_ELSE, $3, $5, $7);}
              ;

returnStmt    : RETURN exprStmt                                 {$$ = UnaryNode(RETURN, $2);}

exprStmt      : expression ';'                                  {$$ = $1;}
              | ';'                                             {$$ = nullLeaf();}
              | error ';'                                       {$$ = nullLeaf(); yyerrok;}
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
                                                                  sym *ref = findRef($1);

                                                                  if (ref == NULL) {printf("%s\n", $1); $$ = idLeaf(insert($1, curr_scope));}
                                                                  else {$$ = idLeaf(ref), free($1);};
                                                                }
              ;

inExpr        : READ '(' var ')'                                {$$ = UnaryNode(READ, $3);}
              ;

outExpr       : WRITE '(' output ')'                            {$$ = UnaryNode(WRITE, $3);}
              | WRITELN '(' output ')'                          {$$ = UnaryNode(WRITELN, $3);}
              ;

output        : ID                                              {
                                                                  sym *ref = findRef($1);
                                                                  if (ref == NULL) $$ = idLeaf(insert($1, curr_scope));
                                                                  else {$$ = idLeaf(ref); free($1);}
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

factor        : ID                                              {
                                                                  sym *ref = findRef($1);
                                                                  if (ref == NULL) $$ = idLeaf(insert($1, curr_scope));
                                                                  else {$$ = idLeaf(ref); free($1);}
                                                                }
              | '(' simpleExpr ')'                              {$$ = $2;}
              | constant                                        {$$ = $1;}
              | call                                            {$$ = $1;}
              | IS_SET '(' var ')'                              {$$ = UnaryNode(IS_SET, $3);}
              | pertExpr                                        {$$ = $1;}
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
              | EXISTS '(' pertExpr ')'                         {$$ = UnaryNode(EXISTS, $3);}
              ;


elem          : ID                                              {
                                                                  sym *ref = findRef($1);
                                                                  if (ref == NULL) $$ = idLeaf(insert($1, curr_scope));
                                                                  else {$$ = idLeaf(ref); free($1);}
                                                                }
              | '(' setExpr ')'                                 {$$ = $2;}
              | call                                            {$$ = $1;}
              | '(' simpleExpr ')'                              {$$ = $2;}
              | constant                                        {$$ = $1;}
              ;


set           : ID                                              {
                                                                  sym *ref = findRef($1);
                                                                  if (ref == NULL) $$ = idLeaf(insert($1, curr_scope));
                                                                  else {$$ = idLeaf(ref); free($1);}
                                                                }
              | SETOP '(' pertExpr ')'                          {$$ = UnaryNode(SETOP, $3);  $$->internal->op_specifier = $1;}
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
