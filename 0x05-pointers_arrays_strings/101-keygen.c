#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: the generated password
 */
int main(void)
{
	char character;
	int x;

	srand(time(0));
	while (x <= 2645)
	{
		character = rand() % 128;
		x += character;
		putchar(character);
	}
	putchar(2772 - x);
	return (0);
}
