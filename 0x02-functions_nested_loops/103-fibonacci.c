#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * New line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 0; i < 89; i++)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum += j;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("%lu\n", sum);
	return (0);
}
