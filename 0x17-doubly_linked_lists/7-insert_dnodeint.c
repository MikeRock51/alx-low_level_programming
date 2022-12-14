#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index
 * @h: Double pointer to the first element on the list
 * @idx: Index where node should be inserted
 * @n: Data for the new node
 *
 * Return: Address of the new node
 * Return NULL on failure or if new node cannot be inserted at idx
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *nav, *tmp;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	nav = *h;
	if (*h == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (*h);
	}
	if (idx == 0)
	{
		new->next = nav;
		new->prev = NULL;
		nav->prev = new;
		*h = new;
		return (*h);
	}
	while (i < idx - 1)
	{
		nav = nav->next;
		i++;
		if (nav == NULL)
			return (NULL);
	}
	tmp = nav->next;
	nav->next = new;
	new->prev = nav;
	new->next = tmp;

	if (tmp != NULL)
		tmp->prev = new;

	return (new);
}
