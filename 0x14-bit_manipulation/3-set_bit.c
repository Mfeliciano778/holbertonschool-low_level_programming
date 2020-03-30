#include "holberton.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer that holds the value
 * @index: the spot where we are changing the value
 *
 * Return: Always 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int count;

	while (index <= 64)
	{
		count = 1 << index;
		*n = *n | count;
		return (1);
	}
	return (-1);
}
