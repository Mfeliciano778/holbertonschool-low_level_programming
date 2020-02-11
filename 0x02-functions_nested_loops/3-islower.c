#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _islower - program checks to see if
 * c is lowercase or uppercase
 *
 * @c: character we are testing
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	return (0);
}
