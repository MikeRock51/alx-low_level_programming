#include "main.h"
/*
 * main - Copies the content of a file to another file
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd, o, r, w, c, d;
	char *file_from = argv[1], *file_to = argv[2], *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(file_from, O_RDONLY);
	r = read(fd, buffer, 1024);
	o = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd);
		exit(98);
	}
	w = write(o, buffer, r);
	if (o == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd);
		exit(99);
	}
	c = close(fd);
	d = close(o);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd);
		exit(100);
	}
	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", o);
		exit(100);
	}
	return (0);
}
