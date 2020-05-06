#include "lists.h"
/**
 * *get_dnodeint_at_index - function returns the nth node of doubly linked list
 * @head: pointer to the head of doubly linked list
 * @index: location of node
 *
 * Return: Always 0
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	for (; index != 0; index--)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
