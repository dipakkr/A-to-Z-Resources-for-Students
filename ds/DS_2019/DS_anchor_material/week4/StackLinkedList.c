#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int Data;
    struct Node *link;
}*top;

void popStack()
{
    struct Node  *var=top;
    if(top!=NULL)
    {
        top = top->link;
        free(var);
    }
    else
        printf("\nStack Empty");
}

void push(int value)
{
    struct Node *temp;
    temp=(struct Node *)malloc(sizeof(struct Node));
    temp->Data=value;
    if (top == NULL)
    {
         top=temp;
         top->link=NULL;
    }
    else
    {
        temp->link=top;
        top=temp;
    }
}

void display()
{
     struct Node *dtop=top;
     if(dtop!=NULL)
     {
          printf("\nElements are as:\n");
          while(dtop!=NULL)
          {
               printf("\t%d\n",dtop->Data);
               dtop=dtop->link;
          }
     printf("\n");
     }
     else
     printf("\nStack is Empty");
}

int main()
{
     int i=0;
     top=NULL;
     printf(" \n1. Push to stack");
     printf(" \n2. Pop from Stack");
     printf(" \n3. Display data of Stack");
     printf(" \n4. Exit\n");
     while(1)
     {
          printf(" \nChoose Option: ");
          scanf("%d",&i);
          switch(i)
          {
               case 1:
               {
               int value;
               printf("\nEnter a value to push into Stack: ");
               scanf("%d",&value);
               push(value);
               display();
               break;
               }
               case 2:
               {
               popStack();
               display();
               break;
               }
               case 3:
               {
               display();
               break;
               }
               case 4:
               {
               exit(0);
               }
               default:
               {
               printf("\nwrong choice for operation");
               }
         }
    }
}
