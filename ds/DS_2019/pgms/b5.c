#include<stdio.h>
void f1(int a[]);
void f2(int *a);
main()
{  int a[]={2,3,4};
  
  f1(a);
  printf("%d %d %d\n",a[0],a[1],a[2]);
 f2(a);
 printf("%d %d %d\n",a[0],a[1],a[2]);
}
void f1(int a[])
{ a++;
 a[1]=66;
}
void f2(int *a)
{  a++;
  a[1]=34;
}


