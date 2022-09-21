#include "main.h"

/**
 * _strcmp - Compares to strings
 * @s1: First string parameter
 * @s2: Secind string parameter
 *
 * Return: 0 if both strings are identical
 * Return positive value if s1 is > s2
 * Return negative value if s1 is < s2
 */
int _strcmp(char *s1, char *s2)
{
	int j;

	j = 0;

	while (s1[j] == s2[j])
	{
		if (s1[j] == '\0')
		{
			return (0);
		}
		j++;
	}

	return (s1[j] - s2[j]);
}
