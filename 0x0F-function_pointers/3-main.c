#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - function that checks code for holberton sturdents
 * @argc: number of arguments
 * @argv: double pointer that holds arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int (*result)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	result = get_op_func(argv[2]);
	if (*result == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num2 = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);

	printf("%d\n", result(num1, num2));

	return (0);
}
