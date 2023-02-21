#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: Always 0
 */

int main(void)
{
	char lett[] = "_putchar";

	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(lett[a]);
	}
	_putchar('\n');
	return (0);
}
