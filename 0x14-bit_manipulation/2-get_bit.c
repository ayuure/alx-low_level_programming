#include "main.h"

/**
 * get_bit - function
 * @n: value
 * @index: index
 *
 * Return: the value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, r;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	r = n & i;
	if (r == i)
		return (1);

	return (0);
}
