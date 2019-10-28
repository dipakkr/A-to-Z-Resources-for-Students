#include"barlst1.h"
#include<stdio.h>
#include<stdlib.h>
void init(VARLST *pal)
 {
   pal->used_size=-1;
   pal->size=0;
}  
void array_alloc(VARLST *pal)
{ if(pal->size==0)
    {pal->a=(int*)malloc(sizeof(int)*MAX);
    pal->size=MAX;}
  else if(pal->used_size==pal->size-1)
    {
          pal->a=(int*)realloc(pal->a,2*pal->size*sizeof(int));
          pal->size=2*pal->size;
    }
}
       
  
int append(VARLST *pal,int ele)
{
   array_alloc(pal);
   if (pal->used_size==MAX-1)
      return 0;
   pal->used_size++;
   pal->a[pal->used_size]=ele;
   return 1;

} 
 int delLast(VARLST *pal,int *pe)
{
  if(pal->used_size==-1)
    return 1;
  *pe=pal->a[pal->used_size];
   pal->used_size--;
   return 0;
}


 void disp(VARLST* pal){
  for(int i=0;i<=pal->used_size;i++)
   printf("%d ",pal->a[i]);
}

