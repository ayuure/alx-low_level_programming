#include "main.h"
/**
 * reverse_array - reverse
 * @a: array
 * @n: number
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n - 1; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}

