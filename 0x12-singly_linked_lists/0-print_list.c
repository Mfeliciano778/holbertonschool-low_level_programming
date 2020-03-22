#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer where the list is located
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	while (h == NULL)
	{
		return (0);
	}
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%i] %s\n", h->len, h->str);
	return (print_list(h->next) + 1);
}
