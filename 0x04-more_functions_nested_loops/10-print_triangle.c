#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: parameter
 * Return: 0
 * end in a new line
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			for ((j = size - i); j > 0; j--)
			_putchar(' ');

			for (j = 0; j < i; j++)
			_putchar('#');

			if (i == size)
			continue;

			_putchar('\n');
		}
	}
}
