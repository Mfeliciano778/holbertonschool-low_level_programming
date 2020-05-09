#include "lists.h"
/**
 * *insert_dnodeint_at_index - function inserts a node at a given position
 * @h: pointer to the head of the doubly linked list
 * @idx: location of where the node should be inserted
 * @n: data that goes in new node
 *
 * Return: Always 0
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *last_n = *h;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);

	for (; idx != 1; idx--)
	{
		if (last_n == NULL)
			return (NULL);
		last_n = last_n->next;
	}

	new_node->n = n;
	new_node->prev = last_n;
	new_node->next = last_n->next;

	if (last_n != NULL)
		last_n->next = new_node;
	else
		*h = new_node;

	if (new_node->next != NULL)
		(new_node->next)->prev = new_node;

	return (new_node);
}
