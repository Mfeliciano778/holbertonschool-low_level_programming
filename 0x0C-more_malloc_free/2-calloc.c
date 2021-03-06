#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: elements of seze bytes
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *pta;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pta = malloc(nmemb * size);
		if (pta == NULL)
			return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		pta[i] = 0;

	return (pta);
}
