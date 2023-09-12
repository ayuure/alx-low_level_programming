#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int day, hour;

	day = 0;

	while (day < 24)
	{
		hour = 0;
		while (hour < 60)
		{
			_putchar((day / 10) + '0');
			_putchar((day % 10) + '0');
			_putchar(':');
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar('\n');
			 hour++;
		}
		day++;
	}
}
