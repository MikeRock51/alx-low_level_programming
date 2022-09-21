#include "main.h"

/**
 * _strlen - Returns the length of a given string
 * @s: Takes *s as input
 *
 * Return: The length of *S
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}

	return (i);
}

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
	int i, j;

	i = 0;
	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
