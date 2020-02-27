#include "holberton.h"
#include <stdio.h>
int find_prime(int n, int counter);

/**
 * is_prime_number - function returns 1 if the input is a prime number
 * otherwise return 0.
 * @n: number we are testing against.
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	return (find_prime(n, 2));
}

/**
 * find_prime - function tests if a number is a prime number.
 * @n: number we are tesing.
 * @counter: number we are usin to test.
 *
 * Return: Always 0
 */
int find_prime(int n, int counter)
{
	if (counter < n && n >= 1)
	{
		if (n % counter == 0)
			return (0);
		return (find_prime(n, counter + 1));
	}
	else if (n < 0 || n == 1)
		return (0);

	else
	return (1);
}
