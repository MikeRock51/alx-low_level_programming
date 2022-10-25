#include "lists.h"

/**
 * free_listint - Frees listint linked list
 * @head: Pointer to the first node on the list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
