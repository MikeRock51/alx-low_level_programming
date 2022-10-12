#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Performs a mathemathical operation
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 always
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int n1, n2;
	char *opr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	opr = argv[2];

	if (get_op_func(opr) == NULL || opr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opr == '/' && n2 == 0) || (*opr == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(opr)(n1, n2));
	return (0);
}
