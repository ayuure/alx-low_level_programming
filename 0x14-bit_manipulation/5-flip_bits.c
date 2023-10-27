#include "main.h"
/**
 * flip_bits - function
 * @n: num
 * @m: num
 *
 * Return: sucess
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d, sum;
	unsigned int j, i;

	j = 0;
	sum = 1;
	d = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (sum == (d & sum))
			j++;
		sum <<= 1;
	}

	return (j);
}
