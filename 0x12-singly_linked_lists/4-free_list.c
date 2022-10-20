#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the first element on the list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
