#include "search_algos.h"

/**
 * Searches for a value in an array of integers, using Binary search algorithm
 * @array: The array to search
 * @size: Size of array
 * @value: Value to search
 *
 * Return: The indedxm where value is found
 * Or return -1 if value is not present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, mid;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left < right)
	{
		mid = (left + right) / 2;

		if (array[mid] < value)
		{
			left = mid + 1;
			continue;
		}
		else if (array[mid] > value)
		{
			right = mid;
			continue;
		}
		else
			return (mid);
	}
	return (-1);
}
