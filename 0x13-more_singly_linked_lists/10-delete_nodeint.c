#include "lists.h"
/**
 * delete_nodeint_at_index - function deletes the node at index of linked lists
 * @head: double pointer that holds the linked list
 * @index: where we are inserting the new node
 *
 * Return: Always 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cpy_head, *nxt, *prev;
	unsigned int count = 0;

	if (!(*head))
		return (-1);

	cpy_head = *head;

	while (count <= index)
	{
		if (cpy_head == NULL)
			return (-1);
		cpy_head = cpy_head->next;
		count++;
		if (count == index - 1)
			prev = cpy_head;
	}
	nxt = cpy_head->next;
	free(cpy_head);
	prev->next = nxt;
	return (1);
}
