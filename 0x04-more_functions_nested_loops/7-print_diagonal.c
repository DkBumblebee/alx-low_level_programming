#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: parameter
 * end in a new line
 * Return: 0
 */

void print_diagonal(int n)
{
	int lin, new;

	if (n > 0)
	{
		for (lin = 0; lin < n; lin++)
		{
			for (new = 0; new < lin; new++)
			_putchar(' ');

			_putchar('\\');

			if (lin == (n - 1))
				continue;
				_putchar('\n');
		}
	}
	_putchar('\n');
}
