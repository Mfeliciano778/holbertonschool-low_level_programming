#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_stngs - function that prints strings
 * @separator: pointer holds the string that separates the strings
 * @n: number of strings
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int indexer;

	va_start(str, n);

	for (indexer = 0; indexer < n; indexer++)
	{
		printf("%s", va_arg(str, unsigned char *));

		if (separator != NULL && indexer < n - 1)
			printf("%s", separator);
	}
	va_end(str);
	putchar('\n');
}
