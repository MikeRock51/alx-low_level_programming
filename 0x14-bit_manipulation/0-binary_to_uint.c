#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an insigned int
 * @b: A string containing the binary to be converted
 *
 * Return: The input in base 10
 * or 0 if b contains an unsupported character
 * or if b is null
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0, i;
	unsigned int sum = 0, base = 1;

	if (b == NULL)
		return (0);

	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			sum += (1 * base);
		}
		base *= 2;
	}
	return (sum);
}
