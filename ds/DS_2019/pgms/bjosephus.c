#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
 int info;
 struct node *next;
}NODE;
typedef struct clist
{
 NODE *head;
 NODE *tail;
 int n;
}CLIST;

void init(CLIST *cl)
{
 cl->head=NULL;
 cl->tail=NULL;
 cl->n=0;
}

void create(CLIST *cl)
{
  NODE *temp; int wish;
  temp=(NODE*)malloc(sizeof(NODE));
  printf("enter ele");
  scanf("%d",&temp->info);
  temp->next=temp;
  cl->head=temp;
  cl->tail=temp;
  cl->n=1;
  do{
     temp=(NODE*)malloc(sizeof(NODE));
     printf("enter ele");
     scanf("%d",&temp->info);   
     temp->next=cl->head;
     cl->tail->next=temp;
     cl->head=temp;
     cl->n++;
     printf("do you want to add more 1yes 0 No\n");  
     scanf("%d",&wish);
    }while(wish);
}
 
void disp(CLIST *cl)
{
  NODE *p=cl->head;
  if(p==NULL)
    printf("empty");
  else
   {
    while(p->next!=cl->head)
     {
      printf("%d ",p->info);
      p=p->next;
     }
    printf("%d",p->info);
   }
}
int winner(CLIST *cl,int start,int skip)
{
  NODE *p,*q;
  p=cl->head;
  int cnt=1;
  while(cnt!=start){p=p->next; cnt++;}
  
  while(p!=p->next)
   {
    cnt=1;
    while(cnt!=skip)
     {
       q=p;
       p=p->next;
       cnt++;
     }
    q->next=p->next;
    free(p);
    p=q->next;
   }
  int e=p->info;
  free(p);cl->head=NULL;cl->tail=NULL;
  return e;
 }
     

main()
{
  CLIST clst;
  int start,skip;
  init(&clst);
  create(&clst);
  disp(&clst);
  printf("enter the start and skip number");
  scanf("%d %d",&start,&skip);
  start=rand()%cl->n;
  skip=rand()%cl->n;
  printf("%d %d ",start,skip);   
  int res=winner(&clst,start,skip);
  printf("%d is the winner",res);
 }



