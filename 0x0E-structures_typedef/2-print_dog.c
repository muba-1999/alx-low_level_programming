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
	if (d->name == NULL)
	{
		printf("Name: nil\n");
	}
	if (d->age == NULL)
	{
		printf("Age: nil\n");
	}
	if (d-> owner == NULL)
	{
		printf("Owner: nil\n");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);

}
