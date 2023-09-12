#include "main.h"
#include <ctype.h>
/**
 * _islower- checks if c is lower
 *@c: variable being checked.
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
