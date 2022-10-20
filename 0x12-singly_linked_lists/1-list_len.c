#include "lists.h"
#include <stdio.h>

/**
 * list_len - Checks and returns the no of nodes in a linked list
 * @h: Pointer to the first element on the list
 *
 * Return: The number of nodes on the list
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
