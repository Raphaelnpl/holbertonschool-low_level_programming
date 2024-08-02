#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all the data (n)
 * @head: A pointer to a pointer to the head of the list
 *
 * Return: returns the sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = NULL;
	int sum = 0;

	node = head;
	while (head == NULL)
	{
		return (0);
	}

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
