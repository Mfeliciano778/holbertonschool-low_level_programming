#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function initialize a variable of type struct dog
 * @d: pointer of type struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
