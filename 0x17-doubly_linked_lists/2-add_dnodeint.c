#include "lists.h"
/**
 * *add_dnodeint - function that adds a node at the beginning of a linked list
 * @head: pointer reference to the head of the linked list
 * @n: where to put the new node
 *
 * Return: Always 0
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}
