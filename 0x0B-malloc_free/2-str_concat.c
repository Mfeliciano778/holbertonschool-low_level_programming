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
	int counter, index;

	for (counter = 0; s1[counter]; counter++)
		;

	for (index = 0; s2[index]; index++)
		s1[counter] = s2[index];

	s1[counter] = '\0';

	bothstrings = malloc(sizeof(s1) + 1);

		if (s1 == NULL && s2 == NULL)
			return (NULL);
	else if (bothstrings == NULL)
			return (NULL);

	free(bothstrings);

	return (bothstrings);
}
