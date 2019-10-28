#include<stdio.h>
struct __attribute__((packed)) test 
{  char t1;
  int i;
  char ch;
  
  float k;
  
};
main()
{
 struct test t;
 printf("%ld",sizeof(struct test));
} 
