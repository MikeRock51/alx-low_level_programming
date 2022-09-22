#include "main.h"
/**
 * rot13 - Encodes a string, using rot-13
 * @str: String input
 *
 * Return: Encoded string
 */
char *rot13(char *str)
{
	int i, j;

	char *a = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *b = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (j = 0; str[j] != '\0'; j++)
	{
		for (i = 0; a[i] != '\0'; i++)
		{
			if (str[j] == a[i])
			{
				str[j] = b[i];
				break;
			}
		}
	}

	return (str);
}
