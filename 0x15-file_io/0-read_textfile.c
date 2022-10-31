#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to standard output
 * @filename: The file to read
 * @letters: The number of characters to read and print
 *
 * Return: The number of character that was printed
 * Or return 0 if filename is NULL or file could not be opened
 * Or if write fails or doesn't write the expected anmount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, read_len, write_len;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		free(buf);
		return (0);
	}

	read_len = read(fd, buf, letters);
	if (read_len == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	write_len = write(STDOUT_FILENO, buf, read_len);
	if (write_len != read_len)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (write_len);
}
