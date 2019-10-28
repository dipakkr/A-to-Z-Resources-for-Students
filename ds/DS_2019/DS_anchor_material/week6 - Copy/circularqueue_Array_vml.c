#include <stdio.h>
#include<stdlib.h>

typedef struct 
 {
   int *data; 
   int front,rear;
   int size;
  }queue;
void initq(queue *pq)
{

pq->front =pq->rear =-1;
pq->data=malloc(sizeof(int)*pq->size);
}
int isFull(queue *pq)// can use queue q
{
    if( (pq->front == pq->rear + 1) || (pq->front == 0 && pq->rear == pq->size-1)) return 1;
    return 0;
}
int isEmpty(queue *pq)// can use queue q
{
    if(pq->front == -1) return 1;
    return 0;
}
int enQueue(queue *pq,int element)
{
    if(!isFull(pq)) 
    
    {
        if(pq->front == -1) pq->front = 0;
        pq->rear = (pq->rear + 1) % pq->size;
        pq->data[pq->rear] = element;
        printf("\n Inserted -> %d", element);
        return 1;
    }
else
     {
     printf("\n Queue is full!! \n");
     return -1;
    }
}
int deQueue(queue *pq)
{
    int element;
    if(!isEmpty(pq)) {
        element = pq->data[pq->front];
        if (pq->front == pq->rear){
            pq->front = -1;
            pq->rear = -1;
        } /* Q has only one element, so we reset the queue after dequeing it. ? */
        else {
            pq->front = (pq->front + 1) % pq->size;
            
        }
        printf("\n Deleted element -> %d \n", element);
        return(element);
    }
 else
  {
        printf("\n Queue is empty !! \n");
        return(-9999);
    } 

}
void display(queue q)
{
    int i;
    if(!isEmpty(&q)) 
    
    {
        printf("\n Front -> %d ",q.front);
        printf("\n Data -> ");
        for( i = q.front; i!=q.rear; i=(i+1)%q.size) {
            printf("%d ",q.data[i]);
        }
        printf("%d ",q.data[i]);
        printf("\n Rear -> %d \n",q.rear);
    }
else
  printf(" \n Empty Queue\n");
}
int main()
{
   queue q; 
   int element,ch,flag;  
   printf("enter queue size");
   scanf("%d",&q.size);  
   initq(&q);
  while(1)
  {
    
    printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
        
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:printf("Enter the element..\n");
            scanf("%d",&element);
            flag=enQueue(&q,element);
            if(flag>=0)
               printf("\n Insertion successful\n");
            break;
     case 2:element=deQueue(&q);
            if(element!=-9999)
             printf("Element deleted=%d\n",element);
             break;
    case 3: display(q);
            break;
      
    case 4:exit(0);
     }
   }
}