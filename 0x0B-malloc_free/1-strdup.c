#include "main.h"
#include <stdlib.h>

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

	for (i = 0, length = 0; str[i]; i++)
	{
		length++;
	}

	str2 = malloc(length * sizeof(char) + 1);

	for (i = 0; str[i]; i++)
	{
		str2[i] = str[i];
	}

	str2[i] = '\0';

	return (str2);
}
