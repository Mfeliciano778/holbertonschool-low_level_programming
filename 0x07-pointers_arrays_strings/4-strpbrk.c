#include "holberton.h"
#include <stdio.h>

/**
 * *_strpbrk - function that searches a string for any sets of bytes
 * @s: pointer that holds the string from accept
 * @accept: pointer that holds the bytes of a string
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
