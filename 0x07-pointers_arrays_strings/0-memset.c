#include "main.h"
/**
 * _memset - fill
 * @s: starting
 * @b: the desired
 * @n: number
 *
 * Return: changed
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
