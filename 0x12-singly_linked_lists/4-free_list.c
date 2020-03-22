#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 *
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *cpy;

	while (head != NULL)
	{
		cpy = head;
		head = head->next;
		free(cpy->str);
		free(cpy);
	}
}
