#include "main.h"

/**
 * char *_strcpy - a function
 * @dest: copy
 * @src: copy
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int x = 0;

	while (*(src + y) != '\0')
	{
		y++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}

