#include "main.h"
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
