#include "main.h"
/**
 * *string_toupper - Changes all lowercase characters in a string
 * to uppetcase
 * @n: String to convet
 *
 * Return: Uppercase equivalent of input
 */
char *string_toupper(char *n)
{
	int j;

	for (j = 0; n[j] != '\0'; j++)
	{
		if (n[j] > 96 && n[j] < 123)
		{
			n[j] -= 32;
		}
	}

	return (n);
}
