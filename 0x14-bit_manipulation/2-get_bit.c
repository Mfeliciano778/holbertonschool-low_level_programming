#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the value
 * @index: the index
 *
 * Return: Always 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n & 1 << index ? 1 : 0));
}
