#include"barlst.h"
#include<stdio.h>
void init(ARLST *pal)
 {
   pal->last=-1;
}  
int append(ARLST *pal,int ele)
{
   if (pal->last==MAX-1)
      return 0;
   pal->last++;
   pal->a[pal->last]=ele;
   return 1;

} 
 int delLast(ARLST *pal,int *pe)
{
  if(pal->last==-1)
    return 1;
  *pe=pal->a[pal->last];
   pal->last--;
   return 0;
}


 void disp(ARLST* pal){
  for(int i=0;i<=pal->last;i++)
   printf("%d ",pal->a[i]);
}

