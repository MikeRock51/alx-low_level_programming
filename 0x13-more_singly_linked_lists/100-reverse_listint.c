#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: A double pointer to the first node on the list
 *
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *ptr;

	if (*head == NULL)
		return (NULL);

	current = NULL;
	ptr = NULL;

	while (*head)
	{
		current = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = current;
	}
	*head = ptr;

	return (*head);
}
