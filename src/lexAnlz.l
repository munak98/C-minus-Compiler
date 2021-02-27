/* Definition Section */

%option nounput
%option noinput
%option noyywrap


%{
#include "../include/tokens.h"

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
{ws}        {printf("%s", yytext); updateColumn(yyleng);}
"//".*      {updateColumn(yyleng);}

int         {printToken(createToken(TYPE, INT_TYPE, yytext, yyleng));}
float       {printToken(createToken(TYPE, FLOAT_TYPE, yytext, yyleng));}
set         {printToken(createToken(TYPE, SET_TYPE, yytext, yyleng));}
elem        {printToken(createToken(TYPE, ELEM_TYPE, yytext, yyleng));}

if          {printToken(createToken(IF, UNDEF, yytext, yyleng));}
else        {printToken(createToken(ELSE, UNDEF, yytext, yyleng));}
for         {printToken(createToken(FOR, UNDEF, yytext, yyleng));}
forall      {printToken(createToken(FORALL, UNDEF, yytext, yyleng));}
in          {printToken(createToken(IN, UNDEF, yytext, yyleng));}
is_set      {printToken(createToken(IS_SET, UNDEF, yytext, yyleng));}
add         {printToken(createToken(ADD, UNDEF, yytext, yyleng));}
remove      {printToken(createToken(REMOVE, UNDEF, yytext, yyleng));}
exists      {printToken(createToken(EXISTS, UNDEF, yytext, yyleng));}
return      {printToken(createToken(RETURN, UNDEF, yytext, yyleng));}
read        {printToken(createToken(READ, UNDEF, yytext, yyleng));}
write       {printToken(createToken(WRITE, UNDEF, yytext, yyleng));}
writeln     {printToken(createToken(WRITELN, UNDEF, yytext, yyleng));}


"="         {printToken(createToken(ASSIGN, UNDEF, yytext, yyleng));}
"<"         {printToken(createToken(RELOP, LT, yytext, yyleng));}
"<="        {printToken(createToken(RELOP, LE, yytext, yyleng));}
"=="        {printToken(createToken(RELOP, EQ, yytext, yyleng));}
"!="        {printToken(createToken(RELOP, DIF, yytext, yyleng));}
">"         {printToken(createToken(RELOP, GT, yytext, yyleng));}
">="        {printToken(createToken(RELOP, GE, yytext, yyleng));}
")"         {printToken(createToken(RP, UNDEF, yytext, yyleng));}
"("         {printToken(createToken(LP, UNDEF, yytext, yyleng));}
";"         {printToken(createToken(SC, UNDEF, yytext, yyleng));}
","         {printToken(createToken(C, UNDEF, yytext, yyleng));}
"{"         {printToken(createToken(LB, UNDEF, yytext, yyleng)); curr_scope += 1;}
"}"         {printToken(createToken(RB, UNDEF, yytext, yyleng)); curr_scope -= 1;}
"+"         {printToken(createToken(ARTOP1, SUM, yytext, yyleng));}
"-"         {printToken(createToken(ARTOP1, SUB, yytext, yyleng));}
"*"         {printToken(createToken(ARTOP2, MULT, yytext, yyleng));}
"/"         {printToken(createToken(ARTOP2, DIV, yytext, yyleng));}
"!"         {printToken(createToken(NEG, UNDEF, yytext, yyleng));}
"&&"        {printToken(createToken(DISJ, UNDEF, yytext, yyleng));}
"||"        {printToken(createToken(CONJ, UNDEF, yytext, yyleng));}

EMPTY       {printToken(createToken(CONST, CONST_SET_TYPE, yytext, yyleng));}
{id}        {printToken(createToken(ID, UNDEF, yytext, yyleng));}
{integer}   {printToken(createToken(CONST, CONST_INT_TYPE, yytext, yyleng));}
{float}     {printToken(createToken(CONST, CONST_FLOAT_TYPE, yytext, yyleng));}
{string}    {printToken(createToken(CONST, STR_TYPE, yytext, yyleng));}
{char}      {printToken(createToken(CONST, CHAR_TYPE, yytext, yyleng));}

.           {printf("\t[error (line %d, column %d) Unknown character \"%s\"] ", line, column, yytext); }
%%


/* Functions Section */


int main(int argc, char *argv[]){
    FILE *fp;
    if (argc > 1){
      fp = fopen(argv[1],"r");
      if (fp == NULL) {printf("File not found.\n"); exit(-1);}
      yyin = fp;
    }
    else {printf("No input file.\n"); exit(-1);}

    line = 1;
    column = 1;
    tok = (token *)malloc(sizeof(token));
    initTablesList();
    yylex();

    fclose(yyin);
    yylex_destroy();
    freeTables();
    free(tok);

    return 0;
}
