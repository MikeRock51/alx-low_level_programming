#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints all strings passed as argument
 * @separator: Puctuation to be used between strings
 * @n: Number of argumenetrs passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char*);
		if (string == NULL)
		printf("(nil)");
		else
		printf("%s", string);
		if (i < (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
