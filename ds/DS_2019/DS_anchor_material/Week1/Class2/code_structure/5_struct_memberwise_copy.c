#include<stdio.h>
struct test1
{
	int i;
	char ch;
};
int main()
{
	//printf("%lu",sizeof(struct test1));
	struct test1 t1={23,'w'};
	struct test1 t2=t1;	// memberwise copying is done
	//if(t1==t2)			// Error
	if(t1.i==t2.i && t1.ch==t2.ch)
		printf("equal");
	else
		printf("not equal");
	/*printf("addresses are %p and %p\n",t1,t2);
	printf("%p %p\n",&t1.i,&t2.i);
	printf("%c %c",t1.ch,t2.ch);
	t1.i=189;
	printf("\n%d %d\n",t1.i,t2.i);
	printf("%c %c",t1.ch,t2.ch);
	*/

	
	return 0;

}
