#include<stdio.h>
#include<time.h>

int toh(int n,char src,char dst,char tmp);
main()
{ clock_t start,end;
  start=clock();
  printf("%d num of moves",toh(22,'A','B','C'));
  end=clock();
  printf("%lf",(double)(end-start)/CLOCKS_PER_SEC);
}

int toh(int n,char src,char dst,char tmp)
{ static int cnt=0;
 cnt++;
 if(n==1)
  printf("move %d disk from %c to %c\n",n,src,dst);
 else
 { 
   toh(n-1,src,tmp,dst);
   printf("move %d disk from %c to %c\n",n,src,dst);
   toh(n-1,tmp,dst,src);
 } 
 return cnt;
} 
