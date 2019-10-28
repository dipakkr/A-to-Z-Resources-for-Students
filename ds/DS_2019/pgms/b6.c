#include<stdio.h>
struct test
{  int a[10];
};
void f1(struct test p);
main()
 {
  struct test t;
  printf("%ld\n",sizeof(struct test));
  t.a[1]=34;
  f1(t);
  printf("%p main\n",t.a);
  printf("%d ",t.a[1]);
}
void f1(struct test p)
{ printf("%p fun\n",p.a);
  p.a[1]=54;
}


 
