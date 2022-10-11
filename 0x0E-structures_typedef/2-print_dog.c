#include "dog.h"
#include <stdio.h>
#include "main.h"

/**
 * print_dog - Prints a struct dog
 * @d: Dog's identity
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->age == NULL)
		d->age = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n Age: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
