#include "lists.h"

/**
 * sum_dlistint -
 *
 * Return: 
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	int sum = 0;

	while(curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
		printf("%i\n", sum);
	}
	return (sum);
}
