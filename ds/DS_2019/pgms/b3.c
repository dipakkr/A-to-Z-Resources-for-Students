#include<stdio.h>
int mypow(int x,int n)
 { int y;
  if(n==0) return 1;
  if(n%2==0)
    {
    y=mypow(x,n/2);
    return y*y;}
  y=mypow(x,(n-1)/2);
  return x*y*y;
 }
main()
{
  printf("%d",mypow(2,3));
}
