#include "main.h"
/**
 * _strncpy - function to coppy
 *@dest: one
 *@src: two
 *@n: number
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] = '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
