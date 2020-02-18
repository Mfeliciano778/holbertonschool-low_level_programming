#include "holberton.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer we are getting the string from`
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int count = 0;
	int rev = 0;
	char tmp[999];
	int dec;

	while (s[count] != '\0')
	{
		tmp[count] = s[count];
		count++;
	}
	--count;
	dec = count;
	while (rev <= count)
	{
		s[rev] = tmp[dec];
		rev++;
		dec--;
	}
	s[rev] = '\0';
}
