#include "main.h"
#include <stdio.h>

/**
 * _errorFile - checks if files can be opened.
 * @_from: file_from.
 * @_to: file_to.
 * @argv: arguments vector
 *
 * Return: no return.
 */
void _errorFile(int _from, int _to, char *argv[])
{
	if (_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code
 * @argc: number
 * @argv: arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int _from, _to, _close;
	ssize_t nc, n;
	char b[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	_from = open(argv[1], O_RDONLY);
	_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	_errorFile(_from, _to, argv);

	nc = 1024;
	while (nc == 1024)
	{
		nc = read(_from, b, 1024);
		if (nc == -1)
			_errorFile(-1, 0, argv);
		n = write(_to, b, nc);
		if (n == -1)
			_errorFile(0, -1, argv);
	}

	_close = close(_from);
	if (_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _from);
		exit(100);
	}

	_close = close(_to);
	if (_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _from);
		exit(100);
	}
	return (0);
}
