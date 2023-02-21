#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char lett[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		putchar(lett[c]);
	}
	putchar('\n');
	return (0);
}
