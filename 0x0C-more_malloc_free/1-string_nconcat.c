#include "main.h"

/**
 * string_nconcat - Concat 2 strings
 * @s1: String 1
 * @s2: String 2
 * @n: Size
 * Return: Address of new strcat
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int siz = n, i;

		if (s1 == NULL)
			s1 = "";

		if (s2 == NULL)
			s2 = "";

		for (i = 0; s1[i]; i++)
			siz++;

		concat = malloc(sizeof(char) * (siz + 1));

		if (concat == NULL)
			return (NULL);

		siz = 0;

		for (i = 0; s1[i]; i++)
			concat[siz++] = s1[i];

		for (i = 0; s2[i] && i < n; i++)
			concat[siz++] = s2[i];

		concat[siz] = '\0';

		return (concat);
}
