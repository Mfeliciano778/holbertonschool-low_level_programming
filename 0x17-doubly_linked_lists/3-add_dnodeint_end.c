#include "lists.h"

/**
 * add_dnodeint_end - Function adds a node at the end of a doubly linked list
 * @head: pointer to the doubly linked list
 * @n: data inside the new node
 *
 * Return: address of the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t  *new, *last = (*head);

	new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		(*head) = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);
}
