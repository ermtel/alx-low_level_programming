#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory held by struct dog.
 * @d: the struct dog.
 * Return: void.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
