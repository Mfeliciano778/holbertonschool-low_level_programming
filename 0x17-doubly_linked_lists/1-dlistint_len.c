#include "lists.h"

/**
 * dlistint_len - Function returns the length of a doubly linked list
 * @h: Head to the doubly linked list
 *
 * Return: the number of elements
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
