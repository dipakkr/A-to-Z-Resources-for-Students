#include <stdio.h>
#include<stdlib.h>
// dynamic memory management : malloc and free: allocate and deallocate memory on the heap
int main()
{

/*	int *p;
	// request for memory
	//	function : malloc requires the # of bytes to be passed as argument
	// returns a generic pointer : void*
	// convert pointer to void to pointer to int
	// creates a variable with no name; can be accessed using a pointer
	p = (int*)malloc(sizeof(int));
	*p = 20;
	// return the location back to runtime : free
	free(p);
*/


/*	int *p;
	p = (int *)malloc(sizeof(int) * 4); // array on the heap
	// all elements are initialized to undefined values
	p[0] = 11;  // array notation
	*(p + 1) = 22; //  pointer notation
	for(int i = 0;i<4;i++)
	{
		printf("%d\n",*(p+i));
	}
	free(p); // p is a dangling pointer after this line. free function doesnt assign NULL to p.
	printf("%d",*p);// dereferencing dangling pointer is dangerous. could crash
// on allocation of memory, malloc stores the size of memory allocated in some location.
// That is based on implementation.
// Given the pointer value returned by malloc, it is possible for the implementation to find the size allocated
// the function free finds the book keeping or house keeping info and deallcoates the
//	required amount of memory


*/

	int *p;
	p = (int *)malloc(sizeof(int) * 4); 

	free(p + 1); // TERRIBLE thing to do
	// p + 1 was not returned by malloc
	// there is no meaningful book keeping associated with p + 1
	// anything may happen
	// UNDEFINED BEHAVIOUR





}
	

	
	
	
	
	