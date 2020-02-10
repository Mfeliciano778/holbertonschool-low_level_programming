#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - writes the alphabet in lowercase
 *
 *
 * Return: 0
 *
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a', c <= 'z', c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
