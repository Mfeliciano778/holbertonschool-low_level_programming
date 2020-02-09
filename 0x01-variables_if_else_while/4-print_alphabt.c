#include <stdlib.h>
#include <stdio.h>
/**
 * main - function that prints the alphabet in lowercase,
 * followed by a new line
 *
 *
 * Return: 0
 */
int main(void)
{
	char let1;

	let1 = 'a';

	while (let1 <= 'z')
	{
		if (let1 != 'q' && let1 != 'e')
	{
			putchar(let1);
	}
		let1++;
	}
	putchar('\n');
	return (0);
}
