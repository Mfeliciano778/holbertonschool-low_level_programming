#include "holberton.h"

/**
 * print_line - a function that draws a straight line
 * in the terminal
 *
 * @n: number of lines printed
 *
 * Return: Always 0.
 */
void print_line(int n)
{

	while (n > 0)
	{
		if (n == 0)
			_putchar('\n');

		_putchar('_');
		n--;
	}
		_putchar('\n');


}
