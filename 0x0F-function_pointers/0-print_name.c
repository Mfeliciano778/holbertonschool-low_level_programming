#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: function pointer we are using
 *
 * Return: Nothing.
 */
void print_name(char *name, void(*f)(char *))
{
	if (f == NULL)
		return (NULL);

	f(name);
}
