#include<stdio.h>
#include"b7.h"
main()
{
 NODE *head;int ele,res;
 init(&head);
 create(&head);
 disp(head);
 res=delAt(&head,&ele,3);
 disp(head);
 res=delAt(&head,&ele,1);
 disp(head);
} 
