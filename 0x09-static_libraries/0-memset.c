#include "main.h"

/**
 * _memset - The _memset() fuction files
 * @n: number of byte
 * @b: constant byte
 * @s: Pointer target
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
