#include "holberton.h"
#include <stdio.h>

/**
 * *leet - A function that encodes a string into 1337.
 *
 * Return: Always 0.
 */
char *leet(char *str)
{
	char let[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char rep[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; let[j]; j++)
		{
			if(str[i] == let[j])
			{
				str[i] = rep[j];
			}
		}
	}
	return (str);
}
