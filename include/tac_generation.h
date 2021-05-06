#ifndef TAC
#define TAC

#include "../include/semantic.h"

reg *regs;
int label_count;
void code_gen(node *);
void init();
void writeGlobals(table *);
FILE *tac_code;

#endif
