#include "main.h"
/**
 * print_line - Prints _ to the terminal n times
 * @n: The number _ that should be printed
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
