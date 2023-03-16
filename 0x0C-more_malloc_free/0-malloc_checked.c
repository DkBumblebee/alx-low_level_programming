#include "main.h"

/**
 * malloc_checked - Checks memory alloc for int b
 * @b: Int to Check
 * Return: 98 if fail
 * Or return address
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	prt = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
