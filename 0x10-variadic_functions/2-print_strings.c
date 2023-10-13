#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 * @separator: The string
 * @n: The number
 * @...: A variable
 *
 * Description: If separator is NULL
 *              If one of the strings if NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ss;
	char *str;
	unsigned int i;

	va_start(ss, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ss, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ss);
}

