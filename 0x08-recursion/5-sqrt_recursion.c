#include "holberton.h"
#include <stdio.h>
int small_sqrt(int n, int i);

/**
 * _sqrt_recursion - ode for Holberton School students.
 * @n: number we are square rooting.
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (small_sqrt(n, 1));
}

/**
 * small_sqrt - function calculates the square root of a number
 * @n: number we are square rooting.
 * @i: number we using to find the sqaure root.
 *
 * Return: Always 0
 */
int small_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (small_sqrt(n, i + 1));
}
