#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints all the numbers passed to it as argument
 * @seperator: String for seperating each number argument
 * @n: Number of arguments passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(args, unsigned int));
		if (i < (n-1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
