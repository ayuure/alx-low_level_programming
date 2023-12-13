#include "main.h"

/**
 * _atoi - converts
 * @s: string
 *
 * Return: the int converted
 */
int _atoi(char *s)
{
	int i;
	int counter = 0;
	int num = 0;
	char sign = '\0';

	while (s[counter])
	counter++;
	for (i = 0; i < counter; i++)
	{
		num = num * 10;
		if (s[i] >= '0' && s[i] <= '9')
	{
		num += (s[i] - '0');
		if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
	{
		break;
	}
		if (s[i - 1] == '-')
		{
			sign = '-';

		}
	}
	}
	if (num == 0)
	{
		return (0);
	}

	if (sign == '-')
	{
		num = -num;
	}
	return (num);
}
