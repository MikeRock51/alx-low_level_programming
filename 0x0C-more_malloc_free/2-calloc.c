#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: No of array elements
 * @size: Size of each elements
 *
 * Return: NULL if malloc fails or pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}
