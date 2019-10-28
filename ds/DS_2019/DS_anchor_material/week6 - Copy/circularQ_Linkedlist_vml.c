#include<stdio.h>
#include<stdlib.h>

// Structure of a Node 
struct Node  
{ 
	int data; 
	struct Node* link; 
}; 
typedef struct Node Node;
typedef struct  
{ 
	Node *front, *rear; 
}queue; 

void initq(queue *pq)
{
 pq->front=pq->rear=NULL;
}


void enQueue(queue *pq, int value) 
{ 
	Node *temp = malloc(sizeof(Node)); 
	temp->data = value; 
	if (pq->front == NULL) 
		pq->front = temp; 
	else
		pq->rear->link = temp; 

	pq->rear = temp; 
	pq->rear->link = pq->front; 
} 


int deQueue(queue *pq) 
{ 
	if (pq->front == NULL) 
	{ 
		printf ("queue is empty"); 
		return -9999; 
	} 

	// If queue contains only node to be deleted 
	int value; 
	if (pq->front == pq->rear) 
	{ 
		value = pq->front->data; 
		free(pq->front); 
		pq->front = NULL; 
		pq->rear = NULL; 
	} 
	else // queue contains more than one node 
	{ 
		struct Node *temp = pq->front; 
		value = temp->data; 
		pq->front = pq->front->link; 
		pq->rear->link= pq->front; 
		free(temp); 
	} 

	return value ; 
} 


void displayqueue( queue *pq) 
{ 
	Node *temp = pq->front; 
	printf("\nElements in Circular queue are: "); 
	while (temp->link != pq->front) 
	{ 
		printf("%d ", temp->data); 
		temp = temp->link; 
	} 
	printf("%d", temp->data); 
} 


int main() 
{ 
	
 queue *q = malloc(sizeof(queue)) ;
 int element,ch;
 initq(q);
 while(1)
  {
    printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:printf("Enter the element..\n");
            scanf("%d",&element);
            enQueue(q,element);
            break;
     case 2:element=deQueue(q);
            if(element>=0)
             printf("Element deleted=%d\n",element);
             break;
    case 3: displayqueue(q);
            break;
      
     case 4:exit(0);
     }
   }
} 
