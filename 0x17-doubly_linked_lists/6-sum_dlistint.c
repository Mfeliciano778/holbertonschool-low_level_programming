#include "lists.h"

/**
 * sum_dlistint - Function adds up the data inside a doubly linked list
 * @head: pointer to the doubly linked list
 *
 * Return: the sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	int sum = 0;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
		printf("%i\n", sum);
	}
	return (sum);
}
