
#include <stdio.h>

/**
 * main - prints argument size
 *@argc: number of arguments
 *@argv: array of arguments type char
 *Return: 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
