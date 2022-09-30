#include "main.h"

/**
 * _memset - Fills given bytes of memory with a constatnt byte
 * @s: Poiter to the memory to be filled
 * @b: Bytes to fill
 * @n: No of times to fill
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n * sizeof(char); i++)
	{
		s[i] = b;
	}

	return (s);
}
