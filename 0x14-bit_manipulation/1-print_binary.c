#include "holberton.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: the number that gets passed
 *
 * Return: always 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int n_cpy = n >> 1;
	unsigned long int num = 1;

	while (n_cpy != 0)
	{
		num = num << 1;
		n_cpy = n_cpy >> 1;
	}
	while (num != 0)
	{
		_putchar('0' + ((n & num) == num));
		num = num >> 1;
	}
}
