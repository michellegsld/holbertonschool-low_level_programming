#include "dog.h"

/**
 * init_dog - Function initializes a variable of type struct dog
 * @d: The variable of type struct dog
 * @name: The name of the dog
 * @age: How old the dog is
 * @owner: The dog owner's name
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
