#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers
 * @separator: pointer holds the string between numbers
 * @n: the number of arguments
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int indexer;

	va_start(num, n);

	for (indexer = 0; indexer < n; indexer++)
	{
		printf("%i", va_arg(num, unsigned int));

		if (separator != NULL && indexer < n - 1)
		printf("%s", separator);
	}
	va_end(num);
	putchar('\n');
}
