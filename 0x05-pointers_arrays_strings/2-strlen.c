#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 *
 * @s: pointer we use for the length
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
