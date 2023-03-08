#include "main.h"

/**
 * _put_recursion - Function that prints a string, followed by a new line
 * @s: Output charater
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_putchar_recursion(s + 1);
	}
	else
		_putchar('\n');
}
