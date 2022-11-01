#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file to append to
 * @text_content: A string of text to append
 *
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_RDWR | O_APPEND);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
