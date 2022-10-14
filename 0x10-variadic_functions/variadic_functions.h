#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * print_spec - A new struct that matches specifier to the appropriate function
 * @speciier: The key to determine which print function to call
 * @print: Pointing to the appropriate print function based on the specifier
 */
typedef struct printer
{
	char *specifier;
	void (*print)(va_list args);
} print_spec;

#endif
