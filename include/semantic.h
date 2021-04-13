#ifndef SEMANTIC
#define SEMANTIC

#include "../include/symbtable.h"
#include "../include/tree.h"



sym *findDecl(char *name);
sym *declare(char *name, int type, int kind);
node *checkParam(int op, sym *ref, node *arg1, node *arg2, int n_params);
void checkMain();

node *typeCheck(int type_op, node * type1, node * type2);
void hideScope();

#endif
