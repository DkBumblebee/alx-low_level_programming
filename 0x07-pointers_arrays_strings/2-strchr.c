#include "main.h"

/**
 * _strchr - Locates a char in a string
 * @s: Traget
 * @c: charater target
 * Return: returns a pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
	{
		if (s[i] == c)
		return (s + i);
	else
		return (NULL);
	}
}

