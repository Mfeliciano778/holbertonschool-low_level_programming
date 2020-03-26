#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list and
 * returns the head node's data.
 * @head: pointer holds the linked list
 *
 * Return: Always 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	num = tmp->n;
	free(tmp);
	return (num);
}
