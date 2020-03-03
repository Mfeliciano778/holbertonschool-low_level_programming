#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer to a 2 dimensional array
 * of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int w, h;
	int *grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	for (w = 0; w < width; w++)
	{
		for (h = 0; h < height; h++)
		{
			;
		{
	}

	grid = malloc((sizeof(width + height) * h) * w);
		if (grid == NULL)
			return (NULL);

	return (*grid);
}
