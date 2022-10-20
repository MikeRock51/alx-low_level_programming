#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new list to the beginning of a list_t linked list
 * @head: Double pointer to the address of the first item on the list
 * @str: Pointer to the string to occupy the parameter of list_t
 *
 * Return: The address of the new element
 * Or NULL if malloc fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr, *tmp;
	char *string;

	string = strdup(str);

	ptr = malloc(sizeof(list_t));

	tmp = *head;
	*head = ptr;

	if (ptr == NULL)
		return (NULL);

	ptr->str = string;
	ptr->next = tmp;

	return (ptr);
}
