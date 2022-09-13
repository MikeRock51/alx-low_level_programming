#include "main.h"
/**
 * print_sign - Prints the sign of numbers
 * @n: takes int n as input
 *
 * Return: 1 if number is positive
 * return 0 if number is zero
 * return -1 if number is negative
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
