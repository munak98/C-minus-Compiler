#ifndef SEMANTIC
#define SEMANTIC

#include "../include/symbtable.h"
#include "../include/tree.h"

sym *findDecl(char *name);
sym *declare(char *name, int type, int kind);
int checkParamsType(sym *func_ref, node *args_tree, int index);
int checkParams(sym *func_ref, node *args_tree);

int result_type(int type_op, int type1, int type2);
void hideScope();

#endif
