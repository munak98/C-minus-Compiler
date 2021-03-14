/* Definition Section */

%option nounput
%option noinput
%option noyywrap


%{
#include "../include/symbtable.h"
#include <string.h>
#include "y.tab.h"
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
add         {column += yyleng; printf("%s\n", yytext); return(ADD);}
remove      {column += yyleng; printf("%s\n", yytext); return(REMOVE);}
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
"+"         {column += yyleng; printf("%s\n", yytext); return(yytext[0]);}
"-"         {column += yyleng; printf("%s\n", yytext); return(yytext[0]);}
"*"         {column += yyleng; printf("%s\n", yytext); return(yytext[0]);}
"/"         {column += yyleng; printf("%s\n", yytext); return(yytext[0]);}
"!"         {column += yyleng; printf("%s\n", yytext); return(yytext[0]);}
"&&"        {column += yyleng; printf("%s\n", yytext); return(DISJ);}
"||"        {column += yyleng; printf("%s\n", yytext); return(CONJ);}

EMPTY       {column += yyleng; return(EMPTY);}
{id}        {yylval.yyref = insert(yytext, yyleng, UNDEF, curr_scope); column += yyleng; return(ID);}
{integer}   {yylval.ival = atoi(yytext); column += yyleng; return(INTEGER);}
{float}     {yylval.ival = atof(yytext); column += yyleng; return(FLOAT);}
{string}    {yylval.sval = strdup(yytext); column += yyleng; return(STRING);}
{char}      {yylval.cval = yytext[0]; column += yyleng; return(CHAR);}

.           {printf("\t[error (line %d, column %d) Unknown character \"%s\"] ", line, column, yytext); }
%%
