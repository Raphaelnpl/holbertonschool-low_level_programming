#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a doubly linked list
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of elements in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
