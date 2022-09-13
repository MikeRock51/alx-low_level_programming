#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints numbers and stops at 98, starting from n value
 * @n: takes n as argument
 */
void print_to_98(int n)

	while (n <= 98)
	{
		int print = n;

		printf("%i, ", print);
		print++;
	}

	printf("\n");
}
