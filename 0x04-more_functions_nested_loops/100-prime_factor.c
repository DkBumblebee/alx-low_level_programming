#include <stdio.h>

/**
 * main - prints the largest prime factors
 * Return: Always 0
 */

int main(void)
{
	long num = 612852475143;
	int a = 0;

	while (a++ < num / 2)
	{
		if (num % a == 0)
		{
			num /= 2;
			continue;
		}

			for (a = 3; a < num / 2; a += 2)
			{
				if (num % a == 0)
				num /= a;
			}
	}
	printf("%ld\n", num);
	return (0);
}
