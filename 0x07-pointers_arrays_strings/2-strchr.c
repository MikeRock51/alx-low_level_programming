#include "main.h"

/**
 * _strchr - Locates the first occurence of a character in a string
 * @s: String to check
 * @c: Character to locate
 *
 * Return: The pointer to the first occurence of c
 * or NULL, if character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
	}
	else
		return (NULL);
}
