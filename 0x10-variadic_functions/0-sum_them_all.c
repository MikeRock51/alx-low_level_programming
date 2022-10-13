#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Computes the sum of all the arguments in a variadic function
 * @n: The number of argument being passed
 *
 * Return: The sum of all the argument to the function
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
