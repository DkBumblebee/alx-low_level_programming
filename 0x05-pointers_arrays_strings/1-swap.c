#include <stdio.h>

/**
* swap_int - function that swaps the values of two integers
* @a: integer
* @b: integer
* Return : nothing
*/

void swap_int(int *a, int *b)
{
	int sap = *b;
	*b = *a;
	*a = sap;
}
