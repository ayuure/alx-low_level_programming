#include "main.h"

int actual(int n, int j);

/**
 * _sqrt_recursion - number
 * @n: number
 *
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual(n, 0));
}

