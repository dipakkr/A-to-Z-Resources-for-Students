#include<stdio.h>
int fact(int n)
{
  if (n==0)
    return 1;
  return (n*fact(n-1));
}
int factTR(int n,int v)
{
  if (n==0) return v;
  factTR(n-1,n*v);
}

main()
{
  printf("%d %d",fact(5),factTR(5,1));
}
