#include "holberton.h"
#include <stdio.h>

/**
 * print_chessboard - function that prints a chessboard
 * @a: pointer we are gettting the piece names from
 *
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int chessrow, chesscol;

	for (chessrow = 0; chessrow < 8; chessrow++)
	{
		for (chesscol = 0; chesscol < 8; chesscol++)
		{
			_putchar(a[chessrow][chesscol]);
		}
		_putchar(10);
	}
}
