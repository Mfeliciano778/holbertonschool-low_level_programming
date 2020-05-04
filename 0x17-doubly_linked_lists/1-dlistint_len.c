#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: pointer reference to the head of the doubly linked list
 *
 * Return: Always 0
 */
size_t dlistint_len(const dlistint_t *h)
{
    if (h == NULL)
        return (0);

    return (dlistint_len(h->next) + 1);
}