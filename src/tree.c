#include "../include/tree.h"
#include "semantic.tab.h"

node *Leaf(){
  node *node = malloc(sizeof(struct NODE));
  node->node_type = LEAF_NODE;
  node->level = 0;
  node->leaf = malloc(sizeof(struct LEAF));
  node->internal = NULL;
  return node;
}

node *idLeaf(sym *ref){
  node *node = Leaf();
  node->leaf->leaf_type = ID_LEAF;
  node->leaf->ref = ref;
  return node;
}
node *intLeaf(int ival){
  node *node = Leaf();
  node->leaf->leaf_type = INT_LEAF;
  node->leaf->ival = ival;
  return node;
}
node *floatLeaf(float fval){
  node *node = Leaf();
  node->leaf->leaf_type = FLOAT_LEAF;
  node->leaf->fval = fval;
  return node;
}
node *charLeaf(char cval){
  node *node = Leaf();
  node->leaf->leaf_type = CHAR_LEAF;
  node->leaf->cval = cval;
  return node;
}
node *stringLeaf(char *sval){
  node *node = Leaf();
  node->leaf->leaf_type = CHAR_LEAF;
  node->leaf->sval = sval;
  return node;
}

node *setLeaf(){
  node *node = Leaf();
  node->leaf->leaf_type = SET_LEAF;
  return node;
}

node *nullLeaf(){
  return NULL;
}

node *Node(){
  node *node = malloc(sizeof(struct NODE));
  node->node_type = INTERNAL_NODE;
  node->level = 0;
  node->leaf = NULL;
  node->internal = malloc(sizeof(struct INTERNAL));
  return node;
}

node *UnaryNode(int op, node *child1){
  node *node = Node();
  node->internal->operator = op;
  node->internal->child1 = child1;
  node->internal->child2 = NULL;
  node->internal->child3 = NULL;
  node->internal->child4 = NULL;
  return node;
}
node *BinaryNode(int op, node *child1,  node *child2){
  node *node = Node();
  node->internal->operator = op;
  node->internal->child1 = child1;
  node->internal->child2 = child2;
  node->internal->child3 = NULL;
  node->internal->child4 = NULL;
  return node;
}
node *TernaryNode(int op, node *child1,  node *child2, node *child3){
  node *node = Node();
  node->internal->operator = op;
  node->internal->child1 = child1;
  node->internal->child2 = child2;
  node->internal->child3 = child3;
  node->internal->child4 = NULL;
  return node;
}
node *QuaternaryNode(int op, node *child1,  node *child2, node *child3, node *child4){
  node *node = Node();
  node->internal->operator = op;
  node->internal->child1 = child1;
  node->internal->child2 = child2;
  node->internal->child3 = child3;
  node->internal->child4 = child4;
  return node;
}

void setVarsType(node *node, int type){
  if (node == NULL) return;
  switch (node->node_type) {
    case INTERNAL_NODE:
      setVarsType(node->internal->child1, type);
      setVarsType(node->internal->child2, type);
      break;
    case LEAF_NODE:
      node->leaf->ref->sym_kind = VARIABLE;
      node->leaf->ref->var_type = type;
      break;
  }
}

int countArgs(node *node, int count){
  if (node == NULL) return count;
  switch (node->node_type) {
    case INTERNAL_NODE:
      count += countArgs(node->internal->child1, count);
      count += countArgs(node->internal->child2, count);
      break;
    case LEAF_NODE:
      return 1;
      break;
  }
  return count;
}

int setArgsInfo(sym *func_ref, node *node, int index){
  if (node == NULL) return index;
  switch (node->node_type) {
    case INTERNAL_NODE:
      index += setArgsInfo(func_ref, node->internal->child1, index);
      index += setArgsInfo(func_ref, node->internal->child2, index);
      break;
    case LEAF_NODE:
      func_ref->args_type[index] = node->leaf->ref->var_type;
      return 1;
      break;
  }
  return index;
}





void printLeafType(leaf *leaf){
  switch (leaf->leaf_type) {
    case ID_LEAF: printf("%s\n", leaf->ref->identifier); break;
    case INT_LEAF: printf("%d\n", leaf->ival); break;
    case FLOAT_LEAF: printf("%f\n", leaf->fval); break;
    case CHAR_LEAF: printf("%c\n", leaf->cval); break;
    case STRING_LEAF: printf("%s\n", leaf->sval); break;
    case SET_LEAF: printf("EMPTY\n"); break;
  }
}

void printInternalNode(internal *internal){
  switch (internal->operator) {
    case SEQ: printf("SEQ\n"); break;
    case VARDECL: printf("VARDECL\n"); break;
    case FUNCDECL: printf("FUNCDECL\n"); break;
    case FUNCBODY: printf("FUNCBODY\n"); break;
    case ARGUMENTS: printf("ARGUMENTS\n"); break;
    case FOR1: printf("FOR1\n"); break;
    case FOR2: printf("FOR2\n"); break;
    case FORALL: printf("FORALL\n"); break;
    case IF: printf("IF\n"); break;
    case IF_ELSE: printf("IF_ELSE\n"); break;
    case ASSIGN: printf("ASSIGN\n"); break;
    case CALL: printf("CALL\n"); break;
    case DISJ: printf("DISJ\n"); break;
    case CONJ: printf("CONJ\n"); break;
    case NEG: printf("DISJ\n"); break;
    case ARTOP1: printf("ARTOP1\n"); break;
    case ARTOP2: printf("ARTOP2\n"); break;
    case RELOP: printf("RELOP\n"); break;
    case SETOP: printf("SETOP\n"); break;
    case IN: printf("IN\n"); break;
    case EXISTS: printf("EXISTS\n"); break;
    case RETURN: printf("RETURN\n"); break;
  }
}

void printTree(node *tree){
  if (tree == NULL) return;
  printf("Level %d", tree->level);
  for (int i=0; i <= tree->level; i++) printf("  ");
  switch (tree->node_type) {
    case INTERNAL_NODE:
      printInternalNode(tree->internal);
      printTree(tree->internal->child1);
      printTree(tree->internal->child2);
      printTree(tree->internal->child3);
      printTree(tree->internal->child4);
      break;

    case LEAF_NODE:
      printLeafType(tree->leaf);
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
      subtrees[0] = bindLevel(tree->internal->child1, level+1, max_level);
      subtrees[1] = bindLevel(tree->internal->child2, level+1, max_level);
      subtrees[2] = bindLevel(tree->internal->child3, level+1, max_level);
      subtrees[3] = bindLevel(tree->internal->child4, level+1, max_level);
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
      freeTree(node->internal->child1);
      freeTree(node->internal->child2);
      freeTree(node->internal->child3);
      freeTree(node->internal->child4);
      free(node->internal);
      free(node);
      break;

    case LEAF_NODE:
      free(node->leaf);
      free(node);
      break;
  }
  return;
}