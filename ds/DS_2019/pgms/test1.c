#include<stdio.h>
int add(int a,int b)
{
  return(b==0)?a:add(a+1,b-1);
}
int addTR(int a,int b)
 {
  if(b==0) return a;
  add(a+1,b-1);
}
int mulTR(int a,int b,int v)
{ start:
  if(b==0 || a==0) return 0;
 if(b==1) return v;
 b=b-1;
 v+=a;
 //mulTR(a,b-1,v+a);
 goto start;
}
main()
{
  printf("%d",mulTR(8,4,8));
}

