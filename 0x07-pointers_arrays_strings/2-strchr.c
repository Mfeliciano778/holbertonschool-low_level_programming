#include "holberton.h"
#include <stdio.h>

/**
 * *_strchr - function that locates a character in a string.
 * @s: address of string
 * @c: character we are searching
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
		return (s);

	else
		return (NULL);
}
