#include "main.h"
/**
 * print_last_digit- prints the last digit of a number
 *@n: number to find last digit
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit  < 0)
	{
		lastDigit = -lastDigit;
	}
	_putchar(lastDigit);
	return (lastDigit);
}
