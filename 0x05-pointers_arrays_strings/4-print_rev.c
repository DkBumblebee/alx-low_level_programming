#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int len = 0, index = o;

	len = _strlen(s);

	for (index = len - 1; index >= 0; index--)
	_putchar(s[index]);

	_putchar('\n');
}
/**
 * _strlen - checks length of string
 * @s: string
 * return : 0
 */

int _strlen(char *)
{
	int count, i;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
