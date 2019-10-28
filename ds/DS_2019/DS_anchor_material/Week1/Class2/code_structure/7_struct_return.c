#include<stdio.h>
#include<string.h>
struct test
{
	int i;
	char a[20];
	float j;
};
struct test f1(struct test t);
int main()
{
	struct test t1={20,"xyz",78.5f};
	printf("%s",t1.a);
	t1=f1(t1);
	printf("%s",t1.a);
	
}
struct test f1(struct test t)   
{
	strcpy(t.a,"pqrstuv");
	return t;
	
}