#include <stdio.h>
#include <stdlib.h>
/**
 * main - function prints all single digit numbers
 * of base 10 starting from 0
 *
 *
 * Return: 0
 */
int main(void)
{
	char let1;

	let1 = 'z';

	while (let1 >= 'a')
	{
		putchar(let1);
		let1--;
	}
	putchar('\n');
	return (0);
}
