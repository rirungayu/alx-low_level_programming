#include "main.h"

/**
* main - copy info from file_from to file_to.
* @ac: number of arguments
* @av: array of arguments
* Return: Always 0.
*/

int main(int ac, char **av)
{
	int original, copy;
	ssize_t  l_read = 1024, l_write, close_file;
	char content[1024];

	if (ac != 3)
	{ dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	original = open(av[1], O_RDONLY);
	if (original == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
		exit(98); }
	copy = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99); }
	while (l_read == 1024)
	{
		l_read = read(original, content, 1024);
		if (l_read == -1)
		{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98); }
		l_write = write(copy, content, l_read);
		if (l_write == -1)
		{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99); }
	}
	close_file = close(file_from);
	if (close_file == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", original);
		exit(100); }
	close_file = close(file_to);
	if (close_file == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", copy);
		exit(100); }
return (0);
}
