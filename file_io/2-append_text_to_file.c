#include "main.h"

/**
 * append_text_to_file - appends text to end of a file
 * @filename: name of file
 * @text_content: content of text
 * Return: 1 on success, -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t i;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		i = write(fd, text_content, len);

		if (i == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
