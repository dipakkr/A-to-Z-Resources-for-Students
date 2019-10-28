#include<stdio.h>

struct test			
{
	int i;
	char j;
	
};
struct test1
{
	char j;
	int i;
	
};
struct test2
{
	char k;
	char j;
	int i;
	
};
struct test3
{
	int i;
	char k;
	int j;
	
};
int main()
{
	printf("size of the structure is %lu\n",sizeof(struct test));			//8		4+4
	printf("size of the structure is %lu\n",sizeof(struct test1));			//8		4+4
	printf("size of the structure is %lu\n",sizeof(struct test2));			//8		4+4
	printf("size of the structure is %lu\n",sizeof(struct test3));			//12	4+4+4
	return 0;
}
