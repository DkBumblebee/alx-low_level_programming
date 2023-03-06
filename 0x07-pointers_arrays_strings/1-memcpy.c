#include "main.h"

/**
 * _memset - The _memset() fuction files
 * @dest: A distination pointer
 * @src: A source pointer
 * @n: number of bytes t copy
 * Return: returns a pointer to n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
