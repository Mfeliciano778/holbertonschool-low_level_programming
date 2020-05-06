#include "lists.h"
/**
 * sum_dlistint - function reurns the sum of data(n) in a doubly linked list
 * @head: pointer tot the
 *
 * Return: Always 0
 */
int sum_dlistint(dlistint_t *head)
{
	int total;
	if (head == NULL)
		return (0);

	while(head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	
	return (total);
}
