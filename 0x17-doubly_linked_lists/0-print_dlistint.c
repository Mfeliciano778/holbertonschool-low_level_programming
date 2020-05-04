#include "lists.h"
/**
 * print_dlistint - function that prints the elements of a dlistint_t list
 * @h: the reference to the head of the doubly linked list
 *
 * Return: Always 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
		return(0);

	printf("%i\n", h->n);

	return (print_dlistint(h->next) + 1);
}
