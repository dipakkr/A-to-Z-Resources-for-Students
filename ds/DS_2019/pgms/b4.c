#include<stdio.h>
int SA(int a[],int i,int j)
 {
  int mid=(i+j)/2;
  if(i==j)
    return a[i];
 return(SA(a,i,mid)+SA(a,mid+1,j));
}
main()
{
  int a[]={2,3,4,5,6};
  printf("%d",SA(a,0,4));
}
