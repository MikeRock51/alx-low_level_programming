#include <stdio.h>

/**
 * main - Prints out the name of the file program was compiled from
 *
 * Return: (0) on success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
