#include "main.h"
/**
 * times_table- times table for 9
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i;
	int j;
	int sum = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			sum = i * j;
		}
			if (j == 0)
			{
				_putchar(sum + '0');
			}

			if (sum < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(sum + '0');
			} else if (sum >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((sum / 10) + '0');
				_putchar((sum % 10) + '0');
			}
		}
		_putchar('\n');
}
