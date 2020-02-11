#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet_x10 - writes the alphabet in lowercase
 *
 *
 * Return: 0
 *
 */
void print_alphabet_x10(void)
{
	int c;
	int a;

	for (a = 0; a <= 9; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
