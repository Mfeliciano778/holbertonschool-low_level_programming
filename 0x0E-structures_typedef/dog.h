#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new struct called dog
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 *
 * Return: Always 0
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
#ifndef DOG_T
#define DOG_T

/**
 * struct dog - new struct called dog
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 *
 * Return: Always 0
 */
typedef struct dog dog_t
{
        char *name;
        char *owner;
        float age;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
