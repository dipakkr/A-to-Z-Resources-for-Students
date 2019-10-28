#include<stdio.h>
#include"sss_llist.h"
void main()
{ int e;
 LLIST myLst;
 init(&myLst);
 insFront(&myLst,24);
 insFront(&myLst,28);
 insFront(&myLst,26);
 insFront(&myLst,34);
 insFront(&myLst,14);
 disp(&myLst);
 delFront(&myLst,&e);
 disp(&myLst);
}

