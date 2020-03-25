#include "lists.h"
/**
 * free_listint2 - function that frees a linked list
 * @head: pointer that starts the linked list
 *
 *
 * Return: Always 0
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	if (!head)
		return;
	while (*head != NULL)
	{
		*head = (*head)->next;
		free(tmp);
		tmp = *head;
	}
}
