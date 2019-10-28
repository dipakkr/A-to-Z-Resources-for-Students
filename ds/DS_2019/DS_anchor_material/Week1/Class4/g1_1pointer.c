#include <stdio.h>

int main()
{

	double *ptr;
	double x=49;
	// p is not initialized
	printf("&ptr : %p\n", &ptr); // ok
	printf("------------------\n");
	*ptr=(double)((long int)&x);
	printf("++++++++++++++++++++++\n");
	printf("ptr : %p\n", ptr); // logically wrong; using an uninitialized variable
	// program will not crash
	printf("=============\n");
	printf("*ptr : %lf\n", *ptr); // looking at the content of an uninitialized variable
	// as a  pointer and dereferencing it; could crash; undefined behaviour


/*	int *p;
	int a = 14;
	p = &a;
	printf("&p : %p\n", &p); // ok
	printf("p : %p\n", p);  // ok; p has been assigned a value
	printf("*p : %d\n", *p); // same as a; ok if a has been given a value
*/

/*	int **pp; // pointer to pointer to integer
	//pp = &&a; // error
	//pp = & &a; //error: lvalue required as unary ‘&’ operand
	int *p;
	int a = 10;
	p = &a;
  	pp = &p;
// write the diagrams for above statements and get the outputs for below	
	printf("&pp : %p\n", &pp);
	printf("pp : %p\n", pp);
	printf("*pp : %p\n", *pp);
	printf("**pp : %d\n", **pp);
	printf("&p : %p\n", &p);
	printf("a : %d\n", a);
	printf("*p : %d\n", *p);
	printf("p : %p\n", p);
	printf("&a : %p\n", &a);
	
	
*/	

}
