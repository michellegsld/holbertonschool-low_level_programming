#include "dog.h"

/**
 * *new_dog - Function creates a new dog
 * @name: The name of the dog
 * @age: How old the dog is
 * @owner: The dog owner's name
 *
 * Return: Either NULL or new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);

}
