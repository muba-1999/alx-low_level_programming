#ifndef DOG_H
#define DOG_H

/**
 * struct dog - stracture containing dog details
 * @name: dogs name
 * @age: the dogs age
 * @owner: the dogs owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
