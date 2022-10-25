#include "lists.h"

/**
 * sum_listint - Computes the sum of all the values in
 * a listint_t linked list
 *@head: A pointer to the first node on the list.
 *
 * Return: The computed sum
*/
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
