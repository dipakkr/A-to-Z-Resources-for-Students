#include<stdio.h>
int fib(int);
main()
{
 printf("%d",fib(5));
}

int fib(int n)
{ if(n==1) return 0;
 if (n==2) return 1;
 return(fib(n-2)+fib(n-1));
}
