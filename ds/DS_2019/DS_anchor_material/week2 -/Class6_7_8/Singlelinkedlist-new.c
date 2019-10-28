#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

typedef struct node NODE;

NODE* create_node(int);
void insert_at_front(int, NODE**);
void insert_at_end(int, NODE**);
void del_from_front(NODE**);
void del_from_end(NODE**);
void ins_at_pos(int ,int, NODE**);
void del_at_pos(int, NODE**);
void display(NODE**);
void insert_in_order(int, NODE**);
int find_key(int, NODE**);

int main()
{
	int choice,x,x1,pos;
	NODE *frontNode_list, *new_node;
	frontNode_list=NULL;
	printf("Enter your choice \n1) Insert data at front of the list\n2) Insert data at end of the list\n3) Display the list");
	printf("\n4) Delete data from front of the list\n5) Delete data from end of the list\n6) Insert data at a given position\n7) Delete data at a given position \n");
	printf("8) Insert data in ordered manner \n9) Find the data");
	while(1)
	{
		printf("\nEnter your choice\n");
		scanf("%d", &choice);
		switch(choice)
		{

		case 1: {
			printf("Enter the element");
			scanf("%d", &x);
			insert_at_front(x, &frontNode_list);
				}
				break;

		case 2: {
			printf("Enter the element");
			scanf("%d", &x);
			insert_at_end(x, &frontNode_list);
				}
				break;

		case 3: {
			printf("The element in the list are: \t");
			display(&frontNode_list);
				}
				break;
		case 4: {
			del_from_front(&frontNode_list);
			//printf("The deleted element is  %d\n", x1 );
				}
				break;
		case 5: {
			del_from_end(&frontNode_list);
			//printf("The deleted element is  %d\n", x1 );
				}
				break;
		case 6: {
			printf("Enter the element and its position to be inserted ");
			scanf("%d%d",&x,&pos);
			ins_at_pos(x,pos, &frontNode_list);
				}
				break;
		case 7: {
			printf("Enter the position of the node to be deleted ");
			scanf("%d", &pos);
			del_at_pos(pos, &frontNode_list);
				}
				break;
		case 8: {
			printf("Ordered Insertion\n Enter the element");
			scanf("%d", &x);
			insert_in_order(x, &frontNode_list);
				}
				break;
		case 9: {
			printf("Search a key element");
			scanf("%d", &x);
			x=find_key(x, &frontNode_list);
			if (x) printf("successful search");
			else  printf("unsuccessful search");
				}
				break;
		default: {
			printf("Invalid choice \t"); 
			exit(1);
				 }
				 break;
		}
	}
	return(0);
}

NODE* create_node(int x)
{
	NODE *new_node = (NODE *)(malloc(sizeof(NODE)));
	new_node->data=x;
	new_node->link=NULL;
	return new_node;
}

void insert_at_front(int x, NODE **frontNode_list)
{
	NODE *new_node = create_node(x);
	if (*frontNode_list == NULL)
		*frontNode_list = new_node;
	else {
		new_node->link=*frontNode_list;
		*frontNode_list=new_node;
	}
}

void insert_at_end(int x, NODE **frontNode_list)
{
	NODE *temp;
	NODE *new_node = create_node(x);
	if( *frontNode_list==NULL)
		*frontNode_list=new_node;
	else {
		temp=*frontNode_list;
		while(temp->link!=NULL)
			temp=temp->link;
		temp->link=new_node;
	}
}

void display(NODE** frontNode_list)
{
	NODE *temp; 
	if(*frontNode_list==NULL) 
		printf("Empty List ");
	else {
		temp=*frontNode_list;
		printf("The List is.....\n");
		while(temp!=NULL)
		{ 
			printf("\t%d", temp->data); 
			temp=temp->link;
		}     
	}
}

void del_from_front(NODE** frontNode_list)
{
	NODE *temp; 
	int x;
	if (*frontNode_list == NULL)
		printf("List is empty");
	else {
		temp=*frontNode_list;
		*frontNode_list = (*frontNode_list)->link;
		printf("deleted element is %d",temp->data);
		free(temp);
		return; 
	}
}

void del_from_end(NODE** frontNode_list)
{
	NODE *temp, *prev; 
	int x;
	if (  *frontNode_list == NULL)
		printf("List is empty");
	else if((*frontNode_list)->link==NULL)
	{
		temp=*frontNode_list;
		*frontNode_list=NULL;
		free(temp); 
	}
	else {
		temp=*frontNode_list;
		while(temp->link!=NULL)
		{
			prev =temp;
			temp=temp->link;
		}
		prev->link=NULL;
		printf(" The deleted element is %d", temp->data);
		free(temp);
	}
}


void ins_at_pos(int x,int pos, NODE** frontNode_list)
{
	int i=1;
	NODE *temp, *prev, *new_node;
	new_node = create_node(x);
	//if(frontNode_list==NULL && pos==1) 
	//  frontNode_list=new_node;  
	if(pos==1) 
	{
		new_node->link = *frontNode_list;
		*frontNode_list=new_node;
	}
	else  {
		temp=*frontNode_list;
		while(temp->link!=NULL && i< pos)
		{
			prev = temp;
			temp=temp->link;i++;
		}
		if(pos == i)
		{
			new_node->link = temp;
			prev->link = new_node;
		}
		else if(++i==pos)
			temp->link=new_node;
		else printf("Invalid Position");
	}
}

void del_at_pos(int pos, NODE** frontNode_list)
{
	int i=1; 
	NODE *temp, *prev;
	if(*frontNode_list==NULL) 
		printf("Empty List");
	else {
		temp=*frontNode_list;
		if(pos==1) 
		{ 
			*frontNode_list = (*frontNode_list)->link;
			free(temp);
		}
		else {  
			while(temp->link!=NULL && i< pos)
			{ prev = temp;
			temp=temp->link; i++;
			}
			if(pos == i)
			{  
				prev->link = temp->link;
				free(temp);
			}
			else printf("Invalid Position");
		}
	}
}

void insert_in_order(int x, NODE** frontNode_list)
{
	NODE *temp, *prev, *new_node;
	new_node = create_node(x);
	if(*frontNode_list==NULL) 
		*frontNode_list=new_node;
	else if (new_node->data >= (*frontNode_list)->data)
	{
		new_node->link=*frontNode_list;
		*frontNode_list=new_node;
	}

	else  {
		temp=*frontNode_list;
		while(temp!=NULL && temp->data > new_node->data)
		{
			prev = temp;
			temp=temp->link;
		}
		//if(temp->data > new_node->data)
		//   { 
		new_node->link=temp;
		prev->link=new_node;
		//     }
		//    else temp->link=new_node;
	}
}

int find_key(int key, NODE** frontNode_list)
{
	NODE *temp;
	temp=*frontNode_list;
	while(temp->link!=NULL)
	{
		if(temp->data==key)return 1;
		temp=temp->link;
	}
	return 0;
}