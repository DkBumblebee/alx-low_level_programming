#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half string
 * @str: string to check
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0, i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
