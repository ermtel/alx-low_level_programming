#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type struct dog.
 * @d: the structure name.
 * @name: the name of the dog to be initialized.
 * @age: the age of the dog to be initialized.
 * @owner: the owner of the dog to be initialized.
 * Return: Void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
