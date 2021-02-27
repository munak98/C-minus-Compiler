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
  tables_list = NULL;
}

//creates a new hash table representing a new scope
table *createNewTable(int scope){
  table *newTable = (table *)malloc(sizeof(table));
  newTable->hasharray = (sym *)malloc(sizeof(sym)*HASHTABLE_SIZE);
  initHashArray(newTable->hasharray);
  newTable->scope = scope;
  newTable->bottom = NULL;
  return newTable;
}

//initializes the hash table values
void initHashArray(sym *array){
  for (int i = 0; i < HASHTABLE_SIZE; i++){
    array[i].identifier = NULL;
    array[i].type = UNDEF;
    array[i].next = NULL;
  }
}

//inserts a hash table into the list of symbol tables
void pushTable(table * newTable){
  newTable->bottom = tables_list;
  tables_list = newTable;
}

/*inserts an element in its corresponding symbol table.
To do this, it searches for the symbol table corresponding
to the scope in which the element was found and calls the
insertion function in a table.*/
sym *insert(char *name, int len, int type, int scope){
    table *aux = tables_list;
    while (aux != NULL){
      if (aux->scope == scope) {
        return insertInTable(name, len, type, aux);
      }
      aux = aux->bottom;
    }
    pushTable(createNewTable(scope));
    return insertInTable(name, len, type, tables_list);
}

//inserts an element into a given hash table.
sym *insertInTable(char *name, int len, int type, table *table){
    int index = hash(name);
    if (table->hasharray[index].identifier == NULL){
      table->hasharray[index].identifier = (char *) malloc(len+1);
      for (int i = 0; i <= len; i++){
        table->hasharray[index].identifier[i] = name[i];
      }
      table->hasharray[index].type = type;
      table->hasharray[index].next = NULL;
      return &table->hasharray[index];
    }
    else {
      sym *aux = lookInTable(name, index, table);
      if (aux != NULL) return aux;
      else return pushEntry(createNewEntry(name, len, type), table);
    }
}

//looks for an element in a hash table.
sym *lookInTable(char *name, int index, table *table){
  sym *aux = &table->hasharray[index];
  while (aux != NULL){
    if (strcmp(name, aux->identifier)==0) return aux;
    aux = aux->next;
  }
  return NULL;
}

//creates a new table entry, an element of type sym.
sym *createNewEntry(char *name, int len, int type){
  sym *newEntry = (sym *) malloc(sizeof(sym));
  newEntry->identifier = (char *) malloc(len+1);
  for (int i = 0; i <= len; i++){
    newEntry->identifier[i] = name[i];
  }
  newEntry->type = type;
  newEntry->next = NULL;
  return newEntry;
}

/*inserts an element into a hash table chain.
used only in the event of a collision.*/
sym *pushEntry(sym *newEntry, table *table){
  int index = hash(newEntry->identifier);
  sym *aux = &table->hasharray[index];
  while (aux->next != NULL){
    aux = aux->next;
  }
  aux->next = newEntry;
  return aux->next;
}



//prints a chain from a hash table entry
void showHashArrayChain(sym *list){
  sym *aux = list;
  while (aux != NULL){
    printf("\t%s\n", aux->identifier);
    aux = aux->next;
  }
}

//prints a hash table from the table list
void showHashArray(table * table){
  printf("\tScope %d\n", table->scope);
  for (int i = 0; i < HASHTABLE_SIZE; i++){
    if (table->hasharray[i].identifier != NULL){
      showHashArrayChain(&table->hasharray[i]);
    }
  }
  printf("\n");
}

//prints all hash tables in the table list
int showAllTables(){
  table *aux = tables_list;
  if (aux == NULL) {printf("Empty table.\n"); return 1;}
  printf("\n\nSymbol tables\n");
  while (aux != NULL){
    showHashArray(aux);
    aux = aux->bottom;
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
    }
  }
}

//free all hash tables in the table list
int freeTables(){
  table *aux;
  if (tables_list == NULL) {printf("Empty table.\n"); return 1;}
  while (tables_list != NULL){
    aux = tables_list;
    tables_list = tables_list->bottom;
    freeHashArray(aux);
    free(aux->hasharray);
    free(aux);
  }
  return 0;
}
