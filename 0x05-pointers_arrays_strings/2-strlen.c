#include "main.h"
/**
 * _strlen- function to find the length
 *@s: value
 *
 * Return: length
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
