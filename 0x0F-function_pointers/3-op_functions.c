#include "3-calc.h"

/**
 * op_add - Performs an addition of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - Performs a subtraction of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The sum of a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Performs a multiplication of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The sum of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - Performs a division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The sum of a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - Performs a division of two numbers and returns the remainder
 * @a: first number
 * @b: second number
 *
 * Return: The remainder of a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
