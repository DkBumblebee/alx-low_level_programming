#include "main.h"

/**
 * puts2 - prints all characters
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
	}
	_putchar('\n');
}
