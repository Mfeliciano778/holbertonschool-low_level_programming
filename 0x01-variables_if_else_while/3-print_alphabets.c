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
	char alphabet;
	char let2;

	alphabet = 'a';
	let2 = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (let2 <= 'Z')
	{
		putchar(let2);
		let2++;
	}
	putchar('\n');
	return (0);
}
