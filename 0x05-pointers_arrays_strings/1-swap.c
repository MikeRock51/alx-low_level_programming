#include "main.h"
/**
 * swap_int - Swaps the value of 2 integers
 * @a: Argument 1
 * @b: Argument 2
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;

	*a = *b;
	*b = i;
}
