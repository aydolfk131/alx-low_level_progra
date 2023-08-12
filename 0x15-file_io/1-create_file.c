#include "main.h"
/**
 * create_file - A funrction that creates a file
 * @filename: The filename
 * @text_content: file content
 * Return: 1 if it success and -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, let, rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	for (let = 0; text_content[let]; let)
		;
	rwr = write(fd, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(fd);
	return (1);
}
