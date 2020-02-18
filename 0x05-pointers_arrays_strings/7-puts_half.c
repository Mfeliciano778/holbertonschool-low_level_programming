#include "holberton.h"

/**
 * puts_half - prints the second half of a string
 *
 * @str: pointer we are using for the string
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int length = 0;
	int half = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	length--;
	
	if (length % 2 == 1)
		half = (length - 1) / 2;

	else
		half = length / 2;

	while (str[half] != str[length])
	{
		half++;
		_putchar(str[half]);
	}
	_putchar('\n');
}
