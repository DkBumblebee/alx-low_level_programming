#include "function_pointers.h"
/**
 * int_index - Compare elements of array
 * @array: Array of elements to compare
 * @size: Size of array
 * @cmp: Compare function
 * Return: Index if win, -1 if failed
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array && cmp)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
				return (index);
		}
	}

	return (-1);
}
