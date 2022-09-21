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
 * _strcmp - Compares to strings
 * @s1: First string parameter
 * @s2: Secind string parameter
 *
 * Return: 0 if both strings are identical
 * Return positive value if s1 is > s2
 * Return negative value if s1 is less than s2 
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;

	while (i < _strlen(s1) && i < _strlen(s2))
	{
		i++;
	}

	j = 0;

	while (j < i)
	{
		if (s1[j] == s2[j])
		{
			if (s1[j] != '\0' && s2[j] != '\0')
			{
				j++;
				continue;
			}
			else
			{
				break;;
			}
		}
		else if (s1[j] > s2[j])
		{
			return (15);
			break;
		}
		else
		{
			return (-15);
			break;
		}
	}

	return (0);
}
