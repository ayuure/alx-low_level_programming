#include "main.h"
/**
 * _strspn - Function
 * @s: input 1
 * @accept: input 2
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int q = 0;
	int l;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
			if (*s == accept[l])
			{
				q++;
				break;
			}
			else if (accept[l + 1] == '\0')
				return (q);
		}
		s++;
	}
	return (q);
}

