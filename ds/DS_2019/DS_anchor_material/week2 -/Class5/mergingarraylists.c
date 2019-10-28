/* Program to merge two 1-D arrays. */

#include <stdio.h>
#include <conio.h>
#include <alloc.h>

#define MAX1 5
#define MAX2 7

int *arr ;

int* create ( int ) ;
void sort ( int *, int ) ;
void display ( int *, int ) ;
int* merge ( int *, int * ) ;
void main( )
{
	int *a, *b, *c ;

	clrscr( ) ;

	printf (  "\nEnter elements for first array: \n\n" ) ;
	a = create ( MAX1 ) ;

	printf ( "\nEnter elements for second array: \n\n" ) ;
	b = create ( MAX2 ) ;

	sort ( a, MAX1 ) ;
	sort ( b, MAX2 ) ;

	printf ( "\nFirst array: \n" ) ;
	display ( a, MAX1 ) ;
	printf ( "\n\nSecond array: \n" ) ;
	display ( b, MAX2 ) ;
	printf ( "\n\nAfter Merging: \n" ) ;

	c = merge ( a, b ) ;
	display ( c, MAX1 + MAX2 ) ;

	getch( ) ;
}

/* creates array of given size, dynamically */
int* create ( int size )
{
	int *arr, i ;
	arr = ( int * ) malloc ( sizeof ( int ) * size ) ;

	for ( i = 0 ; i < size ; i++ )
	{
		printf ( "Enter the element no. %d: ", i + 1 ) ;
		scanf ( "%d", &arr[i] ) ;
	}
	return arr ;
}

/* sorts array in ascending order */
void sort ( int *arr, int size )
{
	int i, temp, j ;
	for ( i = 0 ; i < size ; i++ )
	{
		for ( j = i + 1 ; j < size ; j++ )
		{
			if ( arr[i] > arr[j] )
			{
				temp = arr[i] ;
				arr[i] = arr[j] ;
				arr[j] = temp ;
			}
		}
	}
}

/* displays the contents of array */
void display ( int *arr, int size )
{
	int i ;
	for ( i = 0 ; i < size ; i++)
		printf (  "%d\t", arr[i] ) ;
}

/* merges two arrays of different size */
int* merge ( int *a, int *b )
{
	int *arr ;
	int i, k, j ;
	int size = MAX1 + MAX2 ;
	arr = ( int * ) malloc ( sizeof ( int ) * ( size ) ) ;

	for ( k = 0, j = 0, i = 0 ; i <= size ; i++ )
	{
		if ( a[k] < b[j] )
		{
			arr[i] = a[k] ;
			k++ ;
			if ( k >= MAX1 )
			{
				for ( i++ ; j < MAX2 ; j++, i++ )
					arr[i] = b[j] ;
			}
		}
		else
		{
			arr[i] = b[j] ;
			j++ ;
			if ( j >= MAX2 )
			{
				for ( i++ ; k < MAX1 ; k++, i++ )
					arr[i] = a[k] ;
			}
		}
	}

	return arr ;
}