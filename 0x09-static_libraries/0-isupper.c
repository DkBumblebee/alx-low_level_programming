#include "main.h"

/**
 * _isupper - functions that checkes for uppercase character
 * Return: return 1 if uppercase, 0 if not
 * @c: character to test
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	return (1);

	return (0);
}
