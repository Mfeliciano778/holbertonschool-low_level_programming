#include "holberton.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int l;

	for (l = '0'; l <= '9'; l++)
	{
		if (l != '2' && l != '4')

		_putchar(l);
	}
	_putchar('\n');
}
