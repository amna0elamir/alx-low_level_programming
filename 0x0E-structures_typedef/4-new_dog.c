#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog struct
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cp_name, *cp_owner;
	int len_name = 0, len_owner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	cp_name = malloc(len_name + 1);
	if (cp_name == NULL)
		return (NULL);
	cp_owner = malloc(len_owner + 1);
	if (cp_owner == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		cp_name = name[i];
	cp_name[i] = '\0';
	for (i = 0; owner[i]; i++)
		cp_owner[i] = owner[i];
	cp_owner[i] = '\0';

	new_dog->name = cp_name;
	new_dog->age = age;
	new_dog->owner = cp_owner;
	return (new_dog);
}
