#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints numbers and stops at 98, starting from n value
 * @n: takes n as argument
 */
void print_to_98(int n)
{
	int print;

	if (n < 98)
	{
		for (print = n; print < 98; print++)
		{
			printf("%i, ", print);
			n++;
		}
	}
	else if (n > 98)
	{
		for (print = n; print > 98; print--)
		{	printf("%i, ", print);
			n--;
		}
	}
	else
	{
		printf("%i", print);
	}

	_putchar('\n');
}
