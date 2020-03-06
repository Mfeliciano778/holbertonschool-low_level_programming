#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - function concatenates two strings.
 * @s1: pointer contains a string we are concatenating
 * @s2: pointer contains a string we are concatenating
 * @n: number of bytes from s2 we are concatenating
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int counter, index;
	unsigned int total = 0;
	char *s3;

	if (s1 != NULL)
	{
		for (counter = 0; s1[counter]; counter++)
			;
	}
	if (s2 != NULL)
	{
		for (index = 0; s2[index]; index++)
			;
	}

	total = counter;

	if (n >= index)
		total += index;
	else
		total += n;

	s3 = malloc((total + 1) * sizeof(char));
		if (s3 == NULL)
			return (NULL);
	for (counter = 0; s1[counter]; counter++)
		s3[counter] = s1[counter];
	for (index = 0; index < (total - counter); index++)
		s3[counter + index] = s2[index];
	s3[counter + index] = '\0';

	return (s3);
}
