#include "../include/semantic.h"

enum operations_set {ARTOP, RELOP_, BOOLOP, NOTOP, EQUALOP, SETOP_, IS_SET_, IN_, EXISTS_, NONE};


int result_type(int type_op, int type1, int type2){
  switch (type_op) {
    case ARTOP:
          if (type1 == FLOAT_TYPE)
            if (type2 == FLOAT_TYPE || type2 == INT_TYPE)
             return FLOAT_TYPE;

         if (type1 == INT_TYPE){
           if (type2 == INT_TYPE)  return INT_TYPE;
           if (type2 == FLOAT_TYPE) return FLOAT_TYPE;
         }
         printf("[semantic error] types %d and %d used in arithmetic operation\n", type1, type2);


    case RELOP_:
          if (type1 == FLOAT_TYPE || type1 == INT_TYPE)
            if (type2 == FLOAT_TYPE || type2 == INT_TYPE)
             return INT_TYPE;
         printf("[semantic error] types %d and %d used in relational operation\n", type1, type2);


    case BOOLOP:
          if (type1 == INT_TYPE && type2 == INT_TYPE) return INT_TYPE;
          printf("[semantic error] types %d and %d used in boolean operation\n", type1, type2);

    case NOTOP:
          if (type1 == INT_TYPE) return INT_TYPE;
          printf("[semantic error] type %d used in neg operation\n", type1);

    case EQUALOP:
          if (type1 == FLOAT_TYPE && type2 == FLOAT_TYPE) return INT_TYPE;
          if (type1 == INT_TYPE && type2 == INT_TYPE) return INT_TYPE;
          printf("[semantic error] types %d and %d used in comparison operation\n", type1, type2);

    case SETOP_:
          if (type1 == INT_TYPE) return INT_TYPE;
          printf("[semantic error] types %d used for setop operation\n", type1);

    case IS_SET_:
          if (type1 == FLOAT_TYPE || type1 == INT_TYPE || type1 == SET_TYPE) return INT_TYPE;
          printf("[semantic error] type %d used in is_set operation\n", type1);

    case IN_:
          if (type1 == FLOAT_TYPE && type2 == SET_TYPE) return INT_TYPE;
          if (type1 == INT_TYPE && type2 == SET_TYPE) return INT_TYPE;
          printf("[semantic error] types %d and %d used for 'in' operation\n", type1, type2);

    case EXISTS_:
          if (type1 == INT_TYPE) return ELEM_TYPE;
          printf("[semantic error] type %d used for exist operation\n", type1);

    case NONE:
        if (type1 == INT_TYPE && type2 == INT_TYPE) return INT_TYPE;
        if (type1 == FLOAT_TYPE && type2 == FLOAT_TYPE) return FLOAT_TYPE;
        if (type1 == SET_TYPE && type2 == SET_TYPE) return SET_TYPE;
        if (type1 == ELEM_TYPE && type2 == ELEM_TYPE) return ELEM_TYPE;
        printf("[semantic error] incompatible types %d and %d\n", type1, type2);

    default:
          printf("[semantic error] operation do not exist\n");
          return UNDEF;
  }
}



int checkParamsType(sym *func_ref, node *args_tree, int index){
    if (args_tree == NULL) return index;
    switch (args_tree->node_type) {
      case INTERNAL_NODE:
        index += checkParamsType(func_ref, args_tree->internal->child1, index);
        index += checkParamsType(func_ref, args_tree->internal->child2, index);
        break;
      case LEAF_NODE:
        if (args_tree->leaf->leaf_type == ID_LEAF){
          if (func_ref->args_type[index] != args_tree->leaf->ref->var_type)
            printf("[semantic error] In function call '%s': Argument %d type mismatch: expected '%s', but '%s' were given\n", func_ref->identifier, index, printType(func_ref->args_type[index]), printType(args_tree->leaf->ref->var_type));
          return 1;
        }
        break;
    }
    return index;
}


void checkLeafsParams(node *node){
  if (node == NULL) return;
  int count;
  switch (node->node_type) {
    case INTERNAL_NODE:
      if (node->internal->operator == CALL){
        count = countArgs(node->internal->child2, 0);
        if (count == node->internal->child1->leaf->ref->n_args){
          checkParamsType(node->internal->child1->leaf->ref, node->internal->child2, 0);
        }
        else printf("[semantic error] In function call '%s': Expected %d arguments, %d were given\n", node->internal->child1->leaf->ref->identifier, node->internal->child1->leaf->ref->n_args, count);
      }
      checkLeafsParams(node->internal->child1);
      checkLeafsParams(node->internal->child2);
      checkLeafsParams(node->internal->child3);
      checkLeafsParams(node->internal->child4);
      break;
    case LEAF_NODE:
      break;
  }
  return;
  }
