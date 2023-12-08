#include "main.h"

/**
 * create_file - file
 * @filename: file.
 * @text_content: content
 *
 * Return: sucess
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int nl;
	int r;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nl = 0; text_content[nl]; nl++)
	;
	r = write(file, text_content, nl);

	if (r == -1)
		return (-1);

	close(file);

	return (1);
}
