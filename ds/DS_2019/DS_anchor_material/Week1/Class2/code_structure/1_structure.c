#include<stdio.h>
#include<string.h>
 
struct student			// type declaration which defines how student entity looks like
{						// now all three are related
	int rnum;			// these three are members of the structure
	char name[20];		
	int marks;
};			// semicolon is compulsory
//No memory allocation for declaration of the structure type
int main()
{
// Creating the structure variable means memory gets allocated
	struct student s1;				 
	// all members are  uninitialized
	printf("%d-----------\n",s1.rnum);		// junk is printed
	// only one student details can be stored. If you want to store details of more students, we must create many structure variables separately or create array of structures
	strcpy(s1.name,"abc");
	s1.marks=78;
	s1.rnum=56;
	printf("%s\n",s1.name);
	printf("%d\n",s1.rnum);
	printf("%d\n",s1.marks);
	
	return 0;
}
