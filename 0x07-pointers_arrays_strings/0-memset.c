#include "holberton.h"
#include <stdio.h>

/**
 * *_memset - function fills memory with a constant byte
 * @s: the address of memory to print
 * @n: the size of the memory to print
 * @b: the constant byte that we are fillin with
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
		s[counter] = b;
	return (s);

}
