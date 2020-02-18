#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: pointer we are getting the string from`
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int count = 0;
	int rev;

	while (s[count] != '\0')
	{
		count++;
	}
	rev = count;
	while (rev != 0)
	{
		rev--;
		_putchar(s[rev]);
	}
	_putchar('\n');
}
