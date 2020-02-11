#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * print_last_digit - program that prints the last
 * digit of a number
 *
 * @num: character we are testing
 *
 * Return: 0
 */
int print_last_digit(int num)
{
	int d = num % 10;

	if (d < 0)
		d *= -1;

	_putchar(d +  '0');
	return (d);
}
