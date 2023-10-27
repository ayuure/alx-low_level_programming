#include "main.h"
/**
 * _rep - function
 * @b: base
 * @p: power
 * Return: value
 */
unsigned long int _rep(unsigned int b, unsigned int p)
{
	unsigned long int j;
	unsigned int i;

	j = 1;
	for (i = 1; i <= p; i++)
		j *= b;
	return (j);
}
/**
 * print_binary - function
 * @n: num
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int d, r;
	char f;

	f = 0;
	d = _rep(2, sizeof(unsigned long int) * 8 - 1);

	while (d != 0)
	{
		r = n & d;
		if (r == d)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || d == 1)
		{
			_putchar('0');
		}
		d >>= 1;
	}
}
