#include "search_algos.h"
/**
 * linear_search - function searches for a value in an array
 * @array: array
 * @size: size of array
 * @value: value we are searching for
 * Return: First index of value located, -1 if failed
 */
int linear_search(int *array, size_t size, int value)
{
	size_t indx;

	if (array == NULL)
		return (-1);

	for (indx = 0; indx < size; indx++)
	{
		if (array[indx] == value)
		return (array[indx]);
	}
	return (-1);
}
