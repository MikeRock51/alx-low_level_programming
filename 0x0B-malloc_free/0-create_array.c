#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * and initilizes it to a specific character
 * @size: Size of array to be created
 * @c: Initial character
 *
 * Return: Pointer to array or NULL if size < 1
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	if (size < 1)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
