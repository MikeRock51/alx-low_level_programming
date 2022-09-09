#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: 0 if code works
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j > i)
			{
				putchar(i % 10 + '0');
				putchar(j % 10 + '0');

				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);

}
