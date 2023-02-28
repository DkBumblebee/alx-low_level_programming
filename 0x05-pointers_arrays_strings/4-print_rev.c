#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int len = 0, index = 0;

	len = _strlen(s);

	for (index = len - 1; index >= 0; index--)
	_putchar(s[index]);

	_putchar('\n');
}
/**
 * _strlen - Checks length of string
 * @s: string to check
 * Return: 0
 */

int _strlen(char *s)
{
	int count, i;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
