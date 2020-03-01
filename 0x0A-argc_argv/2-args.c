#include <stdio.h>
#include "holberton.h"
/**
 * main - function prints all arguments it is passed.
 * @argc: counts all arguments that get passed.
 * @argv: contains all pointers that hold strings.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc >= 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	else
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
