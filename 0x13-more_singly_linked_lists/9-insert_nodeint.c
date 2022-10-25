#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: A double pointer to the first node on the list
 * @idx: The index where the new node should be added
 * @n: The content of the new node.
 *
 * Return: The address of the new node
 * Or NULL if malloc fails or node can't be added
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = malloc(sizeof(listint_t)), *current;
	unsigned int counter = 0;

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	current = *head;

	if (idx == 0)
	{
		*head = ptr;
		ptr->next = current;
		return (ptr);
	}

	while (counter < idx - 1)
	{
		if (current->next == NULL)
			break;

		current = current->next;
		counter++;
	}

	if (counter < idx - 1)
		return (NULL);

	ptr->next = current->next;
	current->next = ptr;

	return (ptr);
}
