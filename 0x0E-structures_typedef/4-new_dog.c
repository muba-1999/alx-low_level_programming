#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Entry point
 * @name: name of the dog
 * @age: dogs age
 * @owner: name of dogs owner
 *
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
