#include "holberton.h"

/**
 * print_array - Prints n elements of an array of integers
 *
 *
 *
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int num;

	if (n > 0)
	{
		for (num = 0; num < n; num++)
		{
			printf("%d", a[num]);
			if (num != n - 1)
				printf(", ");
		} putchar(10);
	}
	else
		putchar(10);
}
