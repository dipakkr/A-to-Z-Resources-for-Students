#include<stdio.h>
#include<stdlib.h>
//Program to create two linked list and concatenate it
//Lists are created using add at beginning and add at end functions
struct node
{
    int info;
    struct node *link;
};

struct node *create_list(struct node *);
struct node *concat_lists( struct node *list1,struct node *list2);
struct node *insertatbeg(struct node *start, int data);
struct node *insertatend(struct node *start,int data);
void display(struct node *start);

main()
{
    struct node *head_list1=NULL,*head_list2=NULL;
    head_list1=create_list(head_list1);
    head_list2=create_list(head_list2);
    printf("First list is  : ");
    display(head_list1);
    printf("Second list is  : ");
    display(head_list2);
    head_list1=concat_lists(head_list1, head_list2);
    printf("Concatenated list is  : ");
    display(head_list1);
}

struct node *concat_lists( struct node *list1,struct node *list2)
{
    struct node *ptr;
    if(list1==NULL)
    {
        list1=list2;
        return list1;
    }
    if(list2==NULL)   
        return list1;
    ptr=list1;
    while(ptr->link!=NULL)
        ptr=ptr->link;
    ptr->link=list2;    
    return list1;
}
struct node *create_list(struct node *start)
{
    int i,n,data;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    start=NULL;
    if(n==0)
        return start;

    printf("Enter the element to be inserted : ");
    scanf("%d",&data);
    start=insertatbeg(start,data);

    for(i=2;i<=n;i++)
    {
        printf("Enter the element to be inserted : ");
        scanf("%d",&data);
        start=insertatend(start,data);    
    }
    return start;
}

void display(struct node *start)
{
    struct node *p;
    if(start==NULL)
    {
        printf("List is empty\n");
        return;
    }
    p=start;
    while(p!=NULL)
    {
        printf("%d ", p->info);
        p=p->link;
    }
    printf("\n");
}

struct node *insertatbeg(struct node *start,int data)
{
    struct node *tmp;
    tmp=(struct node *)malloc(sizeof(struct node));
    tmp->info=data;
    tmp->link=start;
    start=tmp;
    return start;
}

struct node *insertatend(struct node *start, int data)
{
    struct node *p,*tmp;
    tmp= (struct node *)malloc(sizeof(struct node));
    tmp->info=data;
    p=start;
    while(p->link!=NULL)
        p=p->link;
    p->link=tmp;
    tmp->link=NULL;
    return start;
}