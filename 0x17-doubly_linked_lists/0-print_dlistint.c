#include "lists.h"

/**
 * print_dlistint - function prints all elements inside a doubly linked list
 * @h: the head to the doubly linked list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;
	const dlistint_t *curr;

	curr = h;
	while (curr != NULL)
	{
		printf("%i\n", curr->n);
		curr = curr->next;
		num++;
	}
	return (num);
}
