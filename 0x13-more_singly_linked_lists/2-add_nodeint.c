#include "lists.h"
/**
 * *add_nodeint - function that adds a new node at the beginning of a list
 * @head: holds the linked lists
 * @n: number of nodes in you want to add
 *
 * Return: Always 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addednode;

	addednode = malloc(sizeof(listint_t));
		if (!addednode)
			return (NULL);
	addednode->n = n;
	addednode->next = *head;
	*head = addednode;

	return (addednode);
}
