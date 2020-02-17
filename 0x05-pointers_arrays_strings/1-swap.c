#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 *
 * @n: pointer we are using to change the value
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	*a = *a - *b;
	*b = *a + *b;
	*a = *b - *a;
}
