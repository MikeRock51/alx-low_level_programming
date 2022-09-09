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

	/* Create a variable that gets and checks the value of the last digit of n*/
	int last_digit = n % 10;

		if (last_digit > 5)
		{
			printf("Last digit of %i is %i and is greater than 5\n", n, last_digit);
		}
		else if (last_digit == 0)
		{
			printf("Last digit of %i is %i and is 0\n", n, last_digit);
		}
		else if (last_digit < 6 && last_digit != 0)
		{
			printf("Last digit of %i is %i and is less than 6 and not 0 \n", n, last_digit);
		}

	return (0);
}
