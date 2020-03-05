#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - function allocates memory using malloc
 * @b: size of memory we are allocating
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *memory;

	memory = malloc(b * sizeof(unsigned int));
		if (memory == NULL)
			/*return (NULL);*/
			exit(98);

	return (memory);
}
