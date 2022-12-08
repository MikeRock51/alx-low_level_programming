#include "lists.h"

/**
 * dlistint_len - Counts the elements in a doubly linked list (dlistint)
 * @h: Pointer to the the first element on the list
 *
 * Return: The number of nodes present in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t num_node = 0;

	if (h == NULL)
		return (0);

	ptr = h;

	while (ptr)
	{
		num_node++;
		ptr = ptr->next;
	}
	return (num_node);
}
