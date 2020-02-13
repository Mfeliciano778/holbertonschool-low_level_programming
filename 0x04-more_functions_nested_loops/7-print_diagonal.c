#include "holberton.h"

/**
 * print_diagonal - a function that draws a straight line
 * in the terminal
 *
 * @n: number of backslash printed
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int s, i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (s = 0; s < i; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
