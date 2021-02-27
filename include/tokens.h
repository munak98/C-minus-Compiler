#ifndef TOKENS_HEADER
#define TOKENS_HEADER

#include "../include/symbtable.h"

#define RELOP 0
#define LT 1
#define LE 2
#define EQ 3
#define DIF 4
#define GT 5
#define GE 6
#define ARTOP1 7
#define SUM 8
#define SUB 9
#define ARTOP2 10
#define MULT 11
#define DIV 12
#define TERMINAL 13
#define TYPE 14
#define ID 15
#define IF 16
#define ELSE 17
#define FOR 18
#define FORALL 19
#define IN 20
#define IS_SET 21
#define ADD 22
#define REMOVE 23
#define EXISTS 24
#define RETURN 25
#define READ 26
#define WRITE 27
#define WRITELN 28
#define RP 29
#define LP 30
#define SC 31
#define C 32
#define LB 33
#define RB 34
#define NEG 35
#define DISJ 36
#define CONJ 37
#define ASSIGN 38
#define CONST 39

typedef struct TOKEN{
  int name;
  sym *yyref;
  int yylval;
} token;

token *createToken(int, int, char *, int);
void printToken(token *);
void printTYPE(int);
void printRELOP(int);
void printARTOP1(int);
void printARTOP2(int);
void printToken(token *);
void updateColumn(int);

token *tok;
int curr_scope;
int column;
int line;

#endif
