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
 * *_strcat - Concatenates two strings into one
 * @dest: src is added here
 * @src: The content of src is added to dest
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (i < _strlen(dest))
	{
		i++;
	}

	while (j < _strlen(src))
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
