#include "../include/tree.h"

void printTree(node *tree){
  if (tree == NULL) return;
  printTree(tree->first);
  printTree(tree->second);
  printTree(tree->third);
  printTree(tree->fourth);
}

node *createConstNode(int type, int ival, float fval, char cval, char *sval){
  node *node = (node *)malloc(sizeof(node));
  node->node_type = CONST;
  constant_node *constant_node = (constant_node *)malloc(sizeof(constant_node));
  constant_node->type = info;
  constant_node->ival = ival;
  constant_node->fval = fval;
  constant_node->cval = cval;
  constant_node->sval = sval;
  node->constant = constant_node;
  return node;
}

node *createRefNode(sym *ref){
  node *node = (node *)malloc(sizeof(node));
  node->node_type = REF;
  node->ref = ref;
  return node;
}

node *createBinaryNode(int operator, node *first, node *second){
  node *node = (node *)malloc(sizeof(node));
  node->node_type = BINARY;
  binary_node *binary = (binary_node *)malloc(sizeof(binary_node));
  binary->first = fisrt;
  binary->second = second;
  node->binary_node = binary;
  return node;
}

node *createUnaryNode(int operator, node *first){
  node *node = (node *)malloc(sizeof(node));
  node->node_type = UNARY;
  unary_node *unary = (unary_node *)malloc(sizeof(unary_node));
  unary->first = fisrt;
  node->unary_node = unary;
  return node;
}

node *createCallNode(node *arguments, sym *ref){
  node *node = (node *)malloc(sizeof(node));
  node->node_type = CALL;
  call_node call = (call_node *)malloc(sizeof(call_node));
  call->arguments = arguments;
  call->ref = ref;

  node->call = call;
  return node;
}

node *createAssignNode(sym *ref, node *value){
  node *node = (node *)malloc(sizeof(node));
  node->node_type = ASSIGN;
  assignment_node assign = (assignment_node *)malloc(sizeof(assignment_node));
  assign->ref = ref;
  assign->value = value;

  node->assign = assign;
  return node;
}

node *createReadNode(sym *ref){
  node *node = (node *)malloc(sizeof(node));
  node->node_type = READ;
  node->ref = ref;
  return node;
}

node *createIfNode(node * condition, node *if_body, node *else_body){
  node *node = (node *)malloc(sizeof(node));
  node->node_type = IF;
  if_node *if_node = (if_node *)malloc(sizeof(if_node));
  if_node->condition = condition;
  if_node->if_body = if_body;
  if_node->else_body = else_body;
  node->if = if_node;
  return node;
}

node *createForNode(node * begin, node *condition, node *increment, node *body){
  node *node = (node *)malloc(sizeof(node));
  node->node_type = FOR;
  for_node *for_node = (for_node *)malloc(sizeof(for_node));
  for_node->begin = begin;
  for_node->condition = condition;
  for_node->increment = increment;
  for_node->body = body;
  node->for = for_node;
  return node;
}

node *createForAllNode(node * elem, node *set, node *body){
  node *node = (node *)malloc(sizeof(node));
  node->node_type = FORALL;
  forall_node *forall_node = (forall_node *)malloc(sizeof(forall_node));
  forall_node->elem = elem;
  forall_node->set = set;
  forall_node->body = body;
  node->forall = forall_node;
  return node;
}

node *createNode(int node_type){
  node *node = (node *)malloc(sizeof(node));
  node->node_type = node_type;
  return node;
}
