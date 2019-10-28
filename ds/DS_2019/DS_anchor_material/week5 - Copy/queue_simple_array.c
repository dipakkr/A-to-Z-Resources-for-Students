// C program for array implementation of queue 
#include <stdio.h> 
#include <stdlib.h> 


// A structure to represent a queue front+1 points to first element(front to last deleted) and rear to the last element inserted
struct Queue 
{ 
	int front, rear,capacity; 
	int* array; 
}; 
typedef struct Queue Queue;

struct Queue* createQueue(int capacity) 
{ 
	struct Queue* queue = (struct Queue*) malloc(sizeof(struct Queue)); 
	queue->capacity = capacity; 
	queue->front = -1;
        
	queue->rear = -1; 
	queue->array = (int*) malloc(queue->capacity * sizeof(int)); 
	return queue; 
} 

 
int isFull(struct Queue* queue) 
{ return (queue->rear == queue->capacity); } 


int isEmpty(struct Queue* queue) 
{ return (queue->front==queue->rear); } 


void enqueue(struct Queue* queue, int item) 
{ 
	if (isFull(queue)) 
		return; 
	queue->rear = (queue->rear + 1);
	queue->array[queue->rear] = item; 
	
        
} 


int dequeue(struct Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return -9999; //Error code
	
	queue->front = (queue->front )+ 1;
        int item = queue->array[queue->front]; 
        
	
	return item; 
} 

// Function to get front of queue 
int front(struct Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return -9999; 
	return queue->array[queue->front]; 
         
} 

// Function to get rear of queue 
int rear(struct Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return -9999; 
	return queue->array[queue->rear]; 
} 

void display(Queue* queue)
{
 int i;
 if (isEmpty(queue)) 
 printf("Queue is empty\n");
 for(i=queue->front+1;i<=queue->rear;i++)
 printf("|%d| ",queue->array[i]);
}
int main() 
{ 
	struct Queue* queue = createQueue(1000); 
        int element,ch;
        while(1)
  {
    
    printf("\n1..Insert");
    printf("\n2..Delete");
    printf("\n3..display");
    printf("\n4..EXIT\n");
    scanf("%d",&ch);
    switch(ch)
    {
       case 1:printf("Enter the value\n");
              scanf("%d",&element);
              enqueue(queue,element);
              break;
       case 2:element=dequeue(queue);
              if(element==-9999)
              printf("Queue is empty\n");
              else
              printf("element deleted=%d\n",element);
              break;
       case 3:display(queue);
              break;
       case 4:exit(0); 
   }
  }
 }

 
