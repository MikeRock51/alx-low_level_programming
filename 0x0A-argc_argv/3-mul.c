#include <stdio.h>

/**
 * main - Entry point to the program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int x;

		x = argv[1] * argv[2];
		printf("%i\n", x);
	}
	return (0);
}
