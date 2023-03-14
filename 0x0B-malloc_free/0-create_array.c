#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: Size of the array
 * @c: Character to insert
 * Return: NULL if size is zero or if it fails,
 */

char *create_array(unsigned int size, char c)
{
	char *arra;
	unsigned int index;

	if (size == 0)
		return ('\0');
	arra = malloc(sizeof(char) * size);

	if (arra == '\0')
		return ('\0');

	for (index = 0; index < size; index++)
		arra[index] = c;

	return (arra);
}
