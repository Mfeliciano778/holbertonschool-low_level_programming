#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - function returns a pointer to a newly allocated space in memory
 * @str: pointer with copy of the string given as a parameter
 *
 *
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int counter = 0;
	char *clonestr;

	if (str == NULL)
		return (NULL);

	clonestr = malloc(counter * sizeof(*str));

	for (counter = 0; str[counter]; counter++)
		clonestr[counter] = str[counter];

	return (clonestr);
}
