#include "../include/tokens.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//updates the column value using yyleng
void updateColumn(int yyleng){
  column += yyleng;
}

//creates a token
token *createToken(int token_class, int yylval, char *yytext, int yyleng){
  tok->name = token_class;
  tok->yylval = yylval;
  if (token_class == ID || token_class == CONST) tok->yyref = insert(yytext, yyleng, yylval, curr_scope);
  else tok->yyref = NULL;
  updateColumn(yyleng);
  return tok;
}

//prints a TYPE token based on the value of the yylval attribute
void printTYPE(int yylval){
  switch (yylval){
    case INT_TYPE: printf("<TYPE, integer > "); break;
    case FLOAT_TYPE: printf("<TYPE, float > "); break;
    case SET_TYPE: printf("<TYPE, set > "); break;
    case ELEM_TYPE: printf("<TYPE, elem > "); break;
  }
}

//prints a RELOP token based on the value of the yylval attribute
void printRELOP(int yylval){
  switch (yylval){
    case LE: printf("<RELOP, <= > "); break;
    case EQ: printf("<RELOP, == > "); break;
    case DIF: printf("<RELOP, != > "); break;
    case GT: printf("<RELOP, > > "); break;
    case GE: printf("<RELOP, >= > "); break;
  }
}

//prints a ARTOP1 token based on the value of the yylval attribute
void printARTOP1(int yylval){
  switch (yylval){
    case SUM: printf("<ARTOP1, + > "); break;
    case SUB: printf("<ARTOP1, - > "); break;
  }
}

//prints a ARTOP2 token based on the value of the yylval attribute
void printARTOP2(int yylval){
  switch (yylval){
    case MULT: printf("<ARTOP2, * > "); break;
    case DIV: printf("<ARTOP2, / > "); break;
  }
}

//prints a token based on its class (or name)
void printToken(token *tok){
    switch (tok->name){
      case TYPE: printTYPE(tok->yylval); break;
      case ID: printf("<ID, %s> ", tok->yyref->identifier); break;
      case CONST: printf("<CONST, %s> ", tok->yyref->identifier); break;
      case RELOP: printRELOP(tok->yylval); break;
      case ARTOP1: printARTOP1(tok->yylval); break;
      case ARTOP2: printARTOP2(tok->yylval); break;
      case IF:      printf("<IF> "); break;
      case ELSE:    printf("<ELSE> "); break;
      case FOR:     printf("<FOR> ");break;
      case FORALL:  printf("<FORALL> ");break;
      case IN:      printf("<IN> ");break;
      case IS_SET:  printf("<IS_SET> ");break;
      case ADD:     printf("<ADD> ");break;
      case REMOVE:  printf("<REMOVE> "); break;
      case EXISTS:  printf("<EXISTS> "); break;
      case RETURN:  printf("<RETURN> "); break;
      case READ:    printf("<READ> "); break;
      case WRITE:   printf("<WRITE> "); break;
      case WRITELN: printf("<WRITELN> "); break;
      case ASSIGN:  printf("<=> "); break;
      case RP:      printf("<)> "); break;
      case LP:      printf("<(> "); break;
      case SC:      printf("<;> "); break;
      case C:       printf("<,> "); break;
      case LB:      printf("<{> "); break;
      case RB:      printf("<}> "); break;
      case NEG:     printf("<!> "); break;
      case DISJ:    printf("<&&> "); break;
      case CONJ:    printf("<||> "); break;
    }
}
