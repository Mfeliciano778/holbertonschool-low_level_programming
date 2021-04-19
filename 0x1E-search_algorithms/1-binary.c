#include "search_algos.h"
/**
 * binary_search - function searches for a value in an array
 * @array: array
 * @size: size of array
 * @value: value we are searching for
 * Return: First index of value located, -1 if failed
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (real_binary(array, 0, size, value));
}
/**
 * binary_search - function searches for a value in an array
 * @array: array
 * @left: size of left array
 * @right: size of right array
 * @value: value we are searching for
 * Return: First index of value located, -1 if failed
 */
int real_binary(int *array, size_t left, size_t right, int value)
{
	size_t indx;

	if (left > right)
		return (-1);

	printf("Searching in array: ");
	for (indx = 0; indx < right; indx++)
	{
		if (indx != (right - 1))
			printf("%i, ", array[indx]);
		else
			printf("%d\n", array[indx]);
	}

	indx = left + (right - left) / 2;

	if (array[indx] == value)
		return (indx);

	else if (array[indx] > value)
	{
		if (indx != 0)
			return (real_binary(array, left, indx - 1, value));
		return (-1);
	}
	else
		return (real_binary(array, indx + 1, right, value));
}