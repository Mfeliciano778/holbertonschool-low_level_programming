#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - Function compares two strings.
 *
 * @s1: pointer where the string we are comparing is.
 * @s2: pointer where the string we are comparing is.
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int str = 0;

	while (s1[str] == s2[str] && s1[str] && s2[str])
		str++;

	return (s1[str] - s2[str]);
}
