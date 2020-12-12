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
	dlistint_t *new, *curr;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	curr = (*h);

	while (idx != 0)
	{
		curr = curr->next;
		idx--;
	}
	if (curr->next != NULL)
	{
		new->next = curr->next;
		curr->next->prev = new;
	}
	else
		new->next = NULL;
	curr->next = new;
	new->prev = curr;

	return (new);
}
