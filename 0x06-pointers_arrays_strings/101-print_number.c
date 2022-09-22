#include "main.h"

/**
 * print_number - Prints given integer
 * @n: Integer to print
 */
void print_number(int n)
{
	unsigned int nn;

	if (n < 0)
	{
		_putchar('-');
		nn = -n;
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	_putchar(n % 10 + '0');
}
