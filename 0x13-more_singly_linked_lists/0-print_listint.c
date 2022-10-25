#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Prints all the elements of a listint_t
 * @h: Pointer to the first node om the list
 *
 * Return: The number of nodes on the list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int len;
	const listint_t *ptr = h;

	len = 0;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		len++;
	}
	return (len);
}
