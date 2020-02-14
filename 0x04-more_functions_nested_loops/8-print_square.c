#include "holberton.h"

/**
 * print_square - function that prints a square.
 *
 * @size:  the size of the square we're testing
 * Return: Always 0.
 */
void print_square(int size)
{
	int l, w;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar(35);
			} _putchar('\n');
		}
	}
	else
		_putchar('\n');
}
