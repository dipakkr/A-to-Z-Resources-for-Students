#include <stdio.h>
#include<stdlib.h>
// write the diagram for the below
int main()
{

/*	int *p;
	p = (int*)malloc(sizeof(int));
	*p = 20;
	int *q = p;
	free(q); // valid statement; ok; what matters is the value of the pointer and not the name
	
	printf("first= %d",*p); //dereferencing dangling pointer is dangerous
	q = NULL;
	printf("second= %d",*p); //dereferencing dangling pointer is dangerous
	p=NULL;
	printf(" third=%d",*p); //Dereferencing null Pointer is a definite crash- Segmentation fault
	

*/

	int *p;
	p = (int*)malloc(sizeof(int));
	*p = 30;
	printf("a1=%p\n",p);
	printf(" first-value = %d\n",*p);
	p = (int*)malloc(sizeof(int));
	// changing of p makes us loose the pointer to the location allocated by the earlier malloc call
	printf("a2=%p\n",p);
	printf(" second-value = %d",*p);
	// creates garbage; we have a location but no access
	*p = 40;
	printf(" third -value = %d",*p);
	// no garbage collector (python does based on reference count)
	// many garbages in turn becomes a memory leak




/*	int *p; 
	{		// observe the block
		p = (int*)malloc(sizeof(int)); // acessible till free is used
		*p = 30;
		int *q = p;
		printf("*p : %d\n", *p);
		free(q); // cannot change q; parameter passing by value
		// q = NULL: or q = 0; // some people think it is safe programming
		// dereferencing a NULL pointer is a guaranteed crash
	}
	printf("*p : %d\n", *p);
	p = NULL;
	// p is a dangling pointer; no location; access;
	printf("*p : %d\n", *p);

*/
}

















