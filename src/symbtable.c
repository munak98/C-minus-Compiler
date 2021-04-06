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

//initializes the global variable curr_scope to NULL
void initScopesList(){
  global_scope = newScope("global", 0);
  curr_scope = global_scope;
}

//initializes the hash array to NULL
void initHashArray(sym **array){
  for (int i = 0; i < HASHTABLE_SIZE; i++)
    array[i] = NULL;
}

//check if the hash array is empty
int isEmpty(sym **array){
  for (int i = 0; i < HASHTABLE_SIZE; i++)
    if (array[i] != NULL) return 1;
  return 0;
}

//creates a new table representing a new scope
table *newScope(char *name, int level){
  table *newTable = (table *)malloc(sizeof(table));
  newTable->hasharray = malloc(HASHTABLE_SIZE*sizeof(sym*));
  initHashArray(newTable->hasharray);
  newTable->name = name;
  newTable->level = level;
  newTable->childs = NULL;
  newTable->father = NULL;
  newTable->brothers = NULL;
  return newTable;
}


//inserts the new table for the scope in the current scope
void pushScope(table *newScope){
  table *aux = curr_scope;
  newScope->brothers = aux->childs;
  newScope->father = aux;
  aux->childs = newScope;
  curr_scope = newScope;
}


//creates a new table entry, an element of type sym.
sym *newEntry(char *name, int type, int kind){
  sym *entry = (sym *) malloc(sizeof(sym));
  entry->identifier = name;
  entry->sym_kind = kind;
  if (kind == VARIABLE) entry->var_type = type;
  else entry->return_type = type;
  entry->next = NULL;
  return entry;
}

//insert entry if there is no other declaration
//for this identifier in all visible levels
sym *insertInScope(sym *ref, table *table){
  sym *exist = lookInAllLevels(ref->identifier, table);
  if (exist == NULL) {pushEntry(ref, table); return ref;}
  return exist;
}


/*inserts an element into a hash table chain.*/
void pushEntry(sym *entry, table *scope){
  int index = hash(entry->identifier);
  sym *aux = scope->hasharray[index];
  if (aux == NULL) {
    scope->hasharray[index] = entry;
  }
  else{
    while (aux != NULL)  {
      aux = aux->next;
    }
    aux = entry;
  }
}


//looks for an element in a hash table by name.
sym *lookInScopeLevel(char *name, table *table){
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

//looks for an element in scope and in all above scopes
sym *lookInAllLevels(char *name, table *scope){
  sym *exists;
  while (scope != NULL){
    exists = lookInScopeLevel(name, scope);
    if (exists != NULL) return exists;
    scope = scope->father;
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
void showHashArrayChain(sym *list, int level){
  sym *aux = list;
  while (aux != NULL){
    switch (aux->sym_kind) {
      case UNDEF: printIdent(level); printf("%-10s\t%s\n", "UNDEF", aux->identifier); break;
      case FUNCTION:
        printIdent(level);
        printf("%-10s\t%-20.20s \treturn type = %s, ", "FUNCTION", aux->identifier, printType(aux->return_type));
        printfArgsType(aux->n_args, aux->args_type);
        break;

      case VARIABLE:
        printIdent(level);
        printf("%-10s\t", "VARIABLE");
        printf("%-20.20s \ttype = %s\n", aux->identifier, printType(aux->var_type));
        break;
    }
    aux = aux->next;
  }
}

void printIdent(int level){
  for (int i = 0; i < level; i++) printf("\t");
}

//prints a hash table from the scopes list
void showHashArray(table * table){
  if (isEmpty(table->hasharray) == 0) return;
  printIdent(table->level);
  printf("%s level %d\n", table->name, table->level);
  printIdent(table->level+1);
  printf("%-11s\t%-20s\t%-50s\n","Entry type","Identifier", "Information");
  printIdent(table->level+1);
  printf("-----------\t--------------------\t--------------------------------------------------\n");
  for (int i = 0; i < HASHTABLE_SIZE; i++){
    if (table->hasharray[i] != NULL){
      showHashArrayChain(table->hasharray[i], table->level+1);
    }
  }
  printf("\n\n");
}


//prints all hash tables in the scopes list
void showTables(table *scope){
  if (scope == NULL) return;
  if (strcmp(scope->name, "global") == 0) printf("\n\nSymbol table\n\n");
  showHashArray(scope);
  showTables(scope->childs);
  showTables(scope->brothers);
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

//free a hash table from the scopes list
void freeHashArray(table * table){
  for (int i = 0; i < HASHTABLE_SIZE; i++)
    if (table->hasharray[i] != NULL)
      freeHashArrayChain(table->hasharray[i]);
}

//free all hash tables in the scopes list
void freeTables(table *scope){
  if (scope == NULL) return;
  freeTables(scope->childs);
  freeTables(scope->brothers);
  freeHashArray(scope);
  free(scope->hasharray);
  free(scope);
}
