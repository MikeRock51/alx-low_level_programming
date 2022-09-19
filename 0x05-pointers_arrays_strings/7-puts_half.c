#include "main.h"
/**
 * puts_half - Prints the second half of any given string
 * @str: Taks as argument
 */
void puts_half(char *str)
{
	int length, half, i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	half = length / 2;

	i = 0;

	for (i = half; i < length; i++)
	{
		if (length % 2 == 1)
		{
			half += 1;
		}

		_putchar(str[i]);
	}

	_putchar('\n');
}
