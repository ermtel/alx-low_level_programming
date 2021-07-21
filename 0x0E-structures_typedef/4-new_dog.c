#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: the name of the new dog.
 * @age: the age of the new dog.
 * @owner: the owner of the newdog.
 * Return:the structure to the new dog or NULL upon failure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int i, namelen, ownerlen;

	n_dog = malloc(sizeof(*n_dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	for (namelen = 0; name[namelen] != '\0'; namelen++)
		;
	n_dog->name = malloc(sizeof(char) * (namelen + 1));
	if ((n_dog->name) == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
		n_dog->name[i] = name[i];
	n_dog->name[i] = '\0';
	n_dog->age = age;
	for (ownerlen = 0; owner[ownerlen] != '\0'; ownerlen++)
		;
	n_dog->owner = malloc(sizeof(char) * (ownerlen + 1));
	if (n_dog->owner == NULL)
	{
		free(n_dog->owner);
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i < ownerlen; i++)
		n_dog->owner[i] = owner[i];
	n_dog->owner[i] = '\0';
	return (n_dog);
}
