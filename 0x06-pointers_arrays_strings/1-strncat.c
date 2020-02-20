#include "holberton.h"
#include <stdio.h>

/**
 * *_strncat - concatenates two unknown integers
 *
 * @dest: pointer we are concatenating to.
 * @src: pointer we are concatenating from.
 * @n: amount of bytes we are concatenating.
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int d_len;
	int index;

	for (d_len = 0; dest[d_len] != '\0'; d_len++)
		;
	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[d_len + index] = src[index];

	dest[d_len + index] = '\0';

	return (dest);

	putchar(10);
}
