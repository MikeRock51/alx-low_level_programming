#include "main.h"
/**
 * print_triangle - Prints triangles to he terminal
 * @size: Takes as input, to determine the size of triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = (size - 1); j > i; j--)
			{
				_putchar(' ');
			}

			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
			continue;
		}
	}
	else
	{
		_putchar('\n');
	}
}
