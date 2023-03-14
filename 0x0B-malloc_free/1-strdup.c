#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: Duplicated string
 * Return: returns NULL if str = NULL
 * Success
 */

char *_strdup(char *str);
{
	char *duplist;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	duplist = mulloc(sizeof(char) * (len + 1));

	if (duplist == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		duplist[i] = str[i];
	}
	duplist[len] = '\0';

	return (duplist);
}
