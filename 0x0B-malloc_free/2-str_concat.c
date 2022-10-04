#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Address to the combined string
 * or NULL if program fails
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int i, j, len1, len2;

	if (s1 == NULL && s2 == NULL)
	{
		cat = "";
		return (cat);
	}

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0, len1 = 0; s1[i]; i++)
		len1++;

	for (i = 0, len2 = 0; s2[i]; i++)
		len2++;

	cat = malloc(len1 + len2 * sizeof(char) + 1);

	if (cat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		cat[i] = s1[i];
	}

	for (i = len1, j = 0; s2[j]; i++, j++)
	{
		cat[i] = s2[j];
	}
	cat[i] = '\0';
	return (cat);
}
