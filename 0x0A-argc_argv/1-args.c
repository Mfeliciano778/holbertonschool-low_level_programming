#include <stdio.h>
#include "holberton.h"

/**
 * main - function that prints the number of arguments passed into it
 * @argc: counts the amount of arguments
 * @argv: contains all the pointers with strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	--argc;
	printf("%d\n", argc);
	(void)argv;
	return (0);
}
