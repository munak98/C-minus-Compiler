#include "../include/tree_new.h"
#include "semantic.tab.h"

void printLeafType(int type){
  switch (type) {
    case ID_LEAF:
      printf("ID_LEAF  ");
      break;
    case INT_LEAF:
      printf("INT_LEAF  ");
      break;
    case FLOAT_LEAF:
      printf("FLOAT_LEAF  ");
      break;
    case CHAR_LEAF:
      printf("CHAR_LEAF  ");
      break;
    case STRING_LEAF:
      printf("STRING_LEAF  ");
      break;
    case SET_LEAF:
      printf("SET_LEAF  ");
      break;
  }
}

void printInternalNode(int op){
  switch (op) {
    case SEQ:
      printf("SEQ  ");
      break;
    case VARDECL:
      printf("VARDECL  ");
      break;
    case FUNCDECL:
      printf("FUNCDECL  ");
      break;
    case FOR1:
      printf("FOR1  ");
      break;
    case FOR2:
      printf("FOR2  ");
      break;
    case FORALL:
      printf("FORALL  ");
      break;
    case IF:
      printf("IF  ");
      break;
    case IF_ELSE:
      printf("IF_ELSE  ");
      break;
    case ASSIGN:
      printf("ASSIGN  ");
      break;
    case CALL:
      printf("CALL  ");
      break;
    case DISJ:
      printf("DISJ  ");
      break;
    case CONJ:
      printf("CONJ  ");
      break;
    case NEG:
      printf("DISJ  ");
      break;
    case ARTOP1:
      printf("ARTOP1  ");
      break;
    case ARTOP2:
      printf("ARTOP2  ");
      break;
    case RELOP:
      printf("RELOP  ");
      break;
    case SETOP:
      printf("SETOP  ");
      break;
    case IN:
      printf("IN  ");
      break;
    case EXISTS:
      printf("EXISTS  ");
      break;
    case RETURN:
      printf("RETURN  ");
      break;
  }
}


void printTree(node *tree){
  if (tree == NULL) return;
  printf("Level %d", tree->level);
  for (int i=0; i <= tree->level; i++) printf("\t");
  switch (tree->node_type) {
    case INTERNAL_NODE:
      printInternalNode(tree->internal->operator);
      printTree(tree->internal->child1);
      printTree(tree->internal->child2);
      printTree(tree->internal->child3);
      printTree(tree->internal->child4);
      break;

    case LEAF_NODE:
      printLeafType(tree->leaf->leaf_type);
      break;
  }
  return;
}

void printLevel(node *tree, int level){
  if (tree == NULL) return;
  switch (tree->node_type) {
    case INTERNAL_NODE:
      if (tree->level == level) printInternalNode(tree->internal->operator);
      printLevel(tree->internal->child1, level);
      printLevel(tree->internal->child2, level);
      printLevel(tree->internal->child3, level);
      printLevel(tree->internal->child4, level);
      break;
    case LEAF_NODE:
      if (tree->level == level) printLeafType(tree->leaf->leaf_type);
      break;
  }
  return;
}

void printTree3(node *tree, int max_level){
  for (int i = 0; i <= max_level; i++) {
    printf("Level %d: ", i);
    printLevel(tree, i);
    printf("\n");
  }
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




node *Leaf(){
  node *node = malloc(sizeof(node));
  node->node_type = LEAF_NODE;
  node->level = 0;
  node->leaf = (leaf *)malloc(sizeof(leaf));
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
  node *node = malloc(sizeof(node));
  node->node_type = INTERNAL_NODE;
  node->level = 0;
  node->internal = (internal *)malloc(sizeof(internal));
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
