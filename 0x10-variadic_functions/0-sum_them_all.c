#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - fucntion that returns the sum of all its parameters
 * @n: sum of all the numbers
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i;
	unsigned int sum = 0;

	va_start(arg_list, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg_list, int);
	}
	va_end(arg_list);

	return (sum);
}
