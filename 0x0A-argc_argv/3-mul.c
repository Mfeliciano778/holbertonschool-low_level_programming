#include <stdio.h>
#include "holberton.h"

/**
 * main - function multiplies two numbers
 * @argc: counts the arguments it recieves
 * @argv: contains the pointers to the strings
 *
 * Return: Always 0
 */
int main (int argc, char *argv[])
{
	int count, sum;

	if (argc > 1)
	{
		for (count = 0; count < argc; count++)
		{
			sum = argv[1] * argv[2];
		}
	}
	else
		printf("Error\n");
		
	return (1);
}
