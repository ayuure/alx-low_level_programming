#include "main.h"

/**
 * set_bit - function
 * @index: index
 * @n: pointer
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	j = 1 << index;
	*n = *n | j;

	return (1);
}
