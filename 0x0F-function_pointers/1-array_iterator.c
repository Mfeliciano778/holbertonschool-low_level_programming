#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @array: pointer array
 * @action: pointer of the elements
 * @size: size of array
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (action != NULL)
		for (index = 0; index < size; index++)
			action(array[index]);
}
