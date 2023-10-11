#include "dog.h"
/**
 * init_dog - function
 * @d: struct
 * @name: one
 * @age: two
 * @owner: three
 *
 * Return (d): success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
