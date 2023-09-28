#include "main.h"

int actual(int n, int j);

/**
 * is_prime_number - function
 * @n: number
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual(n, n - 1));
}

/**
 * actual - funciton
 * @n: number
 * @i: iterator
 *
 * Return: 1 or zero
 */
int actual(int n, int j)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual(n, i - 1));
}

