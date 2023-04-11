#include "search_algos.h"


/**
 * linear_search - Searches for a value in an array of integers,
 * using Linear search algorithm
 * @array: Array of integers to search
 * @size: Size of array
 * @value: Value to search for
 *
 * Return: the first index where value is found
 * Or retrun -1 if value is not present or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array)
		return (-1);

	while (i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
