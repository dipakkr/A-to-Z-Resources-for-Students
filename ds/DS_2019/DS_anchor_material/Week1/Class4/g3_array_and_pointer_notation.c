//observe pointer notation and array notation
#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int *p1;
	p1=malloc(3*sizeof(int));
	printf("enter first number\n");
	scanf("%d",p1);
	printf("enter second number\n");
	scanf("%d",p1+1);
	printf("enter third number\n");
	scanf("%d",p1+2);	
	printf("number entered are %d %d and %d\n",*p1,*(p1+1),*(p1+2));	// pointer notation to print the contents of the memory location pointed by pointer
	printf("number entered are %d %d and %d\n",p1[0],p1[1],p1[2]);	// array notation to do the same 
	free(p1);
	
	return 0;
}