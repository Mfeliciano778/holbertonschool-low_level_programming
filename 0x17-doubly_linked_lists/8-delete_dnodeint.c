#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: pointer to the doubly linked list
 * @index: which node we are deleting
 *
 * Return: 1 if success, 0 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = (*head);

	if (!(*head) && index <= 0)
	{
		return (0);
	}

	while (curr->next != NULL && index)
	{
		curr = curr->next;
		index--;
	}
	if ((*head) == curr)
		(*head) = curr->next;
	if (curr->next != NULL)
		curr->next->prev = curr->prev;
	if (curr->prev != NULL)
		curr->prev->next = curr->next;

	free(curr);
	return (1);
}
