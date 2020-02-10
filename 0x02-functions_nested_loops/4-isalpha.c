#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - program checks to see if
 * c is alphabetic character
 *
 * @c: character we are testing
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
        if (c <= 'z' && c >= 'a')
        {
                return (1);
        }
        return (0);
}
