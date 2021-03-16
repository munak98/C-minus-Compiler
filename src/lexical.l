/* Definition Section */

%option nounput
%option noinput
%option noyywrap


%{
#include "../include/symbtable.h"
#include <string.h>
#include "semantic.tab.h"
#define LT 1
#define LE 2
#define EQ 3
#define DIF 4
#define GT 5
#define GE 6
#define SUM 7
#define SUB 8
#define MULT 9
#define DIV 10
#define REM 11
#define ADD 12
#define CONJ 13
#define DISJ 13
#define NEG 15


int curr_scope;
int column = 1;
int line = 1;
%}

delim         [ \t]
ws            {delim}+
letter        [A-Za-z]
digit         [0-9]
alphanumeric  {letter}|{digit}
id            {letter}({alphanumeric}|_)*
integer       {digit}+((E|e)[+-]?{digit}+)?
float         {digit}+\.{digit}+((E|e)[+-]?{digit}+)?
string        \"([^(\"\')])*\"
char          \'([^(\'\"])*\'

/* Rule Section */
%%

"\n"        {line++; column = 0;}
{ws}        {column += yyleng;}
"//".*      {column += yyleng;}

int         {yylval.ival = INT_TYPE; column += yyleng;return(TYPE);}
float       {yylval.ival = FLOAT_TYPE; column += yyleng; return(TYPE);}
set         {yylval.ival = SET_TYPE; column += yyleng; return(TYPE);}
elem        {yylval.ival = ELEM_TYPE; column += yyleng; return(TYPE);}

if          {column += yyleng; return(IF);}
else        {column += yyleng; return(ELSE);}
for         {column += yyleng; return(FOR);}
forall      {column += yyleng; return(FORALL);}
in          {column += yyleng; return(IN);}
is_set      {column += yyleng; return(IS_SET);}
add         {column += yyleng; yylval.ival = ADD; return(SETOP);}
remove      {column += yyleng; yylval.ival = REM; return(SETOP);}
exists      {column += yyleng; return(EXISTS);}
return      {column += yyleng; return(RETURN);}
read        {column += yyleng; return(READ);}
write       {column += yyleng; return(WRITE);}
writeln     {column += yyleng; return(WRITELN);}


"="         {column += yyleng; return(yytext[0]);}
"<"         {yylval.ival = LT; column += yyleng; return(RELOP);}
"<="        {yylval.ival = LE; column += yyleng; return(RELOP);}
"=="        {yylval.ival = EQ; column += yyleng; return(RELOP);}
"!="        {yylval.ival = DIF; column += yyleng; return(RELOP);}
">"         {yylval.ival = GT; column += yyleng; return(RELOP);}
">="        {yylval.ival = GE; column += yyleng; return(RELOP);}
")"         {column += yyleng; return(yytext[0]);}
"("         {column += yyleng; return(yytext[0]);}
";"         {column += yyleng; return(yytext[0]);}
","         {column += yyleng; return(yytext[0]);}
"{"         {column += yyleng; curr_scope += 1; return(yytext[0]);}
"}"         {column += yyleng; curr_scope -= 1; return(yytext[0]);}
"+"         {column += yyleng; yylval.ival = SUM; return(ARTOP1);}
"-"         {column += yyleng; yylval.ival = SUB; return(ARTOP1);}
"*"         {column += yyleng; yylval.ival = MULT; return(ARTOP2);}
"/"         {column += yyleng; yylval.ival = DIV; return(ARTOP2);}
"!"         {column += yyleng; yylval.ival = NEG; return(NEG);}
"&&"        {column += yyleng; yylval.ival = DISJ; return(DISJ);}
"||"        {column += yyleng; yylval.ival = CONJ; return(CONJ);}

EMPTY       {column += yyleng; return(EMPTY);}
{id}        {yylval.yyref = insert(yytext, yyleng, curr_scope); column += yyleng; return(ID);}
{integer}   {yylval.ival = atoi(yytext); column += yyleng; return(INTEGER);}
{float}     {yylval.ival = atof(yytext); column += yyleng; return(FLOAT);}
{string}    {yylval.sval = strdup(yytext); column += yyleng; return(STRING);}
{char}      {yylval.cval = yytext[0]; column += yyleng; return(CHAR);}

.           {printf("(line %d, column %d) [lexical error, unknown character \"%s\"]\n", line, column, yytext); }
%%