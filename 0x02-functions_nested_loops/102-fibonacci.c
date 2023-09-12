#include <stdio.h>
/**
 * main - Prints first 50
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long f1 = 0;
	unsigned long f2 = 1;
	unsigned long sum;

	for (count = 0; count < 50; count++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

