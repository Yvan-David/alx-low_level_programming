#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints struct
 * @d: name of a struct
 */
void print_dog(struct dog *d)
{
	char *h;

	h = "(nil)";

	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = h;
	if (d->owner == NULL)
		d->owner = h;
	printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
}
