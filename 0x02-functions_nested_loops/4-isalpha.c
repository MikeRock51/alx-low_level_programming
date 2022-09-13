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
	int upper;
	int lower;
	int i;
	int j;

	for (i = 'A'; i <= 'Z'; i++)
	{
		upper += i;
	}


	for (j = 'a'; j <= 'z'; j++)
	{
		lower += j;
	}

	if (c == upper || c == lower)
	{
		return (0);
	}

	return (1);
}
