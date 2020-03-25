#include "lists.h"
/**
 * *get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer holds the linked list
 * @index: number of nodes we go in
 *
 * Return: Always 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	while (index--)
	{
		if (!head->next)
			return (NULL);
		head = head->next;
	}

	return (head);
}
