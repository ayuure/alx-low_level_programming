#include "main.h"
/**
 * print_rev- function
 *@s: value
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int a = 0;
	int b;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	s--;
	for (b = a; b > 0; b--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

