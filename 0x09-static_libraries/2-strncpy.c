#include "main.h"

/**
 * *_strncpy - Copies strings using n bytes
 * @dest: Copy string to
 * @src: Copy string for
 * @n: Number of bytes allowed for copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
