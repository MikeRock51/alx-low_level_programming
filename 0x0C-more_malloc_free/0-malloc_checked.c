#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates n bytes of memory using malloc
 * @b: Amount of memory to allocate
 *
 * Return: Pointer to allocated memorg on success
 * exit(98) otherwise.
 */
void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
