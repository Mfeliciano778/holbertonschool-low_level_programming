#include <stdlib.h>
#include <stdio.h>
/**
 * main - function prints the alphabet in lowercase, followed by a new line
 *
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	i = 'a';

	if (i < 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
