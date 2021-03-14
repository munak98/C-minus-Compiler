#include "../include/tree.h"

node *createNode(int node_type, int operator, node *child1, node *child2, node *child3, node *child4){
  node *node = (node *)malloc(sizeof(node));
  node->node_type = node_type;
  node->operator = operator;
  node->first = child1;
  node->second = child2;
  node->third = child3;
  node->fourth = child4;
  return node;
}

void printTree(node *tree){
  if (tree == NULL) return;
  printTree(tree->first);
  printTree(tree->second);
  printTree(tree->third);
  printTree(tree->fourth);
}
