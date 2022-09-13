#include "main.h"
/**
 * _isalpha - Checks if a character is an alphabet
 * @c: Takes c as input
 *
 * Return: 1 if true.
 * Return 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
