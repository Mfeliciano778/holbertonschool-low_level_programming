#include "holberton.h"
#include <stdio.h>

/**
 * *_memcpy - function copies memory area.
 * @dest: the address of memory to print
 * @n: the size of the memory to print
 * @src: the address of the memory to copy
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
		dest[counter] = src[counter];
	return (dest);
}
