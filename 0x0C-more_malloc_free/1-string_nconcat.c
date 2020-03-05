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
	unsigned int total;
	char *s3;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	else
	{
	for (counter = 0; s1[counter]; counter++)
		total += counter;

	for (index = 0; s2[index]; index++)
		;

	if (n >= index)
		total += index;
	else if (n < index)
		total += n;
	}
	s3 = malloc(total * sizeof(char));
		if (s3 == NULL)
			return (NULL);

	return (s3);
}
