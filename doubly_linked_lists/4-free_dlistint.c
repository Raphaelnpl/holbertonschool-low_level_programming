#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to the head of the doubly linked list
 *
 * Description: This function takes a pointer to the head of a doubly
 * linked list and frees all the nodes in the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
