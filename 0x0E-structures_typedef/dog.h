#ifndef dog
#define dog

#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

struct dog {
	char *name;
	float age;
	char *owner;
};

#endif
