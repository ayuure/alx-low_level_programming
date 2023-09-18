#include "main.h"
/**
 * puts2- function
 *@str: value.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int l = 0;
	int t = 0;
	char *y = str;
	int q;

	while (*y != '\0')
	{
		y++;
		l++;
	}
	t = l - 1;
	for (q = 0 ; q <= t ; q++)
	{
		if (q % 2 == 0)
	{
		_putchar(str[q]);
	}
	}
	_putchar('\n');

}
