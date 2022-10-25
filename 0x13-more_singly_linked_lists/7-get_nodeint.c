#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a
 * listint_t linked list
 * @head: A pointer to the first node on the list
 * @index: The index of the node.
 *
 * Return: The node at index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int counter = 0;

	ptr = head;

	while (counter < index)
	{
		if (ptr->next == NULL)
			break;

		ptr = ptr->next;
		counter++;
	}

	if (counter < index)
	{
		return (NULL);
	}

	return (ptr);
}
