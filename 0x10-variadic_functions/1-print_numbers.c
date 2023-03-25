#include "variadic_functions.h"

/**
 * print_numbers - Print numbers and separator
 * @separator: Separator between numbers
 * @n: Number of ints passed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{


		printf("%d", va_arg(list, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
