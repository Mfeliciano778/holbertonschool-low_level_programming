#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: pointer where dogs are stored
 *
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if(d)
	{
		free(d->name);
		free(d->owner);
	}
	free(d);
}
