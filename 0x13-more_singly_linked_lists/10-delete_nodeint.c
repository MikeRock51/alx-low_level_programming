#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a linked list
 * @head: A double pointer to the first node on the list
 * @index: The node index to delete
 *
 * Return: 1 for success or -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *tmp;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);

	ptr = *head;

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	while (counter < index - 1)
	{
		if (ptr->next == NULL)
			break;
		ptr = ptr->next;
		counter++;
	}

	if (counter < index - 1)
		return (-1);

	tmp = ptr->next;
	ptr->next = ptr->next->next;
	free(tmp);

	return (1);
}
