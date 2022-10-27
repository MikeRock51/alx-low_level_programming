#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: Number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, j;

	for (i = 31; i >= 0; i--)
	{
		j = n >> i;
		if (j & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
