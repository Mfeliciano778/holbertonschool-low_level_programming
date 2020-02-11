#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - function that computes the absolute value of an integer
 *
 *
 *
 *
 * Return: 0
 */

int _abs(int)
{
	int num;

	if (num < 0)
	{
		putchar(-num);
	}
	if (num >= 0)
	{
		putchar(num);
	}

	return (0);
}
