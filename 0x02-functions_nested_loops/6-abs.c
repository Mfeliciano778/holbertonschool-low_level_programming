#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _abs - function that computes the absolute value of an integer
 *
 * @num: variable used to pass numbers into it
 *
 *
 * Return: 0
 */

int _abs(int num)
{

	if (num < 0)
	{
		return (num *= -1);
	}
	if (num >= 0)
	{
		return (num);
	}

	return (0);
}
