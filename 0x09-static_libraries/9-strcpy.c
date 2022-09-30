#include <stdio.h>
/**
 * *_strcpy - Copies an entire string, including the terminating byte
 * into the given buffer
 * @dest: The given buffer
 * @src: The string input
 *
 * Return: The pointer to @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
