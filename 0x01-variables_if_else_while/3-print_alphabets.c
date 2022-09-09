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
	char lower[26] = "abcdefghijklmnopqrstuvwxyz";
	char upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lower[i]);

	}

	for (i = 0; i < 26; i++)
	{
		putchar(upper[i]);
	}

		putchar('\n');

	return (0);
}
