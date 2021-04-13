#include "../include/semantic.h"

extern table *curr_scope;
enum operations_set {ARTOP, RELOP_, BOOLOP, NOTOP, EQUALOP, SETOP_, IS_SET_, IN_, EXISTS_, ASSIGN_};

void checkMain(){
  sym *aux = lookInScopeLevel("main", curr_scope);
  if (aux == NULL  || aux->sym_kind != FUNCTION) printf("[semantic error] Program does not have a main function\n");
}

void hideScope(){
  curr_scope = curr_scope->father;
}

sym *findDecl(char *name){
  sym *aux = lookInAllLevels(name, curr_scope);
  if (aux == NULL) {
    printf("[semantic error] Identifier '%s' not declared\n", name);
    aux = newEntry(name, UNDEF, VARIABLE);
    pushEntry(aux, curr_scope);
    return aux;
  }
  else {free(name); return aux;}
}

sym *declare(char *name, int type, int kind){
  sym *aux = lookInScopeLevel(name, curr_scope);
  if (aux != NULL) {printf("[semantic error] Multiple declarations of identifier '%s'\n", name); free(name); return aux;}
  else {
    aux = newEntry(name, type, kind);
    pushEntry(aux, curr_scope);
    return aux;
  }
}



node *floatToInt(node *operand){
  node *node = malloc(sizeof(struct NODE));
  node->node_type = INTERNAL_NODE;
  node->child1 = NULL;
  node->child2 = NULL;
  node->child3 = NULL;
  node->child4 = NULL;
  node->operator = FLOAT_TO_INT;
  node->sem_type = INT_TYPE;
  node->ival = (int)operand->fval;
  node->child1 = operand;
  return node;
}

node *floatToElem(node *operand){
  node *node = malloc(sizeof(struct NODE));
  node->child1 = NULL;
  node->child2 = NULL;
  node->child3 = NULL;
  node->child4 = NULL;
  node->node_type = INTERNAL_NODE;
  node->operator = FLOAT_TO_ELEM;
  node->sem_type = ELEM_TYPE;
  node->elem = malloc(sizeof(elem));
  node->elem->fval = operand->fval;
  node->elem->curr_type = FLOAT_TYPE;
  node->child1 = operand;
  return node;
}

node *intToFloat(node *operand){
  node *node = malloc(sizeof(struct NODE));
  node->child1 = NULL;
  node->child2 = NULL;
  node->child3 = NULL;
  node->child4 = NULL;
  node->node_type = INTERNAL_NODE;
  node->operator = INT_TO_FLOAT;
  node->sem_type = FLOAT_TYPE;
  node->fval = (float)operand->ival;
  node->child1 = operand;
  return node;
}

node *intToElem(node *operand){
  node *node = malloc(sizeof(struct NODE));
  node->child1 = NULL;
  node->child2 = NULL;
  node->child3 = NULL;
  node->child4 = NULL;
  node->node_type = INTERNAL_NODE;
  node->operator = INT_TO_ELEM;
  node->sem_type = ELEM_TYPE;
  node->elem = malloc(sizeof(elem));
  node->elem->ival = operand->ival;
  node->elem->curr_type = INT_TYPE;
  node->child1 = operand;
  return node;
}

node *elemToInt(node *operand){
  node *node = malloc(sizeof(struct NODE));
  node->child1 = NULL;
  node->child2 = NULL;
  node->child3 = NULL;
  node->child4 = NULL;
  node->node_type = INTERNAL_NODE;
  node->operator = ELEM_TO_INT;
  node->sem_type = INT_TYPE;
  // if (operand->elem->curr_type == SET_TYPE) {printf("[semantic error] type conversion 'elem to int' not possible: elem is set\n"); return node;}
  // if (operand->elem->curr_type == INT_TYPE) node->ival = operand->elem->ival;
  // if (operand->elem->curr_type == FLOAT_TYPE) node->ival = (int)operand->elem->fval;
  node->child1 = operand;
  return node;
}

node *elemToFloat(node *operand){
  node *node = malloc(sizeof(struct NODE));
  node->child1 = NULL;
  node->child2 = NULL;
  node->child3 = NULL;
  node->child4 = NULL;
  node->node_type = INTERNAL_NODE;
  node->operator = ELEM_TO_FLOAT;
  node->sem_type = FLOAT_TYPE;
  // if (operand->elem->curr_type == SET_TYPE) {printf("[semantic error] type conversion 'elem to float' not possible: elem is set\n"); return node;}
  // if (operand->elem->curr_type == INT_TYPE) node->fval = (float)operand->elem->ival;
  // if (operand->elem->curr_type == FLOAT_TYPE) node->fval = operand->elem->fval;
  node->child1 = operand;
  return node;
}


node *convert(node *arg, sym *ref, int n_params){
  int actual_type = ref->args_type[n_params];
  int given_type = arg->sem_type;
  if (actual_type == SET_TYPE && given_type == SET_TYPE) return arg;
  if (actual_type == FLOAT_TYPE){
    if (given_type == FLOAT_TYPE) return arg;
    if (given_type == INT_TYPE) {
      arg = intToFloat(arg);
      return arg;
    }
    if (given_type == ELEM_TYPE){
      arg = elemToFloat(arg);
      return arg;
    }
  }

  if (actual_type == INT_TYPE){
    if (given_type == INT_TYPE) return arg;
    if (given_type == FLOAT_TYPE) {
      arg = floatToInt(arg);
      return arg;
    }
    if (given_type == ELEM_TYPE){
      arg = elemToInt(arg);
      return arg;
    }
  }

  if (actual_type == ELEM_TYPE){
    if (given_type == ELEM_TYPE) return arg;
    if (given_type == INT_TYPE) {
      arg = intToElem(arg);
      return arg;
    }
    if (given_type == FLOAT_TYPE){
      arg = floatToElem(arg);
      return arg;
    }
  }
  printf("[semantic error] In function call '%s': Argument %d type mismatch: expected '%s', but '%s' were given\n", ref->identifier, n_params, printType(ref->args_type[n_params]), printType(arg->ref->type));
  return arg;
}


node *checkParam(int op, sym *ref, node *arg1, node *arg2, int n_params){
    if (arg2 == NULL) {
      if (ref->n_args > 0) {
        printf("[semantic error] Wrong number of arguments to function '%s': expected %d, but 0 were given\n", ref->identifier, ref->n_args);
        free(arg1);
        free(arg2);
        return NULL;
      }
      if (ref->n_args == -1) {
        printf("[semantic error] Attemp to call variable '%s' as function\n", ref->identifier);
        free(arg1);
        free(arg2);
        return NULL;
      }
    }
    if (n_params+1 > ref->n_args) {
      printf("[semantic error] Wrong number of arguments to function '%s': expected %d, but %d were given\n", ref->identifier, ref->n_args, n_params+1);
      free(arg1);
      free(arg2);
      return NULL;
    }
    if (op == SEQ){
      node *node = malloc(sizeof(struct NODE));
      node->node_type = INTERNAL_NODE;
      node->operator = SEQ;
      node->sem_type = UNDEF;
      node->child1 = arg1;
      node->child2 = convert(arg2, ref, n_params);
      node->child3 = NULL;
      node->child4 = NULL;
      return node;
    }
    if (op == UNDEF){
      return convert(arg2, ref, n_params);
    }
    return NULL;
}



node *typeCheck(int op, node *operand1, node *operand2){
    node *node = malloc(sizeof(struct NODE));
    node->node_type = INTERNAL_NODE;
    node->operator = op;
    node->sem_type = UNDEF;
    node->child1 = NULL;
    node->child2 = NULL;
    node->child3 = NULL;
    node->child4 = NULL;

    if (op == ARTOP1 || op == ARTOP2){
        node->child1 = operand1;
        node->child2 = operand2;
        node->sem_type = operand1->sem_type;
        if (operand1->sem_type == FLOAT_TYPE){
          if (operand2->sem_type == ELEM_TYPE) node->child2 = elemToFloat(operand2);
          if (operand2->sem_type == INT_TYPE) node->child2 = intToFloat(operand2);
          return node;
        }
        if (operand1->sem_type == INT_TYPE){
          if (operand2->sem_type == FLOAT_TYPE) {node->child1 = intToFloat(operand1); node->sem_type = FLOAT_TYPE;}
          if (operand2->sem_type == ELEM_TYPE) node->child2 = elemToInt(operand2);
          return node;
        }
        if (operand1->sem_type == ELEM_TYPE){
          if (operand2->sem_type == INT_TYPE) {node->child1 = elemToInt(operand1); node->sem_type = INT_TYPE;;}
          if (operand2->sem_type == FLOAT_TYPE) {node->child1 = elemToFloat(operand1); node->sem_type = FLOAT_TYPE;}
          if (operand2->sem_type == ELEM_TYPE) {node->child1 = elemToFloat(operand1); node->child2 = elemToFloat(operand2); node->sem_type = FLOAT_TYPE;}
          return node;
        }
        printf("[semantic error] Types %s and %s used in arithmetic operation\n", printType(operand1->sem_type), printType(operand2->sem_type));
        return node;
    }


    if (op == CONJ || op == DISJ || op == RELOP){
      node->sem_type = INT_TYPE;
      node->child1 = operand1;
      node->child2 = operand2;
      if (operand1->sem_type == FLOAT_TYPE){
        if (operand2->sem_type == ELEM_TYPE) node->child2 = elemToFloat(operand2);
        if (operand2->sem_type == INT_TYPE) node->child2 = intToFloat(operand2);
        return node;
      }
      if (operand1->sem_type == INT_TYPE){
       if (operand2->sem_type == FLOAT_TYPE) node->child1 = intToFloat(operand1);
       if (operand2->sem_type == ELEM_TYPE) node->child2 = elemToInt(operand2);
       return node;
      }
      if (operand1->sem_type == ELEM_TYPE){
       if (operand2->sem_type == INT_TYPE) node->child1 = elemToInt(operand1);
       if (operand2->sem_type == FLOAT_TYPE) node->child1 = elemToFloat(operand1);
       if (operand2->sem_type == ELEM_TYPE) {node->child1 = elemToFloat(operand1); node->child2 = elemToFloat(operand2);}
       return node;
      }
      printf("[semantic error] Types %s and %s used in boolean or relational operation\n", printType(operand1->sem_type), printType(operand2->sem_type));
      return node;
    }

    if (op == COMP){
          node->sem_type = INT_TYPE;
          node->child1 = operand1;
          node->child2 = operand2;
          if (operand1->sem_type == FLOAT_TYPE){
            if (operand2->sem_type == ELEM_TYPE) node->child2 = elemToFloat(operand2);
            if (operand2->sem_type == INT_TYPE) node->child2 = intToFloat(operand2);
            return node;
          }
          if (operand1->sem_type == SET_TYPE && operand2->sem_type == SET_TYPE) return node;
          if (operand1->sem_type == INT_TYPE){
             if (operand2->sem_type == FLOAT_TYPE) node->child1 = intToFloat(operand1);
             if (operand2->sem_type == ELEM_TYPE) node->child2 = elemToInt(operand2);
             return node;
          }
          if (operand1->sem_type == ELEM_TYPE){
             if (operand2->sem_type == INT_TYPE) node->child1 = elemToInt(operand1);
             if (operand2->sem_type == FLOAT_TYPE) node->child1 = elemToFloat(operand1);
             if (operand2->sem_type == ELEM_TYPE) {node->child1 = elemToFloat(operand1); node->child2 = elemToFloat(operand2);}
             return node;
          }
         printf("[semantic error] Types %s and %s used in comparison operation\n", printType(operand1->sem_type), printType(operand2->sem_type));
         return node;
    }

    if (op == NEG){
      node->sem_type = INT_TYPE;
      node->child1 = operand1;
      if (operand1->sem_type == INT_TYPE) return node;
      if (operand1->sem_type == FLOAT_TYPE) {node->child1 = floatToInt(operand1);  return node;}
      if (operand1->sem_type == ELEM_TYPE) {node->child1 = elemToInt(operand1); return node;}
      printf("[semantic error] Type %s used in neg operation\n", printType(operand1->sem_type));
      return node;
    }

    if (op == SETOP){
        node->child1 = operand1;
        node->sem_type = SET_TYPE;
        if (operand1->sem_type == INT_TYPE) return node;
        printf("[semantic error] Types %s used for setop operation\n", printType(operand1->sem_type));
        return node;
    }

    if (op == IS_SET){
      node->child1 = operand1;
      node->sem_type = INT_TYPE;
      if (operand1->sem_type == FLOAT_TYPE || operand1->sem_type == INT_TYPE || operand1->sem_type == SET_TYPE || operand1->sem_type == ELEM_TYPE){
        return node;
      }
      printf("[semantic error] Type %s used in is_set operation\n", printType(operand1->sem_type));
      return node;
    }

    if (op == IN){
      node->child1 = operand1;
      node->child2 = operand2;
      node->sem_type = INT_TYPE;
      if (operand1->sem_type == FLOAT_TYPE || operand1->sem_type == INT_TYPE || operand1->sem_type == ELEM_TYPE)
        if (operand2->sem_type == SET_TYPE) return node;
      printf("[semantic error] Types %s and %s used for 'in' operation \n", printType(operand1->sem_type), printType(operand2->sem_type));
      return node;
    }

    if (op == EXISTS){
      node->child1 = operand1;
      node->sem_type = ELEM_TYPE;
      if (operand1->sem_type == INT_TYPE) return node;
      printf("[semantic error] Type %s used for exist operation\n", printType(operand1->sem_type));
      return node;
    }

    if (op == ASSIGN){
      node->child1 = operand1;
      node->child2 = operand2;
      node->sem_type = operand1->sem_type;
      if (operand1->sem_type == INT_TYPE){
        if (operand2->sem_type == FLOAT_TYPE) node->child2 = floatToInt(operand2);
        if (operand2->sem_type == ELEM_TYPE) node->child2 = elemToInt(operand2);
         return node;
      }
      if (operand1->sem_type == FLOAT_TYPE){
        if (operand2->sem_type == INT_TYPE) node->child2 = intToFloat(operand2);
        if (operand2->sem_type == ELEM_TYPE) node->child2 = elemToFloat(operand2);
        return node;
      }
      if (operand1->sem_type == SET_TYPE && operand2->sem_type == SET_TYPE) return node;

      if (operand1->sem_type == ELEM_TYPE){
        if (operand2->sem_type == INT_TYPE) node->child2 = intToElem(operand2);
        if (operand2->sem_type == FLOAT_TYPE) node->child2 = floatToElem(operand2);
        return node;
      }
      printf("[semantic error] Attempt to assign value of type %s to %s variable '%s'\n", printType(operand2->sem_type), printType(operand1->sem_type), operand1->ref->identifier);
      return node;
    }

    printf("[semantic error] Operation %d do not exist\n", op);
    return node;
}
