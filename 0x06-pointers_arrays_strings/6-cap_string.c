#include "main.h"

/**
 * cap_string - Capitalizes
 * @str: The string
 *
 * Return: A pointer
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
{
	if (str[i] == 32
	|| str[i] == ','
	|| str[i] == ';'
	|| str[i] == '.'
	|| str[i] == '!'
	|| str[i] == '?'
	|| str[i] == '\"'
	|| str[i] == '('
	|| str[i] == ')'
	|| str[i] == '{'
	|| str[i] == '}'
	|| str[i] == '\n'
	|| str[i] == '\t')
	{
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i + 1] = str[i + 1] - 32;
		}

	}

	i++;
	}
	return (str);
}
