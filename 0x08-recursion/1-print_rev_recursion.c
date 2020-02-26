#include "holberton.h"

/**
 * _print_rev_recursion - function prints a string in reverse.
 * @s: pointer that is storing the string.
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		;
	else
	{
	_print_rev_recursion(s + 1);
	putchar(*s);
	}
}
