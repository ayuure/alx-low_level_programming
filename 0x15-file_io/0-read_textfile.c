#include "main.h"

/**
 * read_textfile - reads
 * @filename: file
 * @letters: number
 *
 * Return: sucess
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t n, nw;
	char *br;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	br = malloc(sizeof(char) * (letters));
	if (!br)
		return (0);

	n = read(file, br, letters);
	nw = write(STDOUT_FILENO, br, n);

	close(file);

	free(br);

	return (nw);
}
