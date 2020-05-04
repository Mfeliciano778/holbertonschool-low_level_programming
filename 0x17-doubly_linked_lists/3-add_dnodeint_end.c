#include "lists.h"
/**
 * *add_dnodeint_end - function that adds a node at the end of a linked list
 * @head: pointer reference to the head of the linked list
 * @n: where to put the new node
 *
 * Return: Always 0
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last = *head;

	if (head == NULL)
		return(NULL);

	new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
	
	new_node->n = n;
	new_node->next = NULL;

	if (last == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return(new_node);
	}

	while (last->next != NULL)
		last = last->next;
	
	new_node->prev = last;
	last->next = new_node;

	return (new_node);
}
