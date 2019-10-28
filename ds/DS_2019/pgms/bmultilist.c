#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
 int rno;
 int sno;
 int marks;
 struct node *st_next,*sb_next;
}NODE;
typedef struct stlist
{
 char st_name[20];
 NODE *head;
}STLIST;
typedef struct sublist
{
 char sub_name[20];
 NODE *head;
}SUBLIST;

void init1(STLIST *pst)
{
 for(int i=0;i<5;i++)
  {
   pst[i].head=NULL;
   printf("enter student name");
   scanf("%s",pst[i].st_name);
  } 
}
void init2(SUBLIST *psb)
{
 for(int i=0;i<5;i++)
  {
   psb[i].head=NULL;
   printf("enter sub name");
   scanf("%s",psb[i].sub_name);
  } 
}
void create(STLIST *pst,SUBLIST *psb)
{
  NODE *temp;int i,j,wish;
  do{
  temp=(NODE*)malloc(sizeof(NODE));
  printf("enter to which student and which subject");
  scanf("%d %d",&i,&j);
  printf("enter rno sub num marks");
  scanf("%d %d %d",&temp->rno,&temp->sno,&temp->marks);
  NODE *p=pst[i].head;
  temp->sb_next=p;
  pst[i].head=temp;
  NODE *q=psb[j].head;
  temp->st_next=q;
  psb[j].head=temp;
 printf("do you want to add one more 1 yes 0 No");
 scanf("%d",&wish);
 }while(wish);
   
}
void disp1(STLIST *pst,int stnum)
{
 NODE *p=pst[stnum].head;
 printf("%s",pst[stnum].st_name);
 while(p!=NULL)
 {
  printf("%d %d %d\n ",p->rno,p->sno,p->marks);
  p=p->sb_next;
 }
}
void disp2(SUBLIST *psb,int subnum)
{
 NODE *p=psb[subnum].head;
printf("%s",psb[subnum].sub_name);
 while(p!=NULL)
 {
  printf("%d %d %d\n ",p->rno,p->sno,p->marks);
  p=p->st_next;
}
}

main()
{
 STLIST st[5];
 SUBLIST sb[5];
 init1(st);
 init2(sb);
 create(st,sb);
 disp1(st,2);
 disp2(sb,3);
}



