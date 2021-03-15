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

"\n"        {printf("%s", yytext); line++; column = 0;}
{ws}        {printf("%s", yytext); column += yyleng;}
"//".*      {column += yyleng;}

int         {yylval.ival = INT_TYPE; column += yyleng; printf("%s\n", yytext);return(TYPE);}
float       {yylval.ival = FLOAT_TYPE; column += yyleng; printf("%s\n", yytext); return(TYPE);}
set         {yylval.ival = SET_TYPE; column += yyleng; printf("%s\n", yytext); return(TYPE);}
elem        {yylval.ival = ELEM_TYPE; column += yyleng; printf("%s\n", yytext); return(TYPE);}

if          {column += yyleng; printf("%s\n", yytext); return(IF);}
else        {column += yyleng; printf("%s\n", yytext); return(ELSE);}
for         {column += yyleng; printf("%s\n", yytext); return(FOR);}
forall      {column += yyleng; printf("%s\n", yytext); return(FORALL);}
in          {column += yyleng; printf("%s\n", yytext); return(IN);}
is_set      {column += yyleng; printf("%s\n", yytext); return(IS_SET);}
add         {column += yyleng; yylval.ival = ADD; printf("%s\n", yytext); return(SETOP);}
remove      {column += yyleng; yylval.ival = REM; printf("%s\n", yytext); return(SETOP);}
exists      {column += yyleng; printf("%s\n", yytext); return(EXISTS);}
return      {column += yyleng; printf("%s\n", yytext); return(RETURN);}
read        {column += yyleng; printf("%s\n", yytext); return(READ);}
write       {column += yyleng; printf("%s\n", yytext); return(WRITE);}
writeln     {column += yyleng; printf("%s\n", yytext); return(WRITELN);}


"="         {column += yyleng; printf("%s\n", yytext); return(yytext[0]);}
"<"         {yylval.ival = LT; column += yyleng; printf("%s\n", yytext); return(RELOP);}
"<="        {yylval.ival = LE; column += yyleng; printf("%s\n", yytext); return(RELOP);}
"=="        {yylval.ival = EQ; column += yyleng; printf("%s\n", yytext); return(RELOP);}
"!="        {yylval.ival = DIF; column += yyleng; printf("%s\n", yytext); return(RELOP);}
">"         {yylval.ival = GT; column += yyleng; printf("%s\n", yytext); return(RELOP);}
">="        {yylval.ival = GE; column += yyleng; printf("%s\n", yytext); return(RELOP);}
")"         {column += yyleng; printf("%s\n", yytext); return(yytext[0]);}
"("         {column += yyleng; printf("%s\n", yytext); return(yytext[0]);}
";"         {column += yyleng; printf("%s\n", yytext); return(yytext[0]);}
","         {column += yyleng; printf("%s\n", yytext); return(yytext[0]);}
"{"         {column += yyleng; printf("%s\n", yytext); curr_scope += 1; return(yytext[0]);}
"}"         {column += yyleng; printf("%s\n", yytext); curr_scope -= 1; return(yytext[0]);}
"+"         {column += yyleng; yylval.ival = SUM; printf("%s\n", yytext); return(ARTOP1);}
"-"         {column += yyleng; yylval.ival = SUB; printf("%s\n", yytext); return(ARTOP1);}
"*"         {column += yyleng; yylval.ival = MULT; printf("%s\n", yytext); return(ARTOP2);}
"/"         {column += yyleng; yylval.ival = DIV; printf("%s\n", yytext); return(ARTOP2);}
"!"         {column += yyleng; yylval.ival = NEG; printf("%s\n", yytext); return(NEG);}
"&&"        {column += yyleng; yylval.ival = DISJ; printf("%s\n", yytext); return(DISJ);}
"||"        {column += yyleng; yylval.ival = CONJ; printf("%s\n", yytext); return(CONJ);}

EMPTY       {column += yyleng; printf("%s\n", yytext); return(EMPTY);}
{id}        {yylval.yyref = insert(yytext, yyleng, UNDEF, curr_scope); column += yyleng; printf("%s\n", yytext); return(ID);}
{integer}   {yylval.ival = atoi(yytext); column += yyleng; printf("%s\n", yytext); return(INTEGER);}
{float}     {yylval.ival = atof(yytext); column += yyleng; printf("%s\n", yytext); return(FLOAT);}
{string}    {yylval.sval = strdup(yytext); column += yyleng; printf("%s\n", yytext); return(STRING);}
{char}      {yylval.cval = yytext[0]; column += yyleng; printf("%s\n", yytext); return(CHAR);}

.           {printf("\t[error (line %d, column %d) Unknown character \"%s\"] ", line, column, yytext); }
%%
