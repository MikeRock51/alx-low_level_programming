#include "function_pointers.h"

/**
 * int_index - Searches for ab integer
 * @array: The array to search
 * @size: The size of array
 * @cmp: The function  used to compare numbers
 *
 * Return: The first occurence of a non-zero return value from cmp
 * Return -1 if size is <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
