#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - struct for describing dogs
 * @name: The name of the dog
 * @age: How old the dog is
 * @owner: The owener of the dog's name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
