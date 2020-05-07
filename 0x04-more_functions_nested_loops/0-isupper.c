#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _isupper - program checks to see if
 * c is lowercase or uppercase.
 * @c: variable we are checking for an upper
 * Return: 0
 */
int _isupper(int c)
{

	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}
