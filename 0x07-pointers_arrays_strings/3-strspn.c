#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - function gets the length of a prefix substring
 * @s: pointer containing bytes
 * @accept: pointer where bytes are from
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
