#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars and initializes it
 * with a specific char
 * @c: specific char we are initializing with
 * @size: size of the array
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *pta;

	if (size == 0)
		return (NULL);

	pta = malloc(sizeof(c) * size);

	if (pta == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		pta[i] = c;

	return (pta);
}
