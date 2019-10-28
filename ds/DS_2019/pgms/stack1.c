#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
 int info;
 struct node *next;
}NODE;

void init(NODE **h)
 {
  *h=NULL;
}
int push(NODE **h,int e)
{
 NODE *temp;
  temp=(NODE*)malloc(sizeof(NODE));
  if(temp==NULL) return 0;
  temp->info=e;
  temp->next=*h;
  *h=temp;
  return 1;
 }
int pop(NODE **h,int *pe)
{  NODE *p=*h;
  if(*h==NULL) return 0;
  *pe=p->info;
  *h=p->next;
  free(p);
  return 1;
 } 
int isEmpty(NODE *h)
{
 return(h==NULL);
}

main()
{
 NODE *top; int ele,res;
  init(&top);
  push(&top,23);
  push(&top,56);
  res=pop(&top,&ele);
  printf("%d",ele);
}

 

