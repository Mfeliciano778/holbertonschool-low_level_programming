#include "holberton.h"
#include <stdio.h>

/**
 * *cap_string - function that capitalizes all words of a string.
 *
 * @str: pointer we are getting the string from.
 *
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	int sep[] = {' ', 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};


	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	{
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
	}
	return (str);
}
