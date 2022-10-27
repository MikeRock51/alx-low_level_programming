#include "main.h"

/**
 * flip_bits - Returns the nmber of bits that nees to be flipped
 * to go from one number to another
 * @n: Starting number
 * @m: Final number
 *
 * Return: The number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int count = 0;

	while (flipped)
	{
		if (flipped & 1)
			count++;
		flipped >>= 1;
	}
	return (count);
}
