#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string
 * @s: String to check
 *
 * Return: Length of s
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (*s != '\0')
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
