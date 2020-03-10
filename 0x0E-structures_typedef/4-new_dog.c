#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
char *_strdup(char *str);
/**
 * *new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *nmecpy;
	char *owncpy;

	dog = malloc(sizeof(dog_t));
		if (!dog)
			return (NULL);
	nmecpy = _strdup(name);
	owncpy = _strdup(owner);

	if (!nmecpy || !owncpy)
	{
		free(owncpy);
		free(nmecpy);
		free(dog);
		return (NULL);
	}
	dog->name = nmecpy;
	dog->age = age;
	dog->owner = owncpy;

	return (dog);
}
/**
 * *_strdup - function returns a pointer to a newly allocated space in
 * memory
 * @str: pointer with copy of the string given as a parameter
 *
 *
 * Return: Always 0
 */
char *_strdup(char *str)
{

	int i;
	int counter = 0;
	char *clonestr;

	if (str == NULL)
		return (NULL);

	for (counter = 0; str[counter]; counter++)
		;

	clonestr = malloc(counter * sizeof(char) + 1);
		if (clonestr == NULL)
			return (NULL);

	for (i = 0; i < counter; i++)
		clonestr[i] = str[i];

	clonestr[i] = '\0';

	return (clonestr);
}
