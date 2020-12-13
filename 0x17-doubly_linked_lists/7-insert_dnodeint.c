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

	if (idx == 0)
		add_dnodeint(h, n);

	for (i = 0; i < idx; i++)
	{
		if (curr == NULL)
		{
			return (NULL);
		}
		curr = curr->next;
	}
	printf("%d\n", curr->n);

	if (curr->next == NULL)
		add_dnodeint_end(h, n);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	new->next = curr;
	new->prev = curr->next;
	curr->prev->next = new;
	curr->prev = new;

	return (new);
}
