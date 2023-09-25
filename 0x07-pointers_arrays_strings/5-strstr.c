#include "main.h"
/**
 * _strstr - function
 * @haystack: input 1
 * @needle: input 2
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *lg = haystack;
		char *pe = needle;

		while (*lg == *pe && *pe != '\0')
		{
			lg++;
			pe++;
		}

		if (*pe == '\0')
			return (haystack);
	}

	return (0);
}

