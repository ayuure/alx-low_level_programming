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
	int i;
	int counter = 0;

	while (src[counter] != '\0')
	counter++;

	for (i = 0; i < counter; i++)
	{
		dest[i] = src[i];
	}
	dest[counter] = '\0';
	return (dest);
}
