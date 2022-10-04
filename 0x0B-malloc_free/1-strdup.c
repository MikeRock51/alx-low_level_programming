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

	for (i = 0; *s != '\0'; i++)
	{
		s++;
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
	int i, l;

	l =  malloc(_strlen(str) + 1);
	str2 = l

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < _strlen(str); i++)
	{
		str2[i] = str[i];
	}

	if (str2 == NULL)
	{
		return (NULL);
	}

	str2[l] = '\0';

	return (str2);
}
