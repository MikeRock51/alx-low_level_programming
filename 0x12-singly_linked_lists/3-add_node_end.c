#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node to the end of a list_t linkeds list
 * @head: A double pointer to the first element of the list
 * @str: The string to copy to the str parameter of the new node
 *
 * Return: The address of the new node
 * Or NULL if malloc fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *current;
	char *string = strdup(str);

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = string;
	ptr->next = NULL;
	current = *head;

	if (current == NULL)
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

	return (*head)	
}
