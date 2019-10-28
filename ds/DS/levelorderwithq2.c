#include<stdio.h>
#include<stdlib.h>
#include "que.h"
node *create()
{
	node *p;
	int x;
	printf("Enter data(-1 for no data):");
	scanf("%d",&x);
	
	if(x==-1)
		return NULL;
	
	p=(node*)malloc(sizeof(node));
	p->key=x;
	
	printf("Enter left child of %d:\n",x);
	p->left=create();
 
	printf("Enter right child of %d:\n",x);
	p->right=create();
	
	return p;
}
void printLevelOrder(struct node* root) 
{ 
    que q;
    q.front=-1;
    q.rear=-1;
    struct node *temp_node = root; 
    qinsert(&q,temp_node);
    
  
    while (!isempty(&q)) 
    { 
        temp_node = qfront(&q);
        qdelete(&q);
        printf("%d ", temp_node->key); 
  
        /*Enqueue left child */
        if (temp_node->left) 
            qinsert(&q,temp_node->left); 
  
        /*Enqueue right child */
        if (temp_node->right) 
            qinsert(&q, temp_node->right); 
  
        
         
    } 
} 

int main()
{	
	node *root;
	root=create();

    printf("\nLevel Order traversal of binary tree is \n"); 
    printLevelOrder(root); 
	return 0;
}