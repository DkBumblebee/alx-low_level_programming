#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: parameter
 */

void print_number(int n)
{
	unsigned int num = n;

	for (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		_putchar(num / 10);
	}
	_putchar(num % 10 +'0');
}
