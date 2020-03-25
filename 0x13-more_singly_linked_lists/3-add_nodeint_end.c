#include "lists.h"
/**
 * *add_nodeint_end - function adds node at the end of the linked list
 * @head: starts the linked list
 * @n: the data we put inside of the new node
 *
 * Return: Always 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addednode;
	listint_t *cpy = *head;

	addednode = malloc(sizeof(listint_t));
		if (addednode == NULL)
			return (NULL);
	addednode->n = n;
	addednode->next = NULL;
	if (cpy == NULL)
		*head = addednode;
	else
	{
		while (cpy->next != NULL)
		{
			cpy = cpy->next;
		}
		cpy->next = addednode;
	}
	return (addednode);
}
