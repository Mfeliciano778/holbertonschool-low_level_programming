#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - function concatenates two strings
 * @s1: one string we are concatenating
 * @s2: second string we are conacatenating
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *bothstrings;
	int counter;
	int leng1 = 0;
	int leng2 = 0;

	if (s1 != NULL)
	{
		for (leng1 = 0; s1[leng1]; leng1++)
			;
	}

	if (s2 != NULL)
	{
		for (leng2 = 0; s2[leng2]; leng2++)
			;
	}

	bothstrings = malloc((leng1 + leng2 + 1) * sizeof(char));
		if (bothstrings == NULL)
			return (NULL);

	for (counter = 0; counter < s1[counter]; counter++)
		bothstrings[counter] = s1[counter];

	for (counter = 0; counter < leng2; counter++)
		bothstrings[counter + leng1] = s2[counter];

	bothstrings[counter + leng1] = '\0';
	return (bothstrings);
}
