#include "holberton.h"

/**
 * puts2 - prints every other character of a string.
 *
 * @str: pointer we are using for string
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int count = 0;
	int leng = 0;

	while (str[leng] != '\0')
		leng++;
	leng--;
	while (count <= leng)
	{
		_putchar(str[count]);
		count += 2;
	}
	_putchar('\n');
}
