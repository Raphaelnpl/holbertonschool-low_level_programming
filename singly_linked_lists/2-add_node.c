#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Ajoute un nouveau noeud au début d'une liste list_t.
 * @head: Pointeur vers un pointeur sur la tête de la liste.
 * @str: Chaîne à ajouter au nouveau noeud.
 *
 * Return: Adresse du nouvel élément, ou NULL en cas d'échec.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return NULL;

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return NULL;
	}

	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return new_node;
}
