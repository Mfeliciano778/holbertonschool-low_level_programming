#include "holberton.h"
#include <stdio.h>

/**
 * *rot13 - function that encodes a string in rot13.
 *
 * Return: Always 0.
 */
char *rot13(char *str)
{
	char al[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char rot[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; al[j]; j++)
		{
			if (str[i] == al[j])
			{
				str[i] = rot[j];
				break;
			}
		}
	}
	return (str);
}
