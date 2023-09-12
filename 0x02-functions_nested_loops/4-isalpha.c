#include "main.h"
#include <ctype.h>
/**
 * _isalpha- checks upper or lower case
 *@c: value checked
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (islower(c) || isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
