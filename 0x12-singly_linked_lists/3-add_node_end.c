#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_node_end - function that adds a new node at the end of a list_t list
 *
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int leng = 0;
	list_t *tmp, *end;
	char *ptr = strdup(str);

	if (!str)
		return (NULL);
	tmp = malloc(sizeof(list_t));
		if (tmp == NULL)
			return (NULL);
	while (str[leng])
	{
		++leng;
	}
	tmp->str = ptr;
	tmp->len = leng;
	tmp->next = NULL;
	end = *head;

	if (!*head)
	{
		*head = tmp;
		return (*head);
	}
	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = tmp;
	return (tmp);
}
