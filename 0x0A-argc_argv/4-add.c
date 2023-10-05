#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * convert_to - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int convert_to(char *str)
{

	unsigned int c;

	c = 0;
	while (c < strlen(str))

	{
		if (!isdigit(str[c])) /*check if str there are digit*/
		{
			return (0);
		}

		c++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{


	int c;
	int str_to_int;
	int result = 0;

	c = 1;
	while (c < argc)
	{
		if (convert_to(argv[c]))

		{
			str_to_int = _convert_to_int(argv[c]);
			result += str_to_int;
		}


		else
		{
			printf("Error\n");
			return (1);
		}

		c++;
	}

	printf("%d\n", result); /*print sum*/

	return (0);
}

