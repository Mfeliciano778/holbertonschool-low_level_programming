#include "holberton.h"
#include <stdio.h>

/**
 * *cap_string - function that capitalizes all words of a string.
 *
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i, j;
	int sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}','\0'};

	for (i = 0; str[i]; i++)
	{
		for (j = 0; sep[j]; j++)
		{
			if (str[i] == sep[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
