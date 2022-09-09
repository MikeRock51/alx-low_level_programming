#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: 0 if code works
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{

		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}

	}

	putchar('\n');

	return (0);
}
