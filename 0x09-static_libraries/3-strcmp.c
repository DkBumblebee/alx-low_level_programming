#include "main.h"

/**
 * _strcmp - Compares strings
 * @s1: String to compare to @s2
 * @s2: Second string
 *
 * Return: Difference in string
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s2[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return ((int)(s1[i] - s2[i]));
		}
	}
	return ((int)(s1[i] - s2[i]));
}
