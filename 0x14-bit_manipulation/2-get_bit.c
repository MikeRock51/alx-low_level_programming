#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: Bit to check
 * @index: The index to get value from
 *
 * Return: The value of bit at index
 * or -1 if there's an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
