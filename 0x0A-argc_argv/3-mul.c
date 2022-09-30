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
	int i, j, x;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	x = i * j;

	printf("%i\n", x);

	return (0);
}
