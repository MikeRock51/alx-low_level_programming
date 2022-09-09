#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: 0 if code works
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n % 10 + '0');

		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

		putchar('\n');

	return (0);
}
