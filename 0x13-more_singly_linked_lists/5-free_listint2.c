#include "lists.h"

/**
 * free_listint2 - Frees a linked list and set the head to NULL
 * @head: A double pointer to the first node on the list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	head = NULL;
}
