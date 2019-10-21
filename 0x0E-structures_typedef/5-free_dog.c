#include "dog.h"

/**
 * free_dog - Function frees dogs
 * @d: the dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
