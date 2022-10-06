#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes of s2 to copy
 *
 * Return: A pointer to a new string containing s1
 * and n bytes of s2. Or NULL if program fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
	len1++;

	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	/*str = malloc((sizeof(s1) + n) * sizeof(char));*/
	str = malloc(sizeof(char) * (len1 + n) + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';
	return (str);
}
