#include "main.h"
/**
 *_memcpy - a function
 *@dest: memory
 *@src: memory
 *@n: number
 *
 *Return: copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int w = 0;
	int i = n;

	for (; w < i; r++)
	{
		dest[w] = src[w];
		n--;
	}
	return (dest);
}
