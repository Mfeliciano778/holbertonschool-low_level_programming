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
	int num;

	int num2;

	int num3;

	int num4;

	for (num = '0'; num <= '2'; num++)
	{

		for (num2 = '0'; num2 <= '9'; num2++)
		{
			if (num >= '2' && num2 >= '4')
				break;

			for (num3 = '0'; num3 <= '5'; num3++)
			{

				for (num4 = '0'; num4 <= '9'; num4++)
				{
					putchar(num);
					putchar(num2);
					putchar(':');
					putchar(num3);
					putchar(num4);
					putchar('\n');
				}
				}
				}
				}
}
