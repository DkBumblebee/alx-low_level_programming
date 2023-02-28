#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	char *len = s;

	while (*len)
		len++;
	len -= 1;

	while (len)
	{
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
