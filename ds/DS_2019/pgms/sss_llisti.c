#include<stdio.h>
#include<stdlib.h>
#include"sss_llist.h"
void init(LLIST* pl){
pl->head=NULL;
}
NODE* makeNode(int e)
{ NODE*temp;
temp=(NODE*)malloc(sizeof(NODE));
if(temp!=NULL)
  temp->info=e;
return temp; 
}
 
void insFront(LLIST* pl,int e){
  NODE*temp;
temp=makeNode(e);
temp->next=pl->head;
pl->head=temp; 
}
int delFront(LLIST* pl,int* e){
if(pl->head==NULL) return 0;
NODE* p=pl->head;
*e=p->info;
pl->head=p->next;
free(p);
return 1;
}

void disp(LLIST* pl){
 if(pl->head==NULL) printf("empty");
 NODE *p=pl->head;
 while(p!=NULL)
{
 printf("%d ",p->info);
 p=p->next;
}}

int findFirst(LLIST* pl,int num)
{
  if (pl->head==NULL) return 1;
  NODE* p=pl->head;
  while(p!=NULL && p->info!=num) p=p->next;
  if(p==NULL) return 1;
  return 0;
}
int size(LLIST* pl)
{ int cnt=0;
  if (pl->head==NULL) return 0;
  NODE* p=pl->head;
  while(p!=NULL) {p=p->next;cnt++;}
   return cnt;
 }
