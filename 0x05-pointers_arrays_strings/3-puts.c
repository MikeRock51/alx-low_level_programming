#include "main.h"

/**
 * _puts - Prints given string to the stdout, followed by a new line
 * @str: Takes str as input
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
