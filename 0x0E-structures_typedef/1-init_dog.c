#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function initialize variable of type struct dog
 * @d: struct pointer
 * @name: element of struct
 * @age: element of struct
 * @owner: element of struct
 * Return: Nothing
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
