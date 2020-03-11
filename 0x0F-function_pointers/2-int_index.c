#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * int_index - function that searches for an integer
 * @array: array pointer which holds the integer
 * @size: size of array
 * @cmp: function pointer your using to find integer
 *
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
