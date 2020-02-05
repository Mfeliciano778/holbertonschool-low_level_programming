#include <stdio.h>

/**
 * main - function that prints a string
 *
 *
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	printf("size of a long long %lu byte(s)\n", sizeof(double));
	return (0);
}
