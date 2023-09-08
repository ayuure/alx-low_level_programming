#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
	int a, p;

	for (a = 48; a <= 56; a++)
	{
		for (p = 49; p <= 57; p++)
		{
			if (p > a)
			{
				putchar(a);
				putchar(p);
				if (a != 56 || p != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
	}
