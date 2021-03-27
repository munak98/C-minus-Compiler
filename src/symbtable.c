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
  global_scope = createNewScope("global");
  tables_list = global_scope;
}

//initializes the hash array to NULL
void initHashArray(sym **array){
  for (int i = 0; i < HASHTABLE_SIZE; i++)
    array[i] = NULL;
}

//creates a new table representing a new scope
table *createNewScope(char *scope_name){
  table *newTable = (table *)malloc(sizeof(table));
  newTable->hasharray = malloc(HASHTABLE_SIZE*sizeof(sym*));
  initHashArray(newTable->hasharray);
  newTable->scope_name = scope_name;
  newTable->next_scope = NULL;
  return newTable;
}


//inserts the new table for the scope in tables_list
void pushScope(table *newScope){
  table *aux = tables_list;
  newScope->next_scope = aux;
  tables_list = newScope;
}


//creates a new table entry, an element of type sym.
sym *createNewEntry(char *name, int level){
  sym *newEntry = (sym *) malloc(sizeof(sym));
  newEntry->identifier = name;
  newEntry->sym_kind = UNDEF;
  newEntry->level_found = level;
  newEntry->next = NULL;
  return newEntry;
}

//insert entry if there is no other declaration
//for this identifier in all visible levels
sym *insertInScope(sym *ref, table *table){
  sym *exist = lookInAllLevels(ref->identifier, ref->level_found);
  if (exist == NULL) {pushEntry(ref, table); return ref;}
  return exist;
}


/*inserts an element into a hash table chain.*/
void pushEntry(sym *newEntry, table *table){
  int index = hash(newEntry->identifier);
  sym *aux = table->hasharray[index];
  if (aux == NULL) {
    table->hasharray[index] = newEntry;
  }
  else{
    while (aux != NULL)  {
      aux = aux->next;
    }
    aux = newEntry;
  }
}

//looks for an element in a hash table by name and level.
sym *lookInScopeLevel(char *name, int level, table *table){
  int index = hash(name);
  sym *aux = table->hasharray[index];
  while (aux != NULL){
    if (strcmp(name, aux->identifier)==0 && level == aux->level_found){
      return aux;
    }
    aux = aux->next;
  }
  return NULL;
}

//looks for an element in a hash table by name and level.
sym *lookInAllLevels(char *name, int level){
  sym *exists;
  while (level > 0){
    exists = lookInScopeLevel(name, level, tables_list);
    if (exists != NULL) return exists;
    level -= 1;
  }
  exists = lookInGlobal(name);
  if (exists != NULL) return exists;
  return NULL;
}


sym *lookInGlobal(char *name){
  table *table = global_scope;
  int index = hash(name);
  sym *aux = table->hasharray[index];
  while (aux != NULL){
    if (strcmp(name, aux->identifier)==0){
      return aux;
    }
    aux = aux->next;
  }
  return NULL;
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
      case UNDEF: printf("\t      \t%-11d\t%-10s\t%s\n", aux->level_found, "UNDEF", aux->identifier); break;
      case FUNCTION:
        printf("\t      \t%-11d\t%-10s\t%-20.20s \treturn type = %s, ", aux->level_found, "FUNCTION", aux->identifier, printType(aux->return_type));
        printfArgsType(aux->n_args, aux->args_type);
        break;

      case VARIABLE:
        printf("\t      \t%-11d\t%-10s\t", aux->level_found, "VARIABLE");
        printf("%-20.20s \ttype = %s\n", aux->identifier, printType(aux->var_type));
        break;
    }
    aux = aux->next;
  }
}

//prints a hash table from the table list
void showHashArray(table * table){
  printf("\tScope %s\n", table->scope_name);
  printf("\t      \t%11s\t%10s\t%-20s\t%-50s\n", "Scope level", "Entry type","Identifier", "Information");
  printf("\t      \t-----------\t----------\t--------------------\t--------------------------------------------------\n");
  for (int i = 0; i < HASHTABLE_SIZE; i++){
    if (table->hasharray[i] != NULL){
      showHashArrayChain(table->hasharray[i]);
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
    showHashArray(aux);
    aux = aux->next_scope;
  }
  return 0;
}

//free a chain from a hash table entry
void freeHashArrayChain(sym *list){
  sym *aux;
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
    if (table->hasharray[i] != NULL){
      freeHashArrayChain(table->hasharray[i]);
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
