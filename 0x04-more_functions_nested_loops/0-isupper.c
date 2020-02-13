#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - program checks to see if
 * c is lowercase or uppercase.
 *
 * Return: 0
 */
int main(void)
{
	char c;

	if (c <= 'A' && c >= 'Z')
	{
		return (1);
	}
	return (0);
}
