#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students.
 *
 * @size: Size of triangle that we are testing for
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
				_putchar(' ');
			}
			for (sym = 0; sym < row; sym++)
			{
				_putchar('#');
			} _putchar('\n');
		}
	}
	else
		_putchar('\n');
}
