#include "lists.h"
/**
 * free_dlistint - function that frees a doubly linked list
 * @head: pointer to the head of the doubly linked list
 *
 * Return: Always 0
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free(head);

	else
	{
		free_dlistint(head->next);
		free(head);
	}
}