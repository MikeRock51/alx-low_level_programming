#include "main.h"
/**
 * _isupper - Checks if a character is uppercase
 * @c: function takes c as input
 *
 * Return: 1 if character is uppercase
 * Return 0 if character is not uppercase
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}

	return (0);
}
