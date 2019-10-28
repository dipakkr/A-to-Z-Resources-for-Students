#include"sss_ex13.h"
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void create(NODE** h){
 NODE *temp;int cnt=0;
 do{
 temp=(NODE*)malloc(sizeof(NODE));
 printf("ele");
 scanf("%d",&temp->info);
 temp->next=*h;
 *h=temp;cnt++;
 }while(cnt<6);

}
int delAt(NODE** h,int *e,int pos)
{ NODE *p,*q;int cnt;
  if(*h==NULL) return 0;
  p=*h;
  if(pos==1)
   {  
     *e=p->info;
     *h=(*h)->next;
      free(p);
      return 1;
   }
  cnt=1;
  while(p!=NULL && cnt!=pos)
    {cnt++;q=p;p=p->next;}
     if(p==NULL) return 0;
     q->next=p->next;
     *e=p->info;
     free(p);
 }

void rev(NODE **h)
{
 NODE *p,*q,*r;
 r=*h;
 q=r->next;p=q->next;r->next=NULL;
 while(p!=NULL)
  {
    q->next=r;
    r=q;
    q=p;
    p=p->next;
  }
  q->next=r;
 *h=q;
}
int cnt_nodes(NODE *h)
{
  int cnt=0;
 while(h!=NULL){cnt++;h=h->next;}
 return cnt;
}
void revhalf(NODE **h)
{
  int n=cnt_nodes(*h);
  int m=round(n/2.0);
  printf("%d %d",n,m);
  
  int cnt=2;
  NODE *p,*q,*r,*t;
  t=*h;
  r=*h;
  q=r->next;
  p=q->next;
  r->next=NULL;
  while(cnt!=m)
   {
     q->next=r;
     r=q;
     q=p;
     p=p->next;
     cnt++;
   }
    q->next=r;
    *h=q;
     r=p;q=p->next;
     p=q->next;
     r->next=NULL;
    cnt=m+1;
    while(cnt!=n)
     {
      //printf("\n %d %d %d %d %d",p->info,q->info,r->info,cnt,n);
     q->next=r;
     //printf("\n %d %d %d %d %d",p->info,q->info,r->info,cnt,n);
     r=q;
     q=p;
     if(p!=NULL)
     p=p->next;
     cnt++;
     //printf("\n %d %d %d %d %d",p->info,q->info,r->info,cnt,n);
     }
     t->next=r;
  }
int insOrder(NODE** h,int e)
{
 NODE *temp,*p,*q;
 temp=(NODE*)malloc(sizeof(NODE));
 if (temp==NULL) return 0;
 temp->info=e;
 p=*h;
 if(p==NULL || e<p->info)
  {
   temp->next=*h;
   *h=temp;
  return 1;
 }
 while(p!=NULL && p->info<e)
  {
    q=p;
    p=p->next;
 }
 q->next=temp;
 temp->next=p;
 return 1;
}

 
int checkorder(NODE *p) 
{ 
  return (
          (p == NULL) || 
          (p->next == NULL) || 
          (( p->info <= p->next->info) && checkorder(p->next))
         ); 
}
void disp(NODE* h){
  while(h!=NULL){
  printf("%d ",h->info);
  h=h->next;
}
}
