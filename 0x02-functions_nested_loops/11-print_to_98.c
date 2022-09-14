#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints numbers and stops at 98, starting from n value
 * @n: takes n as argument
 */
void print_to_98(int n)
{
	int print = n;

	while (n < 98)
	{
		printf("%i, ", print);
		print++;
		n++;
	}

	while (n > 98)
	{
		printf("%i, ", print);
		print--;
		n--;
	}

	printf("%i", print);
	_putchar('\n');
}
