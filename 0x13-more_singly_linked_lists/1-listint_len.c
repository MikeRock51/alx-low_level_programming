#include "lists.h"

/**
 * listint_len - Calculates the number of elements in a linked list
 * @h: Pointeer to the first elemnet on the list
 *
 * Return: The numbner of elements on the list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		len++;
	}
	return (len);
}
