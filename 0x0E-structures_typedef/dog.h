#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new struct containing information about a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: No additional description required
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t: New name for type struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
