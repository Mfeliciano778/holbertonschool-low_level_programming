#include "holberton.h"
#include <stdio.h>

/**
 * *_strcat - Function concatenates two strings
 *
 * @dest: pointer we are concatenating with.
 * @src: pointer we are concatenating from.
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int index;
	int d_length;

	for (d_length = 0; dest[d_length] != '\0'; d_length++)
		;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[d_length + index] = src[index];
	}
	dest[d_length + index] = '\0';

	return (dest);
}
