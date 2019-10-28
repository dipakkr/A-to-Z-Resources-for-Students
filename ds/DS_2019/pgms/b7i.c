#include<stdio.h>
#include<stdlib.h>
#include"b7.h"

void init(NODE **h)
{
 *h=NULL;
}

void create(NODE** h)
{
  int cnt=0;
  NODE * temp;
  do{
     temp=(NODE*)malloc(sizeof(NODE));
     printf("ele");
     scanf("%d",&temp->info);
     temp->next=*h;
     *h=temp;
     cnt++;
    }while(cnt<6); 
}
int delAt(NODE** h,int* pe,int pos)
{
  if(*h==NULL) return 0;//empty list
  NODE *p,*q; int cnt=1;
  p=*h;
  if(pos==1) //first node deletion
   {
    *pe=p->info;
    *h=p->next;
     free(p);
    return 1;
    }
  //traverse
  while(p!=NULL && cnt!=pos)
   {
     q=p;
     p=p->next;
     cnt++;
   }
  if(p==NULL)
   return 0;//pos out of list
  //delet node pointed by p
  q->next=p->next;
  *pe=p->info;
  free(p);
  return 1;
}
void disp(NODE* h)
{
 if(h==NULL)
   printf("empty");
 else
  while(h!=NULL)
   {
    printf("%d ",h->info);
    h=h->next;
   }
} 
int insAfter(NODE** h,int ele,int ginfo)
{
 if(*h==NULL) return 0;
 NODE *p,*temp;
 p=*h;
 temp=(NODE*)malloc(sizeof(NODE));
 temp->info=ele;
 while(p!=NULL && p->info!=ginfo)
{
 p=p->next;
}
if(p==NULL)
 {
  //free(temp);
  return 0;
 }
temp->next=p->next;
p->next=temp;
return 1; 
}










 
