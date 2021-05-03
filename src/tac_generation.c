#include "../include/tac_generation.h"

void printRegs(){
  for (int i = 0; i < 12; i++)
    printf("%d ", i);
  printf("\n");
  for (int i = 0; i < 12; i++)
    printf("%d ", regs[i]);
  printf("\n");
}

void init(){
  for (int i = 0; i < 12; i++)
    regs[i] = 0;
  label_count = 0;
}

int reg_alloc(){
  for (int i = 0; i < 12; i++)
    if (regs[i] != 1){
      regs[i] = 1;
      return i;
    }
  printf("No registers avaiable\n");
  exit(-1);
}

void reg_free(int i){
  regs[i] = 0;
}

int new_label(){
  label_count++;
  return label_count;
}

void printLabel(int label){
  fprintf(tac_code, "L%d:\n", label);
}

int symbol_gen(sym *symb){
  if (symb->reg != -1){
    fprintf(tac_code, "ja tinha reg: $%d\n", symb->reg);
    return symb->reg;
  }

  else {
    symb->reg = reg_alloc();
    fprintf(tac_code, "novo reg: $%d\n", symb->reg);
    return symb->reg;
  }

}

void code_gen_params(node *tree){
  if (tree == NULL) return;
  if (tree->operator == SEQ){
    code_gen(tree->child2);
    fprintf(tac_code, "param %d\n", tree->child2->reg);
    reg_free(tree->child2->reg);
    code_gen_params(tree->child1);
  }
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
        if (tree->op_specifier == 7)
          fprintf(tac_code, "add $%d, $%d, $%d\n", tree->reg, tree->child1->reg, tree->child2->reg);
        if (tree->op_specifier == 8)
          fprintf(tac_code, "sub $%d, $%d, $%d\n", tree->reg, tree->child1->reg, tree->child2->reg);
        if (tree->op_specifier == 10)
          fprintf(tac_code, "div $%d, $%d, $%d\n", tree->reg, tree->child1->reg, tree->child2->reg);
        if (tree->op_specifier == 9)
          fprintf(tac_code, "mul $%d, $%d, $%d\n", tree->reg, tree->child1->reg, tree->child2->reg);
        reg_free(tree->child1->reg);
        reg_free(tree->child2->reg);
        break;

      case DISJ:
        code_gen(tree->child1);
        code_gen(tree->child2);
        tree->reg = reg_alloc();
        fprintf(tac_code, "and $%d, $%d, $%d\n", tree->reg, tree->child1->reg, tree->child2->reg);
        reg_free(tree->child1->reg);
        reg_free(tree->child2->reg);
        break;

      case CONJ:
        code_gen(tree->child1);
        code_gen(tree->child2);
        tree->reg = reg_alloc();
        fprintf(tac_code, "or $%d, $%d, $%d\n", tree->reg, tree->child1->reg, tree->child2->reg);
        reg_free(tree->child1->reg);
        reg_free(tree->child2->reg);
        break;

      case NEG:
        code_gen(tree->child1);
        tree->reg = reg_alloc();
        fprintf(tac_code, "not $%d, $%d\n", tree->reg, tree->child1->reg);
        reg_free(tree->child1->reg);
        break;

      case COMP:
        code_gen(tree->child1);
        code_gen(tree->child2);
        tree->reg = reg_alloc();
        fprintf(tac_code, "seq $%d, $%d, $%d\n", tree->reg, tree->child1->reg, tree->child2->reg);
        reg_free(tree->child1->reg);
        reg_free(tree->child2->reg);
        break;

      case RELOP:
        code_gen(tree->child1);
        code_gen(tree->child2);
        tree->reg = reg_alloc();
        if (tree->op_specifier == 1)
          fprintf(tac_code, "slt $%d, $%d, $%d\n", tree->reg, tree->child1->reg, tree->child2->reg);
        if (tree->op_specifier == 5)
          fprintf(tac_code, "slt $%d, $%d, $%d\n", tree->reg, tree->child2->reg, tree->child1->reg);
        if (tree->op_specifier == 6)
          fprintf(tac_code, "sleq $%d, $%d, $%d\n", tree->reg, tree->child2->reg, tree->child1->reg);
        if (tree->op_specifier == 2)
          fprintf(tac_code, "sleq $%d, $%d, $%d\n", tree->reg, tree->child1->reg, tree->child2->reg);
        reg_free(tree->child1->reg);
        reg_free(tree->child2->reg);
        break;

      case INT_TO_FLOAT:
        code_gen(tree->child1);
        tree->reg = reg_alloc();
        if (tree->op_specifier == 1)
          fprintf(tac_code, "inttofl $%d, $%d\n", tree->reg, tree->child1->reg);
        reg_free(tree->child1->reg);
        break;

      case FLOAT_TO_INT:
        code_gen(tree->child1);
        tree->reg = reg_alloc();
        if (tree->op_specifier == 1)
          fprintf(tac_code, "fltoint $%d, $%d\n", tree->reg, tree->child1->reg);
        reg_free(tree->child1->reg);
        break;

      case CALL:
        code_gen_params(tree->child2);
        fprintf(tac_code, "call .%s, %d\n", tree->child1->ref->identifier,  tree->child1->ref->n_args);
        tree->reg = reg_alloc();
        fprintf(tac_code, "pop %d\n", tree->reg);
        break;


      case IF:
        end_label = new_label();
        code_gen(tree->child1);
        tree->reg = reg_alloc();
        fprintf(tac_code, "bzr L%d, $%d\n", end_label, tree->child1->reg);
        reg_free(tree->child1->reg);
        code_gen(tree->child2);
        printLabel(end_label);
        break;

      case IF_ELSE:
        else_label = new_label();
        end_label = new_label();
        code_gen(tree->child1);
        tree->reg = reg_alloc();
        fprintf(tac_code, "bzr L%d, $%d\n", else_label, tree->child1->reg);
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
        fprintf(tac_code, "bzr L%d, $%d\n", end_label, tree->child2->reg);
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
        fprintf(tac_code, "bzr L%d, $%d\n", end_label, tree->child2->reg);
        code_gen(tree->child4);
        code_gen(tree->child3);
        fprintf(tac_code, "jump L%d\n", top_label);
        printLabel(end_label);
        reg_free(tree->child1->reg);
        break;

      case VARDECL:
        break;

      case WRITELN:
        code_gen(tree->child1);
        fprintf(tac_code, "println $%d\n", tree->child1->reg);
        break;

      case WRITE:
        code_gen(tree->child1);
        fprintf(tac_code, "print $%d\n", tree->child1->reg);
        break;

      case FUNCDECL:
        fprintf(tac_code, "%s:\n", tree->ref->identifier);
        code_gen(tree->child2);
        reg_free(tree->child2->reg);
        break;

      case RETURN:
        code_gen(tree->child1);
        fprintf(tac_code, "return $%d\n", tree->child1->reg);
        reg_free(tree->child1->reg);
        break;

      case ASSIGN:
        code_gen(tree->child2);
        printRegs();
        code_gen(tree->child1);
        fprintf(tac_code, "assgn mov $%d, $%d\n", tree->child1->reg, tree->child2->reg);
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
      tree->reg = reg_alloc();
      if (tree->leaf_type == ID_LEAF) tree->reg = symbol_gen(tree->ref);
      if (tree->leaf_type == INT_LEAF) fprintf(tac_code, "load int mov $%d, %d\n", tree->reg, tree->ival);
      if (tree->leaf_type == FLOAT_LEAF) fprintf(tac_code, "load float mov $%d, %f\n", tree->reg, tree->fval);
      if (tree->leaf_type == CHAR_LEAF) fprintf(tac_code, "load char mov $%d, %s\n", tree->reg, tree->sval);
      if (tree->leaf_type == STRING_LEAF) fprintf(tac_code, "load string mov $%d, %s\n", tree->reg, tree->sval);
  }
}
