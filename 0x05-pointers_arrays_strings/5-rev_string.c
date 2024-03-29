#include "main.h"

/**
 * rev_string - Reverses
 * @s: Input string
 *
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char r = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		r = s[i];
		s[i] = s[counter];
		s[counter] = r;
	}
}

