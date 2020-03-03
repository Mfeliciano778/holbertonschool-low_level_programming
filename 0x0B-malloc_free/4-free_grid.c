#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function frees 2 dimensional grid previously created
 * by alloc_grid function
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	free(grid);
}
