#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at index of a dlistint linked list
 * @head: A double pointer to the first node on the list
 * @index: The index to delete
 *
 * Return: Return 1 on success or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nav, *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	nav = *head;
	if (index == 0)
	{
		if (nav->next == NULL)
		{
			free(nav);
			*head = NULL;
			return (1);
		}
		*head = nav->next;
		nav->next->prev = NULL;
		free(nav);
		return (1);
	}
	while (i < index - 1)
	{
		nav = nav->next;
		i++;
		if (nav == NULL)
			return (-1);
	}
	tmp = nav->next;
	nav->next = tmp->next;
	tmp->next->prev = nav;
	free(tmp);

	return (1);
}
