#include "main.h"
/**
 * is_prime_number - Checks if a given number is prime or not
 * @n: Given number
 *
 * Return: 1 if n is prime or 0 if n is now prime
 */
int is_prime_number(int n)
{
	int divider = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n % n == 0 || n % 1 == 0)
	{
		if (prime_number(divider, n) != 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

/**
 * prime_number - Helper function, recursive steps taken
 * @n: number given to original function is_prime_number
 * @divider: incrementer divisor
 * Return: 0 if not prime, 1 if prime
 */

int prime_number(int divider, int n)
{
	if (divider < n)
	{
		if (n % divider == 0)
		{
			return (0);
		}
		else
		{
			++divider;
			return (prime_number(divider, n));
		}
	}
	else
	{
		return (1);
	}
}
