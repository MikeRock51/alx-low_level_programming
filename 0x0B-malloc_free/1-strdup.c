#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Returns the length of string.
 * @s: Takes as s input
 *
 * Return: The length of *s
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		;
	}

	return (i);
}

/**
 * _strdup - Duplicates a given string and returns pointer to new address.
 * @str: String parameter
 *
 * Return: Pointer to the duplicate string
 */
char *_strdup(char *str)
{
	char *str2;
	int i, length;

	length = _strlen(str);

	str2 =  malloc(length + 1);

	if (str2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i];  i++)
	{
		str2[i] = str[i];
	}

	str2[i] = '\0';

	return (str2);
}
