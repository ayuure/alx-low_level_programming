#include "main.h"
/**
 * _strlen_recursion - function
 * @s: The string
 *
 * Return: The length
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}

	return (l);
}

