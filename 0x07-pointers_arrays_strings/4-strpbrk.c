#include "main.h"

/**
 * _strpbrk - Checks for the first occurrnce of a set of
 * cbaracter in a string
 * @s: String to be checked
 * @accept: set of characters to check for
 *
 * Return: s from the character that matches accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
