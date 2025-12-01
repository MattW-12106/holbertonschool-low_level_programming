#include "main.h"

/**
 * read_textfile - reads the textfile and prints to output
 * @filename: the file
 * @letters: the text
 * Return: returns bytes written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytesRead, bytesWritten;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytesRead = read(fd, buffer, letters);
	if (bytesRead == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	free(buffer);
	close(fd);

	if (bytesWritten == -1 || bytesWritten != bytesRead)
		return (0);

	return (bytesWritten);
}
