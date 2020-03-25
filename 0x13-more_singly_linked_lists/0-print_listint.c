#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list_t list
 * @h: pointer where the list is located
 *
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	if (!h)
		return (0);

	printf("%i\n", h->n);

	return (print_listint(h->next) + 1);
}
