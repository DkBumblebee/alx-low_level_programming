#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char alph = 'a';
	char balph = 'A';

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	for (balph = 'A'; balph <= 'Z'; balph++)
	{
		putchar(balph);
	}
	putchar('\n');
	return (0);
}
