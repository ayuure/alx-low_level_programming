#include "main.h"

/**
 * binary_to_uint - function
 * @b: is pointer
 *
 * Return: sucess
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		i = (i << 1) + (*b - '0');
		b++;
	}
	return (i);
}
