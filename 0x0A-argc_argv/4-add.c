#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to the program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i, result;

	result = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			result += atoi(argv[i]);
		}
	}

	printf("%i\n", result);
	return (0);
}
