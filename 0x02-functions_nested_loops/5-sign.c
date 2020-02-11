#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * print_sign - program prints the sign of a number
 *
 *
 * @n: character we are testing
 *
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		putchar('+');
	}
	if (n == 0)
	{
		return (0);
		putchar('0');
	}
	if (n < 0)
	{
		return (-1);
		putchar('-');
	}
	return (0);
}
