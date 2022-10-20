#include "lists.h"
#include <stdio.h>
/**
 * print_list - Prints all the elements of a list_t link
 * @h: A pointer to the first element on the list
 *
 * Return: The number of nodes printed
 */
size_t print_list(const list_t *h)
{
	unsigned int count, nodes = 0;

	while (h != NULL)
	{
		count = 0;
		if (h->str == NULL)
		{
			printf("[%u] (nil)\n", count);
			h = h->next;
			nodes++;
			continue;
		}

		while (h->str[count])
		{
			count++;
		}
		printf("[%u] %s\n", count, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
