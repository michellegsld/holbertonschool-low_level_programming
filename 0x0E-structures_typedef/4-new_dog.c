#include "dog.h"

int _strlen(char *s);

char *_strcpy(char *dest, char *src);

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
	int namelen = _strlen(name);
	int ownerlen = _strlen(owner);
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(namelen * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(ownerlen * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_dog->name, name);
	new_dog->age = age;
	_strcpy(new_dog->owner, owner);

	return (new_dog);

}

/**
 * _strlen - Function similar to strlen, returns string length
 * @s: The string that the length must be determined of
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * *_strcpy - Copies the string pointed to by src into dest
 * @dest: String being copied over
 * @src: String being copied from
 *
 * Return: Always the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];

	return (dest);
}
