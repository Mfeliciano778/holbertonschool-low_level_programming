#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to the doubly linked list
 *
 * Return: Always nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head, *next;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
