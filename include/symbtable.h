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
	int level_found;
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
	char *scope_name;
  struct TABLE *next_scope;
} table;

//variable that stores the head of the list of tables
table *tables_list;
table *global_scope;

//functions for manipulating the symbol table. More details in the code that implements them
void initTablesList();
void initHashArray(sym *);

table *createNewScope(char *);
void pushScope(table *);

sym *createNewEntry(char *, int);
sym *insertInScope(sym *, table *);
void pushEntry(sym *, table *);

sym *lookInGlobal(char *name);
sym *lookInAllScopes(char *name, int level);
sym *lookInScopeLevel(char *name, int level, table *table);




int showAllTables();
void showHashArray(table * );
void showHashArrayChain(sym *);

void freeHashArrayChain(sym *);
void freeHashArray(table * );
int freeTables();

#endif
