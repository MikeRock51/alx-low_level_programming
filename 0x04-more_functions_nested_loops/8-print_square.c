#include "main.h"
/**
 * print_square - Prints square of given size to the terminal
 * @size: The amount of squares to be printed
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
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
