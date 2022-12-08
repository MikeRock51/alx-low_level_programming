#include "lists.h"

/**
 * sum_dlistint - Sums all data on a dlistint_t
 * @head: Pointer to the first element on the list
 *
 * Return: The sum of the data on the list
 * or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *nav;
	int sum = 0;

	if (head == NULL)
		return (0);

	nav = head;
	while (nav)
	{
		sum += nav->n;
		nav = nav->next;
	}
	return (sum);
}
