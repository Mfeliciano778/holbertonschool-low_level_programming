#include "holberton.h"

/**
 * print_numbers - prints the numbers from 0 to 9.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int l;

	for (l = '0'; l <= '9'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
