#include "holberton.h"
#include <stdio.h>

/**
 * *_strncpy - function copies a string.
 *
 * @dest: pointer we are concatenating to.
 * @src: pointer we are concatenating from.
 * @n: number of bytes we are concatenating.
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len;

	for (len = 0; len < n && src[len] != 0; len++)
		dest[len] = src[len];

	for (; len < n; len++)
		dest[len] = '\0';

	return (dest);
}
