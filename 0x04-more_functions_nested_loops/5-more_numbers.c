#include "holberton.h"

/**
 * more_numbers - prints the numbers 0 to 14, 10
 * times
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int l, t;

	for (t = 0; t <= 10; t++)
	{
		for (l = 0; l <= 14; l++)
		{
			if (l >= 10)
			{
				_putchar(l / 10 + '0');
			}
			_putchar(l % 10 + '0');
		}
		_putchar('\n');
	}
}
