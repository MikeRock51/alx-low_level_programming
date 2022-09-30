#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to check
 * @accept: Characters to check for
 *
 * Return: Number of bytes used, before
 * finding an imcompatible character
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++, s++)
	{
		for (j = 0; *accept != '\0'; accept++, j++)
		{
			if (*s == *accept)
			{
				break;
			}
		}
		if (*accept == '\0')
		{
			break;
		}
		accept -= j;
	}
	return (i * sizeof(char));
}
