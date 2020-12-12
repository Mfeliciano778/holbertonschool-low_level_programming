#include "lists.h"

/**
 * insert_dnodeint_at_index - Function inserts node at index
 * @h: head to the doubly linked list
 * @idx: where we are inserting the node
 * @n: data inside the new node
 *
 * Return: address of new, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr = (*h);
	unsigned int i;

	if ((*h) == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	for (i = 0; curr->next != NULL && i < idx; i++)
		curr = curr->next;

	if (curr->next != NULL)
	{
		new->prev = curr->prev;
		curr->prev->next = new;
	}
	else
		new->next = NULL;
	curr->prev = new;
	new->next = curr;

	return (new);
}
