#include "main.h"
#include <stdio.h>
/**
 * _convert_to_int - print the number of arguments passed to the program
 * @s: char
 *
 * Return: Always 0 (Success)
 */
int _convert_to_int(char *s)
{
	int i, d, n, l, f, di;

	i = 0;
	d = 0;
	n = 0;
	l = 0;
	f = 0;
	di = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && f == 0)
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

	if (f == 0)
		return (0);

	return (n);
}
/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result, n1, n2;

	if (argc <= 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = _convert_to_int(argv[1]);
		n2 = _convert_to_int(argv[0]);

		result = n1 * n2;

		printf("%d\n", result);
	}
	return (0);
}
