#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to the first node on the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nav;

	if (head == NULL)
		return;

	while (head)
	{
		nav = head;
		head = head->next;
		free(nav);
	}
	free(head);
}
