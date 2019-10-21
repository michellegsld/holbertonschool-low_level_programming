#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: The variable of type struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: ");
	if (d->name)
		printf("%s\n", d->name);
	else
		printf("(nil)\n");

	printf("Age: ");
	if (d->age)
		printf("%f\n", d->age);
	else
		printf("(nil)\n");

	printf("Owner: ");
	if (d->owner)
		printf("%s\n", d->owner);
	else
		printf("(nil)\n");
}
