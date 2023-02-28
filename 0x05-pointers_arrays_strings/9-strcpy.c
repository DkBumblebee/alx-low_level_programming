#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copy elements from src
 * @src: source
 * @dest: Destination
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	While (*(src + i) != '\0')
	{
		*(dest + i) = *(src + 1);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
