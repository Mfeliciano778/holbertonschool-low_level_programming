#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _isdigit - program checks to see if
 * c is a digit
 *
 * Return: 0
 */
int _isdigit(int n)
{

	if (n <= '9' && n >= '0')
	{
		return (1);
	}
	return (0);
}
