#include "main.h"
/**
 *a- value
 *@n : number
 * @i : number
 *
 * Return: a
*/
int a(int n, int i)
{
if (i * i == n)
	return (i);
	else if (i * i > n)
	return (-1);

	return (a(n, i + 1));
}
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
	return (a(n, 0));
}

