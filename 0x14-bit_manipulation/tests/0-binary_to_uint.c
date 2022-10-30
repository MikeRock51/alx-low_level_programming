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
	unsigned int sum = 0;
	int i = 0;

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	if (b == NULL)
		return (0);

	i = 0;
	while (b[i])
	{
		sum <<= 1;
		if (b[i] == '1')
		{
			sum++;
		}
		i++;
	}

	return (sum);
}
