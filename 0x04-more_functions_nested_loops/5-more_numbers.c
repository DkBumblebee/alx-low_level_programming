#include "main.h"

/**
 * more_numbers - function that prints 10 times the number
 * from 0 to 14
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (i > 9)
				_putchar ((i / 10) + '0');
		}
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
