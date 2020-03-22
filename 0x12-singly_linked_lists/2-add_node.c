#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_node - function addes a new node at the beginning of a list_t list
 *
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	int leng = 0;
	list_t *tmp;
	char *ptr = strdup(str);

	tmp = malloc(sizeof(list_t));
		if (tmp == NULL || str == NULL)
			return (NULL);
	while (str[leng])
	{
		++leng;
	}
	tmp->len = leng;
	tmp->str = ptr;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
