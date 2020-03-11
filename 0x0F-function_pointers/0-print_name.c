#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name(char *name, void(*f)(char *))
{
	if (f == NULL)
		return (NULL);

	f(name);
}
