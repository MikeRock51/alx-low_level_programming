#include "main.h"
/**
 * _abs - calculates the absoluye value if an integer
 * @j: takes an int j as input
 *
 * Return: v always
 */
int _abs(int j)
{
	int i;
	int v = 0;

	if (j >= 0)
	{
		for (i = j; i > 0; i--)
		{
			v++;
		}
	}
	else
	{
		for (i = j; i < 0; i++)
		{
			v++;
		}
	}

	return (v);
}
