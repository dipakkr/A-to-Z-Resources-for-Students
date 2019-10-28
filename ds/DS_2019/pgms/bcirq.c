#include<stdio.h>
#define MAX 5
typedef struct queue
{
 int a[MAX];
 int front,rear;
}QUE;

void init(QUE *q)
{
 q->front=MAX-1;
 q->rear=MAX-1;
}
int empty(QUE *q)
{
  return (q->front==q->rear);
}
int full(QUE *q)
{
  return ((q->rear+1)%MAX==q->front);
}
int EnQueue(QUE *q,int e)
{
  if(full(q)) return 0;
  q->rear=(q->rear+1)%MAX;
  q->a[q->rear]=e;
  return 1;
}
int DeQueue(QUE *q,int *pe)
{
  if(empty(q)) return 0;
  q->front=(q->front+1)%MAX;
  *pe=q->a[q->front];
   return 1;
}

void disp(QUE *q)
{
 if(empty(q)) printf("empty");
 int i=(q->front+1)%MAX;
 int j=(q->rear+1)%MAX
 while(i!=j)
  {
   printf("%d ",q->a[i]);
   i=(i+1)%MAX;
  }
  
}
main()
{
  QUE q;
  int ele,ch,res;
  init(&q);
  do{
     printf("1. Enqueue 2 Dequeue 3 empty 4 full 5 display\n");
     scanf("%d",&ch);
     switch(ch)
      {
        case 1:   printf("ele");
                 scanf("%d",&ele);
                 EnQueue(&q,ele); 
                 break;
        case 2: res=DeQueue(&q,&ele);
                if(res) printf("empty");
                else printf("Not Empty");
                 break;
        case 3: if(empty(&q))
                 printf("empty");
                else
                 printf("Not empty");
                 break;
        case 4:if(full(&q))
                printf("full");
               else
                printf("Not full");
                 break;
        case 5: disp(&q);
                 break;
    }}while(ch<6);
}

