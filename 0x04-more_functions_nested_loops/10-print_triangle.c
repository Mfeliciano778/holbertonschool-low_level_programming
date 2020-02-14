#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int row, spaces, sym;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = 0; spaces < (size - row); spaces++)
			{
				putchar(' ');
			}
			for (sym = 0; sym < row; sym++)
			{
				putchar('#');
			} putchar('\n');
		}
	}
	else
		putchar('\n');
}
