#include "main.h"

/**
 * puts2 - Prints all characters
 * @str: string to check
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[1]);
		}
		i++;
	}
	_putchar('\n');
}
