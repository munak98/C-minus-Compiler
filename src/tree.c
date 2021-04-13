#include "../include/tree.h"


node *Leaf(){
  node *node = malloc(sizeof(struct NODE));
  node->node_type = LEAF_NODE;
  node->sem_type = UNDEF;
  node->level = 0;
  node->child1 = NULL;
  node->child2 = NULL;
  node->child3 = NULL;
  node->child4 = NULL;
  return node;
}

node *idLeaf(sym *ref){
  node *node = Leaf();
  node->sem_type = ref->type;
  node->leaf_type = ID_LEAF;
  node->ref = ref;
  node->is_decl = 0;
  return node;
}
node *intLeaf(int ival){
  node *node = Leaf();
  node->sem_type = INT_TYPE;
  node->leaf_type = INT_LEAF;
  node->ref = NULL;
  node->is_decl = 0;
  node->ival = ival;
  return node;
}
node *floatLeaf(float fval){
  node *node = Leaf();
  node->sem_type = FLOAT_TYPE;
  node->leaf_type = FLOAT_LEAF;
  node->ref = NULL;
  node->is_decl = 0;
  node->fval = fval;
  return node;
}
node *charLeaf(char cval){
  node *node = Leaf();
  node->sem_type = CHAR_TYPE;
  node->leaf_type = CHAR_LEAF;
  node->ref = NULL;
  node->is_decl = 0;
  node->cval = cval;
  return node;
}
node *stringLeaf(char *sval){
  node *node = Leaf();
  node->sem_type = STRING_TYPE;
  node->leaf_type = STRING_LEAF;
  node->ref = NULL;
  node->is_decl = 0;
  node->sval = sval;
  return node;
}

node *setLeaf(){
  node *node = Leaf();
  node->sem_type = SET_TYPE;
  node->leaf_type = SET_LEAF;
  node->ref = NULL;
  return node;
}

node *nullLeaf(){
  return NULL;
}

node *Node(){
  node *node = malloc(sizeof(struct NODE));
  node->sem_type = UNDEF;
  node->node_type = INTERNAL_NODE;
  node->level = 0;
  return node;
}

node *UnaryNode(int op, node *child1){
  node *node = Node();
  node->operator = op;
  node->op_specifier = UNDEF;
  node->ref = NULL;
  node->child1 = child1;
  node->child2 = NULL;
  node->child3 = NULL;
  node->child4 = NULL;
  return node;
}
node *BinaryNode(int op, node *child1,  node *child2){
  node *node = Node();
  node->op_specifier = UNDEF;
  node->ref = NULL;
  node->operator = op;
  node->child1 = child1;
  node->child2 = child2;
  node->child3 = NULL;
  node->child4 = NULL;
  return node;
}
node *TernaryNode(int op, node *child1,  node *child2, node *child3){
  node *node = Node();
  node->op_specifier = UNDEF;
  node->ref = NULL;
  node->operator = op;
  node->child1 = child1;
  node->child2 = child2;
  node->child3 = child3;
  node->child4 = NULL;
  return node;
}
node *QuaternaryNode(int op, node *child1,  node *child2, node *child3, node *child4){
  node *node = Node();
  node->op_specifier = UNDEF;
  node->ref = NULL;
  node->operator = op;
  node->child1 = child1;
  node->child2 = child2;
  node->child3 = child3;
  node->child4 = child4;
  return node;
}

void setVarsType(node *node, int type){
  if (node == NULL) return;
  switch (node->node_type) {
    case INTERNAL_NODE:
      setVarsType(node->child1, type);
      setVarsType(node->child2, type);
      break;
    case LEAF_NODE:
      if (node->ref->type == UNDEF) node->ref->type = type;
      break;
  }
}

int countArgs(node *node, int count){
  if (node == NULL) return count;
  switch (node->node_type) {
    case INTERNAL_NODE:
      count += countArgs(node->child1, count);
      count += countArgs(node->child2, count);
      if (node->operator == SEQ) count++;
      break;
    case LEAF_NODE:
      return 0;
      break;
  }
  return count;
}

int setArgsInfo(sym *func_ref, node *node, int index){
  if (node == NULL) return index;
  switch (node->node_type) {
    case INTERNAL_NODE:
      index += setArgsInfo(func_ref, node->child1, index);
      index += setArgsInfo(func_ref, node->child2, index);
      break;
    case LEAF_NODE:
      func_ref->args_type[index] = node->ref->type;
      return 1;
      break;
  }
  return index;
}






void printLeafType(node *node){
  switch (node->leaf_type) {
    case ID_LEAF: printf("%s\n", node->ref->identifier); break;
    case INT_LEAF: printf("%d\n", node->ival); break;
    case FLOAT_LEAF: printf("%.2f\n", node->fval); break;
    case CHAR_LEAF: printf("%c\n", node->cval); break;
    case STRING_LEAF: printf("%s\n", node->sval); break;
    case SET_LEAF: printf("EMPTY\n"); break;
  }
}

void printOP(int op){
  switch (op) {
    case SUM: printf("+ "); break;
    case SUB: printf("- "); break;
    case MULT: printf("* "); break;
    case DIV: printf("/ "); break;
    case LT: printf("< "); break;
    case LE: printf("<= "); break;
    case EQ: printf("== "); break;
    case DIF: printf("!= "); break;
    case GT: printf("> "); break;
    case GE: printf(">= "); break;
    case ADD: printf("add "); break;
    case REM: printf("remove "); break;
    default: printf("%d ", op); break;
  }
}

void printInternalNode(node *node){
  switch (node->operator) {
    case SEQ: printf("SEQ\n"); break;
    case VARDECL: printf("VARDECL\n"); break;
    case FUNCDECL: printf("FUNCDECL\n"); break;
    case FOR1: printf("FOR1\n"); break;
    case FOR2: printf("FOR2\n"); break;
    case FORALL: printf("FORALL\n"); break;
    case IF: printf("IF\n"); break;
    case IF_ELSE: printf("IF_ELSE\n"); break;
    case ASSIGN: printf("ASSIGN (result type: %s)\n", printType(node->sem_type)); break;
    case CALL: printf("CALL\n"); break;
    case DISJ: printf("&& (result type: %s)\n", printType(node->sem_type)); break;
    case CONJ: printf("|| (result type: %s)\n", printType(node->sem_type)); break;
    case NEG: printf("! (result type: %s)\n", printType(node->sem_type)); break;
    case ARTOP1: printOP(node->op_specifier); printf("(result type: %s)\n", printType(node->sem_type)); break;
    case ARTOP2: printOP(node->op_specifier); printf("(result type: %s)\n", printType(node->sem_type));  break;
    case RELOP: printOP(node->op_specifier); printf("(result type: %s)\n", printType(node->sem_type));  break;
    case SETOP: printOP(node->op_specifier); printf("(result type: %s)\n", printType(node->sem_type));  break;
    case COMP: printOP(node->op_specifier); printf("(result type: %s)\n", printType(node->sem_type)); break;
    case IN: printf("IN (result type: %s)\n", printType(node->sem_type)); break;
    case IS_SET: printf("IS_SET (result type: %s)\n", printType(node->sem_type)); break;
    case EXISTS: printf("EXISTS (result type: %s)\n", printType(node->sem_type)); break;
    case RETURN: printf("RETURN\n"); break;
    case READ: printf("READ\n"); break;
    case WRITE: printf("WRITE\n"); break;
    case WRITELN: printf("WRITELN\n"); break;
    case ELEM_TO_INT: printf("ELEM_TO_INT\n"); break;
    case ELEM_TO_FLOAT: printf("ELEM_TO_FLOAT\n"); break;
    case INT_TO_ELEM: printf("INT_TO_ELEM\n"); break;
    case INT_TO_FLOAT: printf("INT_TO_FLOAT\n"); break;
    case FLOAT_TO_INT: printf("FLOAT_TO_INT\n"); break;
    case FLOAT_TO_ELEM: printf("FLOAT_TO_ELEM\n"); break;
  }
}

void printTree(node *tree){
  if (tree == NULL) return;
  printf("Level %d", tree->level);
  for (int i=0; i <= tree->level; i++) printf("  ");
  switch (tree->node_type) {
    case INTERNAL_NODE:
      printInternalNode(tree);
      printTree(tree->child1);
      printTree(tree->child2);
      printTree(tree->child3);
      printTree(tree->child4);
      break;

    case LEAF_NODE:
      printLeafType(tree);
      break;
  }
  return;
}

int bindLevel(node *tree, int level, int max_level){
  if (tree == NULL) return max_level;
  int subtrees[] = {0,0,0,0};
  switch (tree->node_type) {
    case INTERNAL_NODE:
      tree->level = level;
      subtrees[0] = bindLevel(tree->child1, level+1, max_level);
      subtrees[1] = bindLevel(tree->child2, level+1, max_level);
      subtrees[2] = bindLevel(tree->child3, level+1, max_level);
      subtrees[3] = bindLevel(tree->child4, level+1, max_level);
      for (int n = 0; n < 4; n++) if(subtrees[n]>max_level) max_level = subtrees[n];
      break;
    case LEAF_NODE:
      tree->level = level;
      max_level = level;
      break;
  }
  return max_level;
}



void freeTree(node *node){
  if (node == NULL) return;
  switch (node->node_type) {
    case INTERNAL_NODE:
      freeTree(node->child1);
      freeTree(node->child2);
      freeTree(node->child3);
      freeTree(node->child4);
      free(node);
      break;

    case LEAF_NODE:
      if (node->leaf_type == STRING_LEAF) free(node->sval);
      free(node);
      break;
  }
  return;
}


void freeSymbol(node *node){
  if (node == NULL) return;
  switch (node->node_type) {
    case INTERNAL_NODE:
      freeSymbol(node->child1);
      freeSymbol(node->child2);
      freeSymbol(node->child3);
      freeSymbol(node->child4);
      free(node);
      break;
    case LEAF_NODE:
      if (node->leaf_type == STRING_LEAF) free(node->sval);
      free(node);
      break;
  }
  return;
}
