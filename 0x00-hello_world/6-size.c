#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{

	printf("size of a char : %c byte(s)",sizeof(char));
	printf("size of an int : %d byte(s)",sizeof(int));
	printf("size of a long int : %ld byte(s)",sizeof(long int));
	printf("size of a long long int : %lld byte(s)",sizeof(long long int));
	printf("size of a float : %lf byte(s)",sizeof(float));
	return (0);
}
