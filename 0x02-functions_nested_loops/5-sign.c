#include "main.h"

/**
 * print_sign - print sign of number
 * @n: int to be checked
 * Return: 1 and print + if n is greater tham zero
 * :-1 and print - if n is less than zero
 * 0 and print 0 if n is zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
