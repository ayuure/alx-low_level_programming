#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
	char lowerCase = 'z';

	while (lowerCase >= 'a')
	{
		putchar(lowerCase);
		lowerCase--;
	}
	putchar('\n');
	return (0);
	}
