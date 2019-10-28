#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p1;
	p1=(int*)calloc(4,sizeof(int)); // number of elements, size of each element
	// initializes the elements to zero
	for(int i = 0;i<4;i++)
	{
		printf("%d\n",*(p1+i));
	}
	
	
}