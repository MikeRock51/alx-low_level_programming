#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array of integers,
 * using Binary search algorithm
 * @array: The array to search
 * @size: Size of array
 * @value: Value to search
 *
 * Return: The indedxm where value is found
 * Or return -1 if value is not present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, mid, i;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}
		mid = (left + right) / 2;

		if (array[mid] < value)
		{
			left = mid + 1;
			continue;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
			continue;
		}
		else
			return (mid);
	}

	return (-1);
}
