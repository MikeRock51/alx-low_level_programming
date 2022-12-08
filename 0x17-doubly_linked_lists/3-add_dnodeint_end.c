#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node to the end of a dlistint_t list
 * @head: A double pointer to the first element on the list
 * @n: Element to add to the new node
 *
 * Return: The address of the new element or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *tmp;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	tmp = *head;
	if (tmp != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
		new->prev = tmp;
	}
	return (new);
}
