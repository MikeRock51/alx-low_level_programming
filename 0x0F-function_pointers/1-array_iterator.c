#include "function_pointers.h"

/**
 * array_iterator - Executes given function on each element
 * of a given array.
 * @array: The array containing elrments to execute function on
 * @size: The size of array
 * @action: The function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
