#include "lists.h"
/**
 * *insert_nodeint_at_index - function that inserts a node at a given spot
 * @head: double pointer where the linked list is located
 * @idx: the index of the list where the node is added
 * @n: the data inside the new node
 *
 * Return: Always 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *count, *node;

	node = malloc(sizeof(listint_t));
		if (node == NULL)
			return (NULL);
	node->n = n;

	if (!(*head))
	{
		node->next = NULL;
		*head = node;
		return (node);
	}
	else if (idx == 0)
	{
		node->next = NULL;
		*head = node;
		return (node);
	}
	
	count = *head;

	while (--idx)
	{
		if (count->next == NULL)
		{
			free(node);
			return (NULL);
		}
		count = count->next;
	}
	node->next = count->next;
	count->next = node;
	return (node);
}
