#include <stdlib.h>
#include "main.h"

/**
 * count - helper function
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count(char *s)
{
	int f, i, j;

	f = 0;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			j++;
		}
	}

	return (j);
}
/**
 * **strtow - splits function
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **m, *t;
	int i, k = 0, l = 0, words, c = 0, start, end;

	while (*(str + l))
		l++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	m = (char **) malloc(sizeof(char *) * (words + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				t = (char *) malloc(sizeof(char) * (c + 1));
				if (t == NULL)
					return (NULL);
				while (start < end)
					*t++ = str[start++];
				*t = '\0';
				m[k] = t - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	m[k] = NULL;

	return (m);
}

