#include "main.h"
/**
 *_isupper - checks if a charcter is upper case
 *@c: value to be checker
 *
 *Return 1: uppercase
 */
int _isupper(int c)
	{
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
