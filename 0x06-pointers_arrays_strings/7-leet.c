#include "main.h"
/**
 * leet - encode
 * @n: input
 *
 * Return: n
 */
char *leet(char *n)
{
	int i, u;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (u = 0; u < 10; u++)
		{
			if (n[i] == s1[u])
			{
				n[i] = s2[u];
			}
		}
	}
	return (n);
}

