#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - Copies the string pointed to by src,
 * including the terminating null byte, to the buffer.
 *
 * @dest: pointer we are returning the value to.
 * @src: pointer we are getting the string from.
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int str;
	int copy = 0;

	for (str = 0; src[str] != '\0'; str++, copy++)
	{
		dest[copy] = src[str];
	}
	dest[copy] = '\0';

	return (dest);
}
