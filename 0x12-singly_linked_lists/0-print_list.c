#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer where the list is located
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
		return;

	while (h->str != NULL)
	{
		if (str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[&i] %s\n", h->len, h->str);
		}
		i++;
	}
	return (i);
}
