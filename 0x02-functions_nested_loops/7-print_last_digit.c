#include "main.h"
/**
 * print_last_digit - calculates the absoluye value if an integer
 * @n: takes an int n as input
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		l = n * -1;
	}
	else
	{

	l = n % 10;

	}

	_putchar(l + '0');
	return (l);

}
