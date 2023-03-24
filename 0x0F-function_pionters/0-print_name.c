#include "function_pointers.h"

/**
 * print_name - Print name using f function
 * @name: Name to print
 * @f: Function to perform print
 * Return: Nothing if false
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}

