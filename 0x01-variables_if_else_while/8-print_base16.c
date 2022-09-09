#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: 0 if code works
 */
int main(void)
{
	int n;
	char a;

	for (n = 0; n < 10; n++)
	{
		putchar(n % 10 + '0');
	}

	for (a = 'a'; a < 'g'; a++)
	{
		putchar(a);
	}

		putchar('\n');

	return (0);

}
