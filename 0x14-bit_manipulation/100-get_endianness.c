#include "main.h"

/**
 * get_endianness - function
 *
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *e = (char *)&n;

	if (*e)
	return (1);
	else
	return (0);
}

