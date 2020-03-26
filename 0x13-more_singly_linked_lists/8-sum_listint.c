#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data of a linked list
 * @head: pointer that holds the linked list
 *
 * Return: Always 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
