#include "main.h"
/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
	{
	char alpha = 'a';

	while (alpha <= 'z')
		{
		_putchar (alpha);
		alpha++;
		}
	_putchar('\n');
	return;
	}
