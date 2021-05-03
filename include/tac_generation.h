#ifndef TAC
#define TAC

#include "../include/semantic.h"

int regs[12];
int label_count;
void code_gen(node *);
void init();
FILE *tac_code; 

#endif
