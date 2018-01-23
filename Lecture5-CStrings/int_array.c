/* FILE: int_array.c Shows several examples of how we can use arrays and pointers
 *                   in similar ways to access the values in arrays.
 *
 *       
 */

#include <stdio.h>

int main()
{
	int array[4];
	int *ap = array;
	array[0] = 1;
	array[3] = 4;

	printf( "The address of array is %lu.\n", &array );
	printf( "The address of ap is %lu.\n", &ap );
	printf( "Array holds %lu.\n", array );
	printf( "First value %d.\n", array[0] );
	printf( "First value %d.\n", *array );
	printf( "Last address %lu.\n", &(array[3]) );
	printf( "Last value %d.\n", *(array+3) );
}
