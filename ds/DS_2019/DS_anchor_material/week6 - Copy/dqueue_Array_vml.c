#include<stdio.h>
#include<stdlib.h>

 
typedef struct dequeue
{
	int *data;
	int rear,front,size;
}dequeue;
void initq(dequeue *pq)
{

pq->front =pq->rear =-1;
pq->data=malloc(sizeof(int)*pq->size);
} 
 
int isempty(dequeue *pq)
{
	if(pq->rear==-1)
		return(1);
	
	return(0);
}
 
int isfull(dequeue *pq)
{
	if((pq->rear+1)%pq->size==pq->front)
		return(1);
	
	return(0);
}
 
void enqueueR(dequeue *pq,int x)
{
     if(!isfull(pq))
      {	
        if(isempty(pq))
	{
		pq->rear=0;
		pq->front=0;
		pq->data[0]=x;
	}
	else
	{
		pq->rear=(pq->rear+1)%pq->size;
		pq->data[pq->rear]=x;
	}
      }
else
  {
     printf("\nQueue is full!!");
		  
  }
 
}
 
void enqueueF(dequeue *pq,int x)
{

 if(!isfull(pq))
 {	
   if(isempty(pq))
	{
		pq->rear=0;
		pq->front=0;
		pq->data[0]=x;
	}
	else
	{
		pq->front=(pq->front-1+pq->size)%pq->size;
		pq->data[pq->front]=x;
	}
}
else
  {
     printf("\nQueue is full!!");
		  
  }
 

}
 
int dequeueF(dequeue *pq)
{
	int x;
      if(!isempty(pq))
   {
	
	x=pq->data[pq->front];
	
	if(pq->rear==pq->front)	//delete the last element
		initq(pq);
	else
		pq->front=(pq->front+1)%pq->size;
	
	return(x);
  }
 else

   return(-9999);
}
 
int dequeueR(dequeue *pq)
{
	int x;

 if(!isempty(pq))
   {
	x=pq->data[pq->rear];
	
	if(pq->rear==pq->front)
		initq(pq);
	else
		pq->rear=(pq->rear-1+pq->size)%pq->size;
		
	return(x);
   }
 else
   return -9999;
}
 
void print(dequeue *pq)
{
	if(isempty(pq))
	{
		printf("\nQueue is empty!!");
		
	}
        else
        {
	
	  int i;
	  i=pq->front;
	
	  while(i!=pq->rear)
	   { 
		printf(" %d",pq->data[i]);
		i=(i+1)%pq->size;
	   }
	
	  printf(" %d\n",pq->data[pq->rear]);
      }
}
int main()
{
   dequeue q; 
   int element,ch,flag;  
   printf("enter queue size");
   scanf("%d",&q.size);  
   initq(&q);
  while(1)
  {
    printf("\n1.Insert(rear)\n2.Insert(front)\n3.Delete(rear)\n4.Delete(front)");
		printf("\n5.Print\n6.Exit\n\nEnter your choice:");
      
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: printf("\nEnter element to be inserted at rear end:");
	      scanf("%d",&element);		
	     	
	      enqueueR(&q,element);
	      break;
							
    case 2:  printf("\nEnter the element to be inserted at front end:");				
             scanf("%d",&element);
							
	     		
	     enqueueF(&q,element);
	     break;
							
  case 3: 					
	 element=dequeueR(&q);
	 if(element!=-9999)
           printf("Element deleted=%d\n",element);
         else
          printf("Queue is empty");
         break;
					
  case 4: 							
	element=dequeueF(&q);
        if(element!=-9999)
          printf("Element deleted=%d\n",element); 
        else
          printf("Queue is empty");         
	break;
							
 case 5: print(&q);
	 break;     
 case 6:exit(0);
     }
   }
}
