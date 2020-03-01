#include <stdio.h>
#include "holberton.h"

/**
 * main - function that prints the name of the program in the output.
 * @argc: a count of the arguments supplied to the program.
 * @argv: an array of pointers to the strings which are those arguments.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
