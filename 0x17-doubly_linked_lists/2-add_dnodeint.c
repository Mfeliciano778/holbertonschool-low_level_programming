#include "lists.h"

/**
 * add_dnodeint - Function adds an element at the beginning of a list
 * @head: the head of a doubly linked list
 * @n: the data we put inside of the new node
 *
 * Return: address of the new element, NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t  *new;

	new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new;

	(*head) = new;

	return (new);
}
