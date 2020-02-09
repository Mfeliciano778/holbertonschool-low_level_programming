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
	int num;
	int num2;

	for (num = '0'; num <= '9'; num++)
	{
	for (num2 = '0'; num2 <= '9'; num2++)
	{
		putchar(num);
		putchar(num2);
		if (num != '9' | num2 != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}       
	}
	putchar('\n');

	return (0);
}
