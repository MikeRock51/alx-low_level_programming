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
 * *_strncat - Concatenates two strings into one using n bytes
 * @dest: src is added here
 * @src: The content of src is added to dest
 * @n: Number of bytes allowed for concatenation
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (i < _strlen(dest))
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
