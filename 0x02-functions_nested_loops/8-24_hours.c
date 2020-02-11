#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * jack_bauer - function that computes the absolute value of an integer
 *
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int num, num2, num3, num4;

	for (num = '0'; num <= '2'; num++)
	{

		for (num2 = '0'; num2 <= '9'; num2++)
		{

			for (num3 = '0'; num3 <= '5'; num3++)
			{

				for (num4 = '0'; num4 <= '9'; num4++)
				{
					if ((num <= '2' && num2 <= '3') || num < '2')
					{
					_putchar(num);
					_putchar(num2);
					_putchar(':');
					_putchar(num3);
					_putchar(num4);
					_putchar('\n');
					}
					else
						break;
				}
			}
		}
	}
}
