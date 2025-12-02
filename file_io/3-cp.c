#include "main.h"

/**
 * main - copies file to a file
 * @argc: num of args
 * @argv: arg vector
 * Return: 0 on success
 */

int main (int argc, char *argv[])
{
	char buffer[1024];
	ssize_t bytesread, byteswrite;
	int fdfrom, fdto;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdfrom = open(argv[1], O_RDONLY);

	if (fdfrom == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fdto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fdto == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((bytesread = read(fdfrom, buffer, 1024)) > 0)
	{
		byteswrite = write(fdto, buffer, bytesread);

		if (byteswrite == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(fdto);
			close(fdfrom);
			exit(99);
		}
	}

	if (bytesread == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close(fdto);
		close(fdfrom);
		exit(98);
	}

	if (close(fdto) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdto);
		exit(100);
	}

	if (close(fdfrom) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdfrom);
		exit(100);
	}

	return (0);
}

