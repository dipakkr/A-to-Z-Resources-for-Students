#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
 int info;
 struct node *prev,*next;
}NODE;
typedef struct dlist
{
 NODE *head;
}DLST;
void init(DLST *dl)
{
 dl->head=NULL;
}
int  insOrder(DLST *dl,int e)
{

  NODE *temp;
  temp=(NODE*)malloc(sizeof(NODE));
  temp->info=e;
  if(temp==NULL) return 0;
  if(dl->head==NULL || temp->info<dl->head->info)
    {temp->prev=NULL;temp->next=dl->head;
     if(dl->head!=NULL)
       dl->head->prev=temp;
     dl->head=temp;
     return 1;
    }
  NODE *p=dl->head;
 while(p->next!=NULL && p->info<temp->info)
  { p=p->next;
  }
 if(p->info>temp->info)
  {
    temp->prev=p->prev;
    temp->next=p;
    p->prev->next=temp;
    p->prev=temp;
   }
 else
  {
   temp->prev=p;
   temp->next=NULL;
   p->next=temp;
  }
  return 1;
}
void disp(DLST *dl)
{
  if(dl->head==NULL) printf("empty");
  NODE *p=dl->head;
  while(p!=NULL)
   {
    printf("%d ",p->info);
    p=p->next;
   }
}
main()
{
  DLST dl;
  init(&dl);
  insOrder(&dl,34);
  insOrder(&dl,345);
  insOrder(&dl,434);
  insOrder(&dl,334);
  insOrder(&dl,38);
  insOrder(&dl,134);
  disp(&dl);
  printf("\n");
  insOrder(&dl,13);
  insOrder(&dl,534);
  disp(&dl);
}

