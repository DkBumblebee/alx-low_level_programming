#include "main.h"

/**
 * rev_string - function that reverses a string
 * @str: string to check
 * Return: 0
 */
void rev_string(char *str)
{
	int i = 0;

	while (str[i] != '0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[1]);
		}
	}
	_putchar('\n');
}
