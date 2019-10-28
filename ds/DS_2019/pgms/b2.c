#include<stdio.h>
void toh(int n,char src,char dst,char tmp)
{
  if(n==1) 
   { printf("move %d from %c to %c\n",n,src,dst);
    return;
   }
  toh(n-1,src,tmp,dst);
  printf("move %d from %c to %c\n",n,src,dst);
  toh(n-1,tmp,dst,src);
  return;
}
main()
{
  toh(3,'A','B','C');
} 
