#include "main.h"

/**
 * clear_bit - Sets the value of bit at index to 0
 * @n: Decimal to set
 * @index: The index to set
 *
 * Return: 1 for success
 * or 0 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n |= (0 << index);
	return (1);
}
