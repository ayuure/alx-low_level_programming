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
 * @j: iterator
 *
 * Return: 1 or zero
 */
int actual(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (actual(n, j - 1));
}

