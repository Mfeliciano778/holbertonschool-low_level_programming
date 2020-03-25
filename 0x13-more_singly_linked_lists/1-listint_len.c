#include "lists.h"
/**
 * listint_len - function returns the number of elements in a linked list
 * @h: pointer holds the linked list
 *
 * Return: Always 0
 */
size_t listint_len(const listint_t *h)
{
	if (!h)
		return (0);
	return (listint_len(h->next) + 1);
}
