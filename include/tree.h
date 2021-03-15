#ifndef TREE
#define TREE

enum nodeType {CONST, REF, BINARY, CALL, UNARY, SEMICOLON, NON}
enum unaryOp {WRITE, WRITELN, IS_SET}
enum binaryOp {EXISTS, IN}


typedef struct BINARY_NODE {
  int operator;
  node *first;
  node *second;
} binary;

typedef struct UNARY_NODE {
  int operator;
  node *first;
} unary;

typedef struct FUNCDECL
{
  int return_type;
  sym *ref;
  node *arguments;
  node *funcBody;
} funcDecl_node;

typedef struct VARDECL
{
  int varType;
  node *varList;
} varDecl_node;

typedef struct CALL
{
  node *arguments;
  sym *ref;
} call_node;

typedef struct REF
{
  sym *ref;
} ref_node;

typedef struct IF
{
  node *condition;
  node *if_body;
  node *else_body;
} if_node;

typedef struct FOR {
  node *begin;
  node *condition;
  node *increment;
  node *body;
} for_node;

typedef struct FORALL {
  node *elem;
  node *set;
  node *body;
} forall_node;

typedef struct ASSIGN {
  sym *ref;
  node *value;
} assignment_node;

typedef struct CONST{
  int type;
  int ival;
  float fval;
  char cval;
  char *sval;
} constant_node;


typedef struct NODE{
  int node_type;
  constant_node *constant;
  sym *ref;
  call_node *call;
  binary_node *binary;
  unary_node *unary;
  assignment_node *assign;
  if_node *if;
  for_node *for;
  forall_node *forall;
  funcDecl_node *funcDecl_node;
} node;


node *createConstNode(int info, int ival, float fval, char cval, char *sval);
node *createRefNode(sym *ref);
node *createBinaryNode(int operator, node *first, node *second);
node *createCallNode(node *arguments, sym *ref);
node *createUnaryNode(int operator, node *first);
node *createAssignNode(sym *ref, node *value);
node *createReadNode(sym *ref);
node *createIfNode(node * condition, node *if_body, node *else_body);
node *createForNode(node * begin, node *condition, node *increment, node *body);
#endif
