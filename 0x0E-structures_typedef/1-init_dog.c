#include "dog.h"

/**
 * init_dog - a struct fn
 *
 * @d: the d dog
 *
 * @name: the name of the dog
 *
 * @age: the age of the dog
 *
 * @owner: the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
