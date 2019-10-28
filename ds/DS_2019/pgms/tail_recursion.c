#include<stdio.h>
void print(int n);
main()
{
  print(5);
}

void print(int n)
{
 if (n<0) return;
 printf("%d",n);
 print(n-1);
}
