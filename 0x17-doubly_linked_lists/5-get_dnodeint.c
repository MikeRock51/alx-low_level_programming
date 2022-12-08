#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at a given
 * index of a dlistint_t linked list
 * @head: Pointer to the first element on the list
 * @index: The node index to fetch
 *
 * Return: Node at index, or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nav;
	unsigned int i = 0;

	if (head == NULL)
		return (0);

	nav = head;
	while (i < index)
	{
		nav = nav->next;
		i++;
		if (nav == NULL)
			return (NULL);
	}
	return (nav);

}
