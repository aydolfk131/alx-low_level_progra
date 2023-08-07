#include "main.h"
/**
 * read_textfile - A function thst reads a textfile and prints the letters
 * @filename:  The filename
 * @letters: letters printed
 * Return: number of letters printed and It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nw;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nrd = read(fd, buffer, letters);
	nw = write(STDOUT_FILENO, buffer, nrd);

	close(fd);
	free(buffer);
	return (nw);
}
