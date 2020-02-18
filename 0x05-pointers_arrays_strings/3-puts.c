#include "holberton.h"

/**
 * _puts - prints a string followed by a new line
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
