#include<stdio.h>
int cod(int n)
{ static int cnt=0;
 if (n==0) return cnt;
 cnt++;
 cod(n/10);
}
int pw(int x,int n)
{  if(n==0) return 1;
  if (n==1) return x;
  return(x*pw(x,n-1));
}
main()
{
  printf("%d %d",cod(0),pw(2,0));
}
