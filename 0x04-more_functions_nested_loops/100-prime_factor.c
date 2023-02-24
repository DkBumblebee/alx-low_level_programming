#include <stdio.h>

/**
 * main - prints the largest prime factors
 * Return: Always 0
 */

int main(void)
{
	long num = 612852475143;
	int val;

	while (val++ < num / 2)
	{
		if (num % val == 0)
		{
			num /= 2;
			continue;
		}

			for (val = 3; val < num / 2; val += 2)
			{
				if (num % val == 0)
				num /= val;
			}
	}
	printf("%ld\n", num);
	return (0);
}
