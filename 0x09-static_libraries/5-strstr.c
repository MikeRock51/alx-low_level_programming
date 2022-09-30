#include "main.h"
/**
 * _strstr - Locates a given substring
 * @haystack: Where to look
 * @needle: What to look for
 *
 * Return: Pointer to the begining of locayed string
 * Or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return (NULL);
}
