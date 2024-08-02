#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: A pointer to a pointer to the head of the list
 * @index: The index of the node to return
 *
 * Return: The nth node of the list on SUCCESS, otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL;
	unsigned int count = 0;

	node = head;
	while (head == NULL)
	{
		return (NULL);
	}

	for (count = 0; index != count; count++)
	{
		if (node == NULL)
		{
			return (NULL);
		}
		node = node->next;
	}

	return (node);

}
