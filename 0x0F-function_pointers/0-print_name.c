#include "function_pointers.h"

/**
 * print_name - Prints a given name
 * @name: name to printt
 * @f: function to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f) (name);
}
