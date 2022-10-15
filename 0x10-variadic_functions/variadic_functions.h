#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

/**
 * struct printer - A new struct that matches specifier
 * to the appropriate function
 * @specifier: The key to determine which print function to call
 * @print: Pointing to the appropriate print function based on the specifier
 */
typedef struct printer
{
	char *specifier;
	void (*print)(va_list arg);
} print_spec;

#endif
