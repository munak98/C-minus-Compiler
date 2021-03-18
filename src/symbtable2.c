#include "../include/symbtable.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"


int hash(char *str){
  int result = 0;
  int letter;
  while ((letter = *str++))
    result += letter;
  return result%HASHTABLE_SIZE;
}

void initTablesList(){
  tables_list->scope = "global";
  tables_list->block_table = NULL;
  tables_list->func_table = NULL;
}

void initHashArray(sym *array){
  for (int i = 0; i < HASHTABLE_SIZE; i++){
    array[i].identifier = NULL;
    array[i].sym_kind = UNDEF;
    array[i].next = NULL;
  }
}

table *createNewTable(int scope){
  table *newTable = (table *)malloc(sizeof(table));
  newTable->hasharray = (sym *)malloc(sizeof(sym)*HASHTABLE_SIZE);
  initHashArray(newTable->hasharray);
  newTable->scope = scope;
  newTable->bottom = NULL;
  return newTable;
}

meta_scope *createNewMetaScope(char *scope_name){
  meta_scope *newMetaScope = (meta_scope *)malloc(sizeof(meta_scope));
  newMetaScope->scope = scope_name;
  newMetaScope->func_table = NULL;
  newMetaScope->block_table = NULL;
  return meta_scope;
}

void pushMetaScope(meta_scope *scope){
  meta_scope *aux = tables_list;
  tables_list = scope;
  tables_list->bottom = aux;
}

void pushBlockTable(table *block_table){
  tables_list->block_table = block_table;
}

void pushFuncTable(meta_scope *func_table){
  tables_list->func_table = func_table;
}

insert
