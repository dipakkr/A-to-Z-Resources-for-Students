#include<stdio.h>
#include<stdlib.h>
main()
{
 char exp[20];
 gets(exp);
 int cnt=0;
 int i=0;
 while(exp[i]!='\0')
 {
   switch(exp[i])
    {
  case '(':  cnt++;
           break;
  case ')': cnt--;
          break;
  }
 
if(cnt<0) break;
 i++;
}
if(cnt==0) printf("valid");
 else
printf("invalid");
  
}
