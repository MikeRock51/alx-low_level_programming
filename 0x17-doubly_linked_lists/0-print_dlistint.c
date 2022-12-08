#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list (dlistint)
 * @h: Pointer to the the first element on the list
 *
 * Return: The number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t num_node = 0;

	if (h == NULL)
		return (0);

	ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		num_node++;
		ptr = ptr->next;
	}
	return (num_node);
}
