#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - the dog life is free
 * @d: the dest of the dog
 *
 * Return: Always 0
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
