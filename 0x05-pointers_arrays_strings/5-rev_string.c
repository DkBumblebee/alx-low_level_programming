#include "main.h"

/**
 * rev_string - Revereses a string
 * @s: string
 * Return: 0
 */
void rev_string(char *s)
{
	int i = 0, length;

	length = _strlen(s) - 1;
	while (length > i)
	{
		swap_char(s + length, s + i);
		i++;
		length--;
	}
}

/**
 * _strlen - Checks length of string
 * @s: string to check
 * Return: 0
 */

int _strlen(char *s)
{
	int counter, i;

	counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	return (counter);
}
/**
 *swap_char - swap two characters
 *@a: first character
 *@b: second character
 *Return: nothing
 */

void swap_char(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}
