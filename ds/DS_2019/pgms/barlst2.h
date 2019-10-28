#define MAX 3
typedef struct node
{
  int info;
  struct node *next;
}NODE;

NODE *head;
typedef struct linkedlst
{
    NODE* head;
}LINKEDLST;

 void init(LINKEDLST *pal);
 int append(LINKEDLST *pal,int ele);
 int delLast(LINKEDLST  *pal,int *pe);
 int prepend(LINKEDLST *pal,int ele);
 int delFirst(LINKEDLST  *pal,int *pe);
 void disp(LINKEDLST *);
  

