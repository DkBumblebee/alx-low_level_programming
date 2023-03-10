#include "main.h"

/**
 * _strcat - Link chararter in sting src
 * @dest: Destination
 * @src: Source
 * Return: string @dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int s = 0;

	while (dest[i++])
	{
		s++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[s++] = src[i];
	}
	return (dest);
}
