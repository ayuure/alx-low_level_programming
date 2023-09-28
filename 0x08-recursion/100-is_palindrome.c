#include "main.h"

int check(char *s, int i, int j);
int _strlen(char *s);

/**
 * is_palindrome - function
 * @s: string
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - function
 * @s: string
 *
 * Return: function
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * check - function
 * @s: string
 * @i: iterator
 * @j: length
 *
 * Return: 1 or 0
 */
int check(char *s, int i, int j)
{
	if (*(s + i) != *(s + j - 1))
		return (0);
	if (i >= j)
		return (1);
	return (check_pal(s, i + 1, j - 1));
}

