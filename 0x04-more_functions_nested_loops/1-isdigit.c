#include "main.h"
/**
 * _isdigit - Checks if a character is a digit
 * @c: Takes c as input
 *
 * Return: 1 if the character is a digit
 * Return 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}

	return (0);
}
