#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size in bytes of the allocated space
 * @new_size: the new size in bytes of the new allocated space
 *
 *
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	int min, i;
	char *charp = (char *) ptr;

	if (ptr == NULL)
		return (NULL);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);

	min = old_size;

	if (new_size < old_size)
		min = new_size;

	newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
	for (i = 0; i < min; i++)
		newptr[i] = charp[i];
	free(ptr);
	return (newptr);
}
