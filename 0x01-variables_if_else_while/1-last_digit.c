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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Create a variable that gets and checks the value of the last digit of n */

		printf("Last digit of %i is %i ", n, n % 10);

		if (n % 10 > 5)
		{
			printf("and is greater than 5\n");
		}
		else if (n % 10 == 0)
		{
			printf("and is 0\n");
		}
		else if (n % 10 < 6 && n % 10 != 0)
		{
			printf("and is less than 6 and not 0\n");
		}

	return (0);
}
