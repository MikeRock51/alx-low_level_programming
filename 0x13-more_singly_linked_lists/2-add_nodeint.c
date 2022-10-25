#include "lists.h"

/**
 * add_nodeint - Adds a new node to the beginning of a linked list
 * @head: A double pointer to the first node on the list
 * @n: The new element to be added
 *
 * Return: The address to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->next = *head;
	ptr->n = n;
	*head = ptr;

	return (ptr);
}
