#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_char - Prints a character
 * @arg: Characters to be printed
 */
void print_char(va_list arg)
{
	char character;

	character = va_arg(arg, int);
	printf("%c", character);
}


/**
 * print_int - Prints an int
 * @arg: Ints to be printed
 */
void print_int(va_list arg)
{
	int integer;

	integer = va_arg(arg, int);
	printf("%i", integer);
}


/**
 * print_float - Prints a float
 * @arg: floats to be printed
 */
void print_float(va_list arg)
{
	float dubs;

	dubs = va_arg(arg, double);
	printf("%f", dubs);
}

/**
 * print_string - Prints a string
 * @arg: String to be printed
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char*);

	if (arg == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * _strlen - Checks the length of a string
 * @str: The string to be checked
 *
 * Return: The length of str
 */
int _strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/**
 * print_all - Prints all types of data, based on the identifier it receives
 * @format: Used to determine what type of data has been passed
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list args;

	print_spec specs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{"NULL", NULL}
	};

	va_start(args, format);
	i = 0;
	while (i < _strlen(format))
	{
		j = 0;
		while (j < 4  && format[i] != *(specs[j].specifier))
		{
			j++;
		}
		if (j < 4)
		{
			specs[j].print(args);
			if (j < 3)
				printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
