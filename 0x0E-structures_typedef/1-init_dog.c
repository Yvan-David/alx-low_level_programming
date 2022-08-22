#include "dog.h"
/**
 * init_dog - initialise struct
 * @name: argue
 * @age: argue
 * @owner: argue
 * @d: name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(d->name) = name;
	(d->age) = age;
	(d->owner) = owner;
}
