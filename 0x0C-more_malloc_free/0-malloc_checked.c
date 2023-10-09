#include <stdlib.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	ptr = malloc(b);

	if (p == NULL)
	{
	exit(98);
	}
	return (p);
}
