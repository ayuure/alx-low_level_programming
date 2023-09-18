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
	int d;
	int n;
	int len; 
	int f; 
	int di;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	di = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			di = s[i] - '0';
			if (d % 2)
				di = -di;
			n = n * 10 + di;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

