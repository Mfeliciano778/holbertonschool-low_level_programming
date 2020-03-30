#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary numbert to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: Always 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int char_holder = 0;
	int count;

	if (!b)
		return (0);

	for (count = 0; b[count]; count++)
	{
		if (b[count] == '1')
			char_holder = char_holder * 2 + 1;
		else if (b[count] == '0')
			char_holder *= 2;
		else
			return (0);
	}
	return (char_holder);
}
