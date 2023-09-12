#include "main.h"
/**
 * print_alphabet_x10- prints all the alphabets 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
	{
	char alpha = 'a';
	int i = 0;

	while (i < 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	i++;
	}
	return;
	}
