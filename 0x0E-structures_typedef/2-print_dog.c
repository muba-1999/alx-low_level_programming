#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints the struct
 * struct dog - contains the elements of dog
 * @d: pointer to struct
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		printf("nil");
	}
	d->name = name;
	d->age = age;
	d->owner = owner;

}
