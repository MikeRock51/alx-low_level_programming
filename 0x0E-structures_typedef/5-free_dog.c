#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs
 * @d: The dog's profile
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
