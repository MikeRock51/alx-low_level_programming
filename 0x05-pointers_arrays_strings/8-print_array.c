#include <stdio.h>
/**
 * print_array - Prints a hiven element of an array
 * @a: The array parameter
 * @n: The array element to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}

	printf("\n");
}