#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Parameter to compute
 *
 * Return: Natural square root of n
 * or -1, if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt(0, n));
}

/**
 * _sqrt - Returns the square root of a number
 * @n: Number to test
 * @x: Squared number
 *
 * Return: the square root of n
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
	{
		return (-1);
	}
	else if (n * n == x)
	{
		return (n);
	}
	return (_sqrt(n + 1, x));
}
