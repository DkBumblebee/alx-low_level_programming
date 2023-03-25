#include "variadic_functions.h"

/**
 * print_strings - Print variety of strings separated by a
 * separator
 * @separator: Goes between strings
 * @n: Number of variables passed to the function
 * Return: (nil) if String is null or else return nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(list);
}
