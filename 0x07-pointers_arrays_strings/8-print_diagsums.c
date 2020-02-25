#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of two diagonals of a
 * square matrix of integers
 * @a: pointer we use to get the sum of one of the two diagonals.
 * @size: the other integer we are adding for the sum.
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int index;
	long sum = 0;

	for (index = 0; index < size; index++)
		sum += *(a + (index * size) + index);
	printf("%li, ", sum);

	for (index = 0, sum = 0; index < size; index++)
		sum += *(a + (size - 1) + (index * (size - 1)));
	printf("%li\n", sum);
}
