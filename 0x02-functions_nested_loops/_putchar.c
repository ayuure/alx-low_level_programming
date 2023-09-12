#include "main.h"
#include <unistd.h>
/**
 * _putchar - write characters to the standard output
 * @c: is the character to be written.
 *
 * Return: sucess
 */
int _putchar (char c)
	{
	return (write(1, &c, 1));
	}
