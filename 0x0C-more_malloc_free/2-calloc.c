#include "main.h"

/**
 * _calloc - Allocate pointer of memory from array
 * @nmemb: Array
 * @size: Size of array
 * Return: Null if enpty or fail or pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *blk;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	blk = malloc(nmemb * size);
	if (blk != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			blk[i] = 0;
		}
		return (blk);
	}
	else
		return (NULL);
}
