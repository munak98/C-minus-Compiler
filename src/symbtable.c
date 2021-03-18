#include "../include/symbtable.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/*hash function used in symbol tables.
The hash of a string is the sum of
its characters modulo the size of the table.*/
int hash(char *str){
  int result = 0;
  int letter;
  while ((letter = *str++))
    result += letter;
  return result%HASHTABLE_SIZE;
}

//initializes the global variable tables_list to NULL
void initTablesList(){
  global_scope = createNewTable("global", 0);
  tables_list = global_scope;
}

//initializes the hash table values
void initHashArray(sym *array){
  for (int i = 0; i < HASHTABLE_SIZE; i++){
    array[i].identifier = NULL;
    array[i].sym_kind = UNDEF;
    array[i].next = NULL;
  }
}

//creates a new hash table representing a new scope
table *createNewTable(char *scope_name, int level){
  table *newTable = (table *)malloc(sizeof(table));
  newTable->hasharray = (sym *)malloc(sizeof(sym)*HASHTABLE_SIZE);
  initHashArray(newTable->hasharray);
  newTable->level = level;
  newTable->scope_name = scope_name;
  newTable->next_scope = NULL;
  return newTable;
}


//inserts a hash table into the list of symbol tables
void pushScope(table *newTable){
  newTable->next_scope = tables_list;
  tables_list = newTable;
}

sym *findRef(char *name){
  sym *ref;
  ref = lookInScope(name, tables_list);
  if (ref != NULL) return ref;
  ref = lookInScope(name, global_scope);
  if (ref != NULL) return ref;
  return NULL;
}


void insertInScope(sym *ref, table *table){
  sym *exist = lookInScope(ref->identifier, table);
  if (exist == NULL){
    if (table->hasharray[hash(ref->identifier)].identifier == NULL){
      table->hasharray[hash(ref->identifier)] = *ref;
    }
    else {pushEntry(ref, table);}
  }
}



//looks for an element in a hash table.
sym *lookInScope(char *name, table *table){
  int index = hash(name);
  sym *aux = &table->hasharray[index];
  if (aux->identifier == NULL) return NULL;
  while (aux != NULL){
    if (strcmp(name, aux->identifier)==0) return aux;
    aux = aux->next;
  }
  return NULL;
}

//creates a new table entry, an element of type sym.
sym *createNewEntry(char *name){
  sym *newEntry = (sym *) malloc(sizeof(sym));
  newEntry->identifier = name;
  newEntry->sym_kind = UNDEF;
  newEntry->next = NULL;
  return newEntry;
}

/*inserts an element into a hash table chain.
used only in the event of a collision.*/
void pushEntry(sym *newEntry, table *table){
  int index = hash(newEntry->identifier);
  sym *aux = &table->hasharray[index];
  while (aux->next != NULL){
    aux = aux->next;
  }
  aux->next = newEntry;
  return;
}

char *printType(int type){
  switch (type) {
    case UNDEF: return "undef";
    case INT_TYPE: return "int";
    case FLOAT_TYPE: return "float";
    case SET_TYPE: return "set";
    case ELEM_TYPE: return "elem";
  }
  return NULL;
}

void printfArgsType(int nargs, int *args_type){
  printf("args types = [ ");
  for (int i = 0; i < nargs; i++){
    printf("%s ", printType(args_type[i]));
  }
  printf("]\n");
}

//prints a chain from a hash table entry
void showHashArrayChain(sym *list){
  sym *aux = list;
  while (aux != NULL){
    switch (aux->sym_kind) {
      case UNDEF: printf("\t      \t%d\t%-10s\t%s\n", aux->level_found, "UNDEF", aux->identifier); break;
      case FUNCTION:
        printf("\t      \t%d\t%-10s\t%-20.20s \treturn type = %s, ", aux->level_found, "FUNCTION", aux->identifier, printType(aux->return_type));
        printfArgsType(aux->n_args, aux->args_type);
        break;

      case VARIABLE:
        printf("\t      \t%d\t%-10s\t", aux->level_found, "VARIABLE");
        printf("%-20.20s \ttype = %s\n", aux->identifier, printType(aux->var_type));
        break;
    }
    aux = aux->next;
  }
}

//prints a hash table from the table list
void showHashArray(table * table){
  printf("\tScope %s\n", table->scope_name);
  printf("\t      \t%10s\t%-20s\t%-50s\n", "Entry type","Identifier", "Information");
  printf("\t      \t----------\t--------------------\t--------------------------------------------------\n");
  for (int i = 0; i < HASHTABLE_SIZE; i++){
    if (table->hasharray[i].identifier != NULL){
      showHashArrayChain(&table->hasharray[i]);
    }
  }
  printf("\n\n");
}



//prints all hash tables in the table list
int showAllTables(){
  table *aux = tables_list;
  if (aux == NULL) {printf("Empty table.\n"); return 1;}
  printf("\n\nSymbol tables\n");
  while (aux != NULL){
    printf("%s\n", aux->scope_name);
    showHashArray(aux);
    aux = aux->next_scope;
  }
  return 0;
}

//free a chain from a hash table entry
void freeHashArrayChain(sym *list){
  sym *aux;
  list = list->next;
  while (list != NULL){
    aux = list;
    list = list->next;
    if (aux->sym_kind == FUNCTION) free(aux->args_type);
    free(aux->identifier);
    free(aux);
  }
}

//free a hash table from the table list
void freeHashArray(table * table){
  for (int i = 0; i < HASHTABLE_SIZE; i++){
    if (table->hasharray[i].identifier != NULL){
      freeHashArrayChain(&table->hasharray[i]);
      free(table->hasharray[i].identifier);
      if (table->hasharray[i].sym_kind == FUNCTION) free(table->hasharray[i].args_type);
    }
  }
}

//free all hash tables in the table list
int freeTables(){
  table *aux;
  if (tables_list == NULL) {printf("Empty table.\n"); return 1;}
  while (tables_list != NULL){
    aux = tables_list;
    tables_list = tables_list->next_scope;
    freeHashArray(aux);
    free(aux->hasharray);
    free(aux);
  }
  return 0;
}
