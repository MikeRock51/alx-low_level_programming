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

	char *a = "AaBbCcDdEeFfGgHhIiJjKkLlMm";
	char *b = "NnOoPpQqRrSsTtUuVvWwXxYyZz";

	for (j = 0; str[j] != '\0'; j++)
	{
		for (i = 0; i < 26; i++)
		{
			if (str[j] == a[i])
			{
				str[j] = b[i];
			}
			else if (str[j] == b[i])
			{
				str[j] = a[i];
			}
		}
	}

	return (str);
}
