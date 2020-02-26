#include "holberton.h"
#include <stdio.h>

/**
 * _puts_recursion - function prints a string.
 * @s: pointer we are getting the string from.
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar(10);
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
