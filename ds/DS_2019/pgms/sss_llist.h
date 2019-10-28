typedef struct node
{
  int info;
  struct node *next;
}NODE;
typedef struct llist
{
 NODE *head;
}LLIST;
void init(LLIST*);
void insFront(LLIST*,int);
int delFront(LLIST*,int*);
void disp(LLIST*);
int findFirst(LLIST*,int);
int size(LLIST*);

