#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function
 * @argc: Number
 * @argv: Array
 * Return: 0 when successful, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i <  argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (!isdigit(argv[i][k]))
	{
		printf("Error\n");
		return (1);
	}
	}
		add += _convert_to_int(argv[m]);
	}
	printf("%d\n", add);
	return (0);
}
