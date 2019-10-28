#include<stdio.h>
#include<string.h>
struct 	student	
{	
	int rnum;				 
	char name[20];
	int marks;
};	
int main()
{
	struct student s1;		 
	//prints junk
	printf("no initialization done explicitly---\n");
	printf("%d\n",s1.rnum);
	printf("%s\n",s1.name);
	printf("%d\n",s1.marks);
	
	
	printf("structure initialization done ---\n");
	struct student s2={23,"pes",99};	// creation of structure variable and initialization together
	
	printf("%d\n",s2.rnum);
	printf("%s\n",s2.name);
	printf("%d\n",s2.marks);	
	
	printf("only few members are initialized\n");
	struct student s3={23,"pes"};	// creation of structure variable and initialization together. But only few members are initialized explicitly. others are initialized to zero
	
	printf("%d\n",s3.rnum);
	printf("%s\n",s3.name);
	printf("%d\n",s3.marks);
	
	/*
	printf("only few members are initialized but types are not matching\n");
	struct student s4={"pes"};		// throws a warning
	printf("%d\n",s4.rnum);			// output is undefined value
	printf("%s\n",s4.name);
	printf("%d\n",s4.marks);
	*/
	
	printf("usage of variable names while initializing the members of the structure partially\n");
	struct student s5={.name="pes",.marks=45};		// 
	printf("%d\n",s5.rnum);			
	printf("%s\n",s5.name);
	printf("%d\n",s5.marks);
	
}
	
