#ifndef SYMBTABLE
#define SYMBTABLE

#define UNDEF -1

#define STRING_TYPE -2
#define CHAR_TYPE -3
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
	int type;
	int n_args;
	int *args_type;
	int reg;

  struct SYMBOL *next;
} sym;

//structure that represents the table of symbols of a scope
typedef struct TABLE {
	sym **hasharray;
	char *name;
	int level;
	struct TABLE *father;
  struct TABLE *childs;
	struct TABLE *brothers;
} table;

//variable that stores the head of the list of tables
table *curr_scope;
table *global_scope;

//functions for manipulating the symbol table. More details in the code that implements them
void initScopesList();
void initHashArray(sym **);

table *newScope(char *, int);
void pushScope(table *);

sym *newEntry(char *, int, int);
sym *insertInScope(sym *, table *);
void pushEntry(sym *, table *);

sym *lookInGlobal(char *name);
sym *lookInAllLevels(char *name, table *scope);
sym *lookInScopeLevel(char *name, table *table);

char *printType(int type);
void printIdent(int level);

void showTables(table *);
void showChilds(table *);
void showHashArray(table * );
void showHashArrayChain(sym *, int);

void freeHashArrayChain(sym *);
void freeHashArray(table * );
void freeTables(table *);

#endif
