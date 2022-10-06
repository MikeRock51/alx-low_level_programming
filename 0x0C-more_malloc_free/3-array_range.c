#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: The starting elemenet of the array
 * @max: The last element of the array
 *
 * Return: A pointer to the created array.
 * Or null if malloc fails or min is > max
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, j = 0;

	if (min > max)
		return (NULL);

	arr = malloc(((max - min) + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}

	return (arr);
}
