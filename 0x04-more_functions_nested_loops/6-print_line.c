#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: parameter
 * end in a new line
 * Return: 0
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	_putchar('\n');
}
