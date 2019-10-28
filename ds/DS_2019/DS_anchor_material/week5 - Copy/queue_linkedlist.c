#include<stdlib.h>

#include<stdio.h>

struct node

{
  int data;

  struct node *link;

};

typedef struct node node;

void insert_queue(int, node **,node **);

int delete_queue(node **,node **);

void display_queue(node*,node*);

main()

{
  
int k,x,ch;

  node *front,*rear;

  front=rear=NULL;

 
 
  while(1)
 
 {
    display_queue(front,rear);

    printf("\n1..insert");

    printf("\n2..remove");
 
   printf("\n3..display");

    printf("\n4..EXIT");
  
  scanf("%d",&ch);
 
   switch(ch)
   
 {
       case 1:printf("Enter the value..");

              scanf("%d",&x);
 
             insert_queue(x,&front,&rear);
  
            
               break;
 
      case 2:k=delete_queue(&front,&rear);

              break;

        case 4:exit(0); 
  
 }
  
}

 }

   
 void insert_queue(int x, node **f, node **r)


    {
    
  node *temp;
   
   
      temp=(node*)malloc(sizeof(node));
    
  temp->data=x;
    
  temp->link=NULL;
 
      
 //if this is the first node
   
   if(*f==NULL)
   
     *f=*r=temp;
   
   else //insert at the end
        
 {

           (*r)->link=temp;
 
           *r=temp;
   
       }

     }

   
 int delete_queue(node **f, node **r)

    {
       
  node *q;

         int x;

         q=*f;

         if(q==NULL)
   
       {
   
        printf("Empty queue\n");

           return -1;

          }
 
         else
  
        {
     
       x=q->data;
 
           if(*f==*r) //only one node
 
             *f=*r=NULL;

            else

            {
    
        *f=q->link;
 
           free(q);
   
         return x;
     
      }
   
      }
   
}


    void display_queue(node *f, node *r)
   
  {
 
       if(f==NULL)
 
         printf("Queue Empty\n");
 
     else
 
      {
 
       while(f!=r)

        {
 
         printf("%d-> ",f->data);

          f=f->link;
 
       }
   
   printf("%d-> ",f->data);

      }

    } 

 

   

        
          







 
    


   
     








