#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: 0 if code works
 */
int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower < 'z'; lower++)
	{
		putchar(lower);

	}

	for (upper = 'A'; upper < 'Z'; upper++)
	{
		putchar(upper);
	}

		putchar('\n');

	return (0);
}
