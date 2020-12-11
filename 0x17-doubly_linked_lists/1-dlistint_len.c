#include "lists.h"

/**
 * dlistint_len -
 *
 * Return: 
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;
	const dlistint_t *curr;

	curr = h;
	while (curr != NULL)
	{
		curr = curr->next;
		num++;
	}
	return (num);
}