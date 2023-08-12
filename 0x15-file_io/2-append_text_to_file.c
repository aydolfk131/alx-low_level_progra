#include "main.h"
/**
 * append_text_to_file - A function that appends text at end of file
 * @filename: The filename
 * @text_content: content to be added
 * Return: 1 if the file exist an -1 if the fails does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, letter, rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (letter = 0; text_content[letter]; letter++)
			NULL;
		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
