#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: Array/string
 * Return: String
 */

char *cap_string(char *str)
{
	int i = 1;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	for (; str[i]; i++)
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t'
			|| str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '!'
			|| str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '('
			|| str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}'
			|| str[i - 1] == '.') && (str[i] > 'a' && str[i] < 'z'))
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
