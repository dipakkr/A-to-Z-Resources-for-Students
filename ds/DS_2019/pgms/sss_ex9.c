#include<stdio.h>
void prtper(int num)
{ 
  static int cnt=1;
   if(cnt==101) return;
   printf("%dpercent= %d\n ",cnt,cnt*num);
   cnt++;
   prtper(num);
}
main()
{
  int num;
  printf("enter a num");
  scanf("%d",&num);
  prtper(num/100);
}
