#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _isupper - program checks to see if
 * c is lowercase or uppercase.
 *
 * Return: 0
 */
int _isupper(char c)
{

	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}
