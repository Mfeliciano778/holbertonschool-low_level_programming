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
	char alpha = 'a'; 

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
