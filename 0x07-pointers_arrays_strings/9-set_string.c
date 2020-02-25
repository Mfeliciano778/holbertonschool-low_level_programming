#include "holberton.h"
#include <stdio.h>

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: pointer we are changing
 * @to: char we are changing to.
 *
 * Return: Always 0.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
