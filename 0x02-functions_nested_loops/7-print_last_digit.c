#include "main.h"
/**
 * print_last_digit - calculates the absoluye value if an integer
 * @n: takes an int n as input
 *
 * Return: 0 always
 */
int print_last_digit(int n)
{
	int d = n % 10;
	_putchar(d);
	return (d);
	
}
