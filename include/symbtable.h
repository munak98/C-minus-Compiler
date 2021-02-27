#ifndef SYMBTABLE
#define SYMBTABLE

#define UNDEF -1
#define INT_TYPE 139
#define FLOAT_TYPE 140
#define STR_TYPE 141
#define CHAR_TYPE 142
#define ELEM_TYPE 143
#define SET_TYPE 144
#define CONST_INT_TYPE 145
#define CONST_FLOAT_TYPE 146
#define CONST_SET_TYPE 147
#define HASHTABLE_SIZE 255


//structure that represents an entry in the symbol table
typedef struct SYMBOL {
	char *identifier;
	int type;
  struct SYMBOL *next;
} sym;

//structure that represents the table of symbols of a scope
typedef struct TABLE {
	sym *hasharray;
	int scope;
  struct TABLE *bottom;
} table;

//variable that stores the head of the list of tables
table *tables_list;


//functions for manipulating the symbol table. More details in the code that implements them
void initTablesList();
void initHashArray(sym *);

table *createNewTable(int);
void pushTable(table *);

sym *insert(char *, int, int, int);
sym *lookInTable(char *, int, table *);
sym *insertInTable(char *, int, int, table *);
sym *createNewEntry(char *, int, int);
sym *pushEntry(sym *, table *);

int showAllTables();
void showHashArray(table * );
void showHashArrayChain(sym *);

void freeHashArrayChain(sym *);
void freeHashArray(table * );
int freeTables();

#endif
