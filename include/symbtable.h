#ifndef SYMBTABLE
#define SYMBTABLE

#define UNDEF -1

#define INT_TYPE 139
#define FLOAT_TYPE 140
#define ELEM_TYPE 143
#define SET_TYPE 144

#define FUNCTION 145
#define VARIABLE 146

#define HASHTABLE_SIZE 255


//structure that represents an entry in the symbol table
typedef struct SYMBOL {
	char *identifier;
	int sym_kind;		//var or function
	int var_type;
	int return_type;
	int n_args;
	int *args_type;
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

sym *insert(char *, int);
sym *findRef(char *);
sym *lookInTable(char *, table *);
sym *insertInTable(char *, int, table *);
sym *createNewEntry(char *, int);
sym *pushEntry(sym *, table *);

int showAllTables();
void showHashArray(table * );
void showHashArrayChain(sym *, int);

void freeHashArrayChain(sym *);
void freeHashArray(table * );
int freeTables();

#endif
