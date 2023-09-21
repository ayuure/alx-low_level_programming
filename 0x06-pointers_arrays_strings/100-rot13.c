#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoder
 * @s: pointer
 *
 * Return: s
 */

char *rot13(char *s)
{
	int i;
	int u;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (u = 0; u < 52; u++)
		{
			if (s[i] == data1[u])
			{
				s[i] = datarot[u];
				break;
			}
		}
	}
	return (s);
}

