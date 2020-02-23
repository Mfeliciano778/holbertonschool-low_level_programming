#include "holberton.h"
#include <stdio.h>

/**
 * *string_toupper - function that changes all lowercase letters
 * of a string to uppercase
 *
 * @str: pointer we are getting the string from
 *
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
