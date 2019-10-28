#include<stdio.h>
int cod(int n)
{ static int cnt=0;
   if(n==0) return cnt;
  cnt++;
  cod(n/10);
}
 
main()
{
 
 printf("%d",cod(345));
}


