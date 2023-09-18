#include "main.h"

/**
 * swap_int- swap numbers
 *@a:number 1
 *@b: number 2
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
	{
		int c;

		c = *a;
		*a = *b;
		*b = c;
	}
