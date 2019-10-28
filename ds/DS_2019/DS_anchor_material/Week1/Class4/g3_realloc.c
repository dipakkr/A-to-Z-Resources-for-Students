#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p;
	//p = (int *)malloc(sizeof(int) * 4);
	p = (int *)calloc(4, sizeof(int));
	printf("p : %p\n", p);	// note this address
	for(int i = 0; i < 4; ++i)
	{
		printf("%d ", p[i]);
	}
	printf("\n");

	// change the array size?
	// increase the size:
	//		may get the same sequence of locations
	//				different sequence of locations
	//		old pointer is conceptually dangling
	//		values are copied; old location freed if we get a new block of locations
	// decrease the size
	//		values at locations which remain are kept
	int *q = (int *)realloc(p, 10);
	printf("q : %p\n", q);// might get same output as above. // change the second parameter of realloc to 
	//higher value and observe the output. U might get different address now.
	q[1] = 100;  // array notation
	for(int i = 0; i < 4; ++i)
	{
		printf("%d ", q[i]);
	}
	free(q);
}
