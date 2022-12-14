#include "lists.h"

/**
 * add_nodeint_end - Adds a node to the end of a linked list
 * @head: Pointer to the first node on the list
 * @n: Element to add to the list
 *
 * Return: A pointer to the new node
 * Or NULL if malloc fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *current;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = ptr;
	}

	return (ptr);
}
