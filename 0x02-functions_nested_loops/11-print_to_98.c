#include "main.h"

/**
 * print_to_98 - function that print all natural numbers from n to 98
 * Return: Void
 */

void print_to_98(int n)

{
	int o, p;
	if (n <= 98)
	{
		for (o = n, n <= 98; n++)
		{
			if (o != 98)
				printf("%d, ", n);
			else if (o == 98)
				printf("%d\n", o);
		}
	}
	else if (n >= 98)
	{
		for (p = n; p >= 98; p--)
		{
			if (p != 98)
				printf("%d, ", p);
			else if (p == 98)
				printf("%d\n", p):
		}
	}
}
