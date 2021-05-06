#include "../include/tac_generation.h"
#include <string.h>

void writeGlobals(table *global_scope){
  fprintf(tac_code, ".table\n");
  if (isEmpty(global_scope->hasharray) == 0)
    return;
  for (int i = 0; i < HASHTABLE_SIZE; i++){
    if (global_scope->hasharray[i] != NULL){
      sym *aux = global_scope->hasharray[i];
      while (aux != NULL){
        if (aux->sym_kind == VARIABLE) {
          fprintf(tac_code, "%s %s\n", printType(aux->type), aux->identifier);
        }
        aux = aux->next;
      }
    }
  }
}


void printRegs(){
  for (int i = 0; i < 12; i++)
    printf("%d ", i);
  printf("\n");
  for (int i = 0; i < 12; i++)
    printf("%d ", regs[i].occup);
  printf("\n");
}

void init(){
  regs = malloc(sizeof(struct REG)*12);
  for (int i = 0; i < 12; i++){
    regs[i].id = i;
    regs[i].occup = 0;
  }
  label_count = 0;
}

reg *reg_alloc(){
  for (int i = 0; i < 12; i++)
    if (regs[i].occup != 1){
      regs[i].occup = 1;
      return &regs[i];
    }
  printf("No registers avaiable\n");
  exit(-1);
}

void reg_free(reg *reg){
  if (reg != NULL){
    if (reg->is_var == 0){
      reg->occup = 0;
    }
  }
}

int new_label(){
  label_count++;
  return label_count;
}

void printLabel(int label){
  fprintf(tac_code, "L%d:\n", label);
}


reg *symbol_gen(sym *symb){
  if (symb->reg != NULL){
    return symb->reg;
  }
  else {
    symb->reg = reg_alloc();
    symb->reg->is_var = 1;
    return symb->reg;
  }
}

void code_gen_params(node *tree){
  if (tree == NULL) return;
  if (tree->operator == SEQ){
    code_gen(tree->child2);
    fprintf(tac_code, "param %d\n", tree->child2->reg->id);
    reg_free(tree->child2->reg);
    code_gen_params(tree->child1);
  }
}

void printString(char *word){
  for (int i = 1; i < strlen(word)-2; i++){
    fprintf(tac_code, "print '%c'\n", word[i]);
  }
}

void printOp(node *tree){
  if (tree->node_type == LEAF_NODE){
    if (tree->leaf_type == FLOAT_LEAF)
      fprintf(tac_code, "%f", tree->fval);
    if (tree->leaf_type == INT_LEAF)
      fprintf(tac_code, "%d", tree->ival);
    if (tree->leaf_type == ID_LEAF)
      fprintf(tac_code, "$%d", tree->reg->id);
    if (tree->leaf_type == CHAR_LEAF)
      fprintf(tac_code, "%s", tree->sval);
  }
  else {
    fprintf(tac_code, "$%d", tree->reg->id);
  }
}

void printOp1(node *child1){
  printOp(child1);
  fprintf(tac_code, ", ");
}

void printOp2(node *child2){
  printOp(child2);
  fprintf(tac_code, "\n");
}


void code_gen(node *tree){
  if (tree == NULL) return;
  int end_label, top_label, else_label;
  if (tree->node_type == INTERNAL_NODE){
    switch (tree->operator) {
      case ARTOP1:
      case ARTOP2:
        code_gen(tree->child1);
        code_gen(tree->child2);
        tree->reg = reg_alloc();
        if (tree->op_specifier == 7){
          fprintf(tac_code, "add $%d, ", tree->reg->id);
          printOp1(tree->child1);
          printOp2(tree->child2);
        }
        if (tree->op_specifier == 8){
          fprintf(tac_code, "sub $%d, ", tree->reg->id);
          printOp1(tree->child1);
          printOp2(tree->child2);
        }
        if (tree->op_specifier == 10){
          fprintf(tac_code, "div $%d, ", tree->reg->id);
          printOp1(tree->child1);
          printOp2(tree->child2);
        }
        if (tree->op_specifier == 9){
          fprintf(tac_code, "mul $%d, ", tree->reg->id);
          printOp1(tree->child1);
          printOp2(tree->child2);
        }
        reg_free(tree->child1->reg);
        reg_free(tree->child2->reg);
        break;

      case DISJ:
        code_gen(tree->child1);
        code_gen(tree->child2);
        tree->reg = reg_alloc();
        fprintf(tac_code, "and $%d, ", tree->reg->id);
        printOp1(tree->child1);
        printOp2(tree->child2);
        reg_free(tree->child1->reg);
        reg_free(tree->child2->reg);
        break;

      case CONJ:
        code_gen(tree->child1);
        code_gen(tree->child2);
        tree->reg = reg_alloc();
        fprintf(tac_code, "or $%d, ", tree->reg->id);
        printOp1(tree->child1);
        printOp2(tree->child2);
        reg_free(tree->child1->reg);
        reg_free(tree->child2->reg);
        break;

      case NEG:
        code_gen(tree->child1);
        tree->reg = reg_alloc();
        fprintf(tac_code, "not $%d, ", tree->reg->id);
        printOp2(tree->child1);
        reg_free(tree->child1->reg);
        break;

      case COMP:
        code_gen(tree->child1);
        code_gen(tree->child2);
        tree->reg = reg_alloc();
        fprintf(tac_code, "seq $%d, ", tree->reg->id);
        printOp1(tree->child1);
        printOp2(tree->child2);
        reg_free(tree->child1->reg);
        reg_free(tree->child2->reg);
        break;

      case RELOP:
        code_gen(tree->child1);
        code_gen(tree->child2);
        tree->reg = reg_alloc();
        if (tree->op_specifier == 1){
          fprintf(tac_code, "slt $%d, ", tree->reg->id);
          printOp1(tree->child1);
          printOp2(tree->child2);
        }
        if (tree->op_specifier == 5){
          fprintf(tac_code, "slt $%d, ", tree->reg->id);
          printOp1(tree->child2);
          printOp2(tree->child1);
        }
        if (tree->op_specifier == 6){
          fprintf(tac_code, "sleq $%d, ", tree->reg->id);
          printOp1(tree->child2);
          printOp2(tree->child1);
        }
        if (tree->op_specifier == 2){
          fprintf(tac_code, "sleq $%d, ", tree->reg->id);
          printOp1(tree->child1);
          printOp2(tree->child2);
        }
        reg_free(tree->child1->reg);
        reg_free(tree->child2->reg);
        break;

      case INT_TO_FLOAT:
        code_gen(tree->child1);
        tree->reg = reg_alloc();
        fprintf(tac_code, "inttofl $%d, ", tree->reg->id);
        printOp2(tree->child1);
        reg_free(tree->child1->reg);
        break;

      case FLOAT_TO_INT:
        code_gen(tree->child1);
        tree->reg = reg_alloc();
        fprintf(tac_code, "fltoint $%d, ", tree->reg->id);
        printOp2(tree->child1);
        reg_free(tree->child1->reg);
        break;

      case CALL:
        code_gen_params(tree->child2);
        fprintf(tac_code, "call .%s, %d\n", tree->child1->ref->identifier,  tree->child1->ref->n_args);
        tree->reg = reg_alloc();
        fprintf(tac_code, "pop %d\n", tree->reg->id);
        break;


      case IF:
        end_label = new_label();
        code_gen(tree->child1);
        tree->reg = reg_alloc();
        fprintf(tac_code, "brz L%d, $%d\n", end_label, tree->child1->reg->id);
        reg_free(tree->child1->reg);
        code_gen(tree->child2);
        printLabel(end_label);
        break;

      case IF_ELSE:
        else_label = new_label();
        end_label = new_label();
        code_gen(tree->child1);
        tree->reg = reg_alloc();
        fprintf(tac_code, "brz L%d, $%d\n", else_label, tree->child1->reg->id);
        reg_free(tree->child1->reg);
        code_gen(tree->child2);
        fprintf(tac_code, "jump L%d\n", end_label);
        printLabel(else_label);
        code_gen(tree->child3);
        printLabel(end_label);
        break;

      case FOR1:
        top_label = new_label();
        end_label = new_label();
        code_gen(tree->child1);
        printLabel(top_label);
        code_gen(tree->child2);
        fprintf(tac_code, "brz L%d, $%d\n", end_label, tree->child2->reg->id);
        code_gen(tree->child4);
        fprintf(tac_code, "jump L%d\n", top_label);
        printLabel(end_label);
        reg_free(tree->child1->reg);
        break;

      case FOR2:
        top_label = new_label();
        end_label = new_label();
        code_gen(tree->child1);
        printLabel(top_label);
        code_gen(tree->child2);
        fprintf(tac_code, "brz L%d, $%d\n", end_label, tree->child2->reg->id);
        code_gen(tree->child4);
        code_gen(tree->child3);
        fprintf(tac_code, "jump L%d\n", top_label);
        printLabel(end_label);
        reg_free(tree->child1->reg);
        break;

      case VARDECL:
        tree->reg = symbol_gen(tree->child1->ref);
        break;

      case WRITELN:
        code_gen(tree->child1);
        if (tree->child1->node_type == LEAF_NODE){
          if (tree->child1->leaf_type == STRING_LEAF){
            printString(tree->child1->sval);
            fprintf(tac_code, "println '%c'\n", tree->child1->sval[strlen(tree->child1->sval)-2]);
            break;
          }
        }
        fprintf(tac_code, "println ");
        printOp2(tree->child1);
        break;

      case WRITE:
        code_gen(tree->child1);
        if (tree->child1->node_type == LEAF_NODE){
          if (tree->child1->leaf_type == STRING_LEAF){
            printString(tree->child1->sval);
            fprintf(tac_code, "print '%c'\n", tree->child1->sval[strlen(tree->child1->sval)-2]);
            break;
          }
        }
        fprintf(tac_code, "print ");
        printOp2(tree->child1);
        break;

      case FUNCDECL:
        fprintf(tac_code, "%s:\n", tree->ref->identifier);
        code_gen(tree->child2);
        reg_free(tree->child2->reg);
        break;

      case RETURN:
        code_gen(tree->child1);
        fprintf(tac_code, "return $%d\n", tree->child1->reg->id);
        reg_free(tree->child1->reg);
        break;

      case ASSIGN:
        code_gen(tree->child2);
        code_gen(tree->child1);
        fprintf(tac_code, "mov $%d, ", tree->child1->reg->id);
        printOp2(tree->child2);
        tree->reg = tree->child1->reg;
        reg_free(tree->child2->reg);
        break;

      default:
        code_gen(tree->child1);
        code_gen(tree->child2);
        break;
    }
  }
  if (tree->node_type == LEAF_NODE){
      if (tree->leaf_type == ID_LEAF) {tree->reg = symbol_gen(tree->ref);}
      if (tree->leaf_type == INT_LEAF) ;
      if (tree->leaf_type == FLOAT_LEAF) ;
      if (tree->leaf_type == CHAR_LEAF) ;
      if (tree->leaf_type == STRING_LEAF) ;
  }
}
