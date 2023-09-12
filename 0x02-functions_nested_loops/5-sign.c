#include "main.h"
#include <unistd.h>
/**
 * print_sign- checks a number to see if it is greater, less or equal to 0.
 *@n: variable being checked.
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
