#include "lists.h"

/**
 * add_dnodeint - Adds a new node to the beginning of a dlistint
 * @head: A double pointer to the first node on the list
 * @n: Element to add to the new node
 *
 * Return: The new head pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	new->next = *head;
	*head = new;
	return (*head);
}
