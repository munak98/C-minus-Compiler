#ifndef TREE
#define TREE

#include <stdlib.h>
#include <stdio.h>
#include "../include/symbtable.h"
#include "../src/syntactic.tab.h"

#define LEAF_NODE 501
#define INTERNAL_NODE 502

#define SEQ 500
#define SIMPLE_IF 503
#define IF_ELSE 504
#define FOR1 505
#define FOR2 506
#define VARDECL 513
#define FUNCDECL 514
#define CALL 515
#define ASSIGN 516

#define ELEM_TO_INT 517
#define ELEM_TO_FLOAT 518
#define INT_TO_ELEM 519
#define INT_TO_FLOAT 520
#define FLOAT_TO_INT 521
#define FLOAT_TO_ELEM 522


#define ID_LEAF 507
#define INT_LEAF 508
#define FLOAT_LEAF 509
#define CHAR_LEAF 510
#define STRING_LEAF 511
#define SET_LEAF 512

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



typedef struct ELEM {
  int curr_type;
  int ival;
  float fval;
} elem;

typedef struct NODE{
  int node_type;
  int level;
  int sem_type;

  reg *reg;
  int leaf_type;
  int is_decl;
  sym *ref;
  int ival;
  float fval;
  elem *elem;
  char *sval;

  int operator;
  int op_specifier;
  struct NODE *child1;
  struct NODE *child2;
  struct NODE *child3;
  struct NODE *child4;
} node;


node *root;

node *Leaf();
node *idLeaf(sym *ref);
node *intLeaf(int ival);
node *floatLeaf(float fval);
node *charLeaf(char *cval);
node *stringLeaf(char *sval);
node *setLeaf();
node *nullLeaf();

node *Node();
node *UnaryNode(int op, node *child1);
node *BinaryNode(int op, node *child1,  node *child2);
node *TernaryNode(int op, node *child1,  node *child2, node *child3);
node *QuaternaryNode(int op, node *child1,  node *child2, node *child3, node *child4);

void printTree(node *);
void printOP(int op);
int bindLevel(node *, int, int);

void setVarsType(node *, int);
int countArgs(node *node, int count);
int setArgsInfo(sym *func_ref, node *node, int index);

void freeTree(node *);
void freeSymbol(node *node);

#endif
