#include "dog.h"
#include "main.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Dog information
 * @name: Name of the dog
 * @age: Dog's age
 * @owner: Dog owner's identity
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name  = name;
		d->age = age;
		d->owner = owner;
	}
}
