#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - function that creates an array of integers
 * @min: minimum integers
 * @max: maximum integers
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int i;
	int diff = max - min;
	int *point;

	if (min > max)
		return (NULL);
	point = malloc(sizeof(int) * (diff + 1));
		if (point == NULL)
			return (NULL);

	for (i = 0; i <= diff; i++)
		point[i] = min + i;

	return (point);
}
