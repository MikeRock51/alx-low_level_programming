#include "lists.h"

/**
 * pop_listint - Deletes the head of a linked list and returns the data n
 * @head: A double pointer to the first node on the list
 *
 * Return: The value of n
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		ptr = *head;
		*head = ptr->next;
		n = ptr->n;
		free(ptr);
	}
	return (n);
}
