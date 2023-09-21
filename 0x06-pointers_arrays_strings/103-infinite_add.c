#include "main.h"
/**
 * rev_string - reverse
 * @n: integer params
 *
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int k = 0;
	char t;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (k = 0; k < i; k++, i--)
	{
		t = *(n + k);
		*(n + k) = *(n + i);
		*(n + i) = t;
	}
}
