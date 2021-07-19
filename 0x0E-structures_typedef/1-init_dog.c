#include "dog.h"

/**
 * init_dog - Entry point
 * struct dog - contains information about the dog
 * @d: pointer to struct
 * @name: the dogs name
 * @age: dogs age
 * @owner: dogs owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
