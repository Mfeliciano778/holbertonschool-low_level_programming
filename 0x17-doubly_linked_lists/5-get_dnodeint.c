#include "lists.h"

/**
 * get_dnodeint_at_index - Function returns the nth node of doubly linked list
 * @head: pointer to the doubly linked list
 * @index: where the node we reutrn is
 *
 * Return: address to the node, or NULL if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int i;

	for (i = 0; curr != NULL && i < index; i++)
		curr = curr->next;

	return (curr);
}
