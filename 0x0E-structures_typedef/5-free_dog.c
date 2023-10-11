#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function frees dogs
 *
 * @d: the dog d data
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
		{
			free(d->name);
		}
		if (d->owner)
		{
			free(d->owner);
		}
	}
}
