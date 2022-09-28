#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: Value to be raised
 * @y: Number of times value should be raised
 *
 * Return: x raised to the power of y or -1 if y is < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (_pow_recursion(x, y - 1) * x);
}
