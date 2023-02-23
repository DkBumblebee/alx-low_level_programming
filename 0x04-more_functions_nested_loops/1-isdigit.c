#include "main.h"

/**
 * _isdigit - functions that checkes for uppercase character
 * Return: return 1 if uppercase, 0 if not
 * @c: character to test
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	return (1);

	return (0);
}
