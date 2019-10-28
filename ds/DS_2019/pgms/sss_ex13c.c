#include<stdio.h>
#include"sss_ex13.h"

main()
{
 NODE *head=NULL;
  int ele;
 insOrder(&head,10);
 //create(&head);
 insOrder(&head,8);
 insOrder(&head,9);
 insOrder(&head,3);
 insOrder(&head,4);
 insOrder(&head,18);
 insOrder(&head,12);
 insOrder(&head,14);
 printf("%d in order",checkorder(head));
 disp(head);
 rev(&head);
 printf("\n");
 disp(head);
 printf("\n");
 revhalf(&head);
 printf("\n");
 disp(head);
 /*delAt(&head,&ele,3);
 disp(head);
 printf("\n");
 delAt(&head,&ele,1);
 disp(head);*/
}
