#include<stdio.h>
typedef struct queue
{
 int a[5];
 int f,r;
}QUE;
void init(QUE *q)
{
  q->f=4;
  q->r=4;
} 
int EnQueue(QUE *q,int e)
{
 if((q->r+1)%5==q->f) return 0;
 q->r=(q->r+1)%5;
 q->a[q->r]=e;
 return 1;
}
int empty(QUE *q)
{
 return(q->r==q->f);
}
int DeQueue(QUE *q,int *pe)
{
 if(empty(q)) return 0;
 q->f=(q->f+1)%5;
 *pe=q->a[q->f];
 return 1;
} 

void disp(QUE *q)
{
 if(empty(q))
   printf("empty");
 else
  {
   
   int i=q->f%5;
   int j=q->r%5;
   if(i+1<=j)//front <rear
    { i++;
     while(i<=j)
      printf("%d ",q->a[i++]);
    }
 else
   {
    i++;
    while(i<=4)
     printf("%d ",q->a[i++]);
    i=0;
   while(i<=j)
    printf("%d ",q->a[i++]);
   }
}}

main()
{
  QUE q;int ele;
  init(&q);
  EnQueue(&q,12);
  EnQueue(&q,112);
  EnQueue(&q,123);
  EnQueue(&q,126);
  disp(&q);
  printf("\n");
  DeQueue(&q,&ele);
  DeQueue(&q,&ele);
  DeQueue(&q,&ele);
  disp(&q);
  printf("\n");
  EnQueue(&q,32);
  EnQueue(&q,162);
  EnQueue(&q,142);
  disp(&q);
  printf("\n");
}
  
   
  
