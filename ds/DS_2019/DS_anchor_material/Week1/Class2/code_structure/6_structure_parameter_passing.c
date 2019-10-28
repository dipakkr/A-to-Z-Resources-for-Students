#include<stdio.h>
#include<string.h>
struct test
{
	int i;
	char a[20];
	float j;
};
void f1(struct test t)   // t is receiving t1's contents. During the function call this is: struct test t=t1. Member wise copying takes place. Changing t.a doesnt change t1.a. 
{
	strcpy(t.a,"pqr");
	
}

void f2(struct test* p)  
{
	strcpy(p->a,"pqr");
	
}
void f3(const struct test* p)  
{
	//strcpy(p->a,"pqr"); // Error
	printf("%s\n", p->a);
	
}
int main()
{
	struct test t1={20,"xyz",78.5f};
	printf("%s",t1.a);
	f1(t1);
	printf("%s",t1.a); // xyz

	f2(&t1);
	printf("%s",t1.a); // pqr

	f3(&t1);
}

