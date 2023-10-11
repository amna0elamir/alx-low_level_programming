#include "dog.h"
#include <stdlib.h>
/*
 * init_dog - func initialize var of type struct dog
 * @d: struct pointer
 * @name: element of struct
 * @age: element of struct
 * @owner: element of struct
 *
 * Return : nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
