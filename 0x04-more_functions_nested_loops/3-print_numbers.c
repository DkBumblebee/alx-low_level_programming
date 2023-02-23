#include "main.h"

/**
 * print_numbers - function that prints the numbers, form 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
