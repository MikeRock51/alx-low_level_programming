#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: 0 if code works
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}

	putchar('\n');

	return (0);
}
