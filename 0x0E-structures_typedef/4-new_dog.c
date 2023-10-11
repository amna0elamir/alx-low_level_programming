#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nlen, olen, i;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (nlen = 0; name[nlen]; nlen++)
		;
	nlen++;
	new_dog->name = malloc(nlen * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < nlen; i++)
		new_dog->name[i] = name[i];
	new_dog->age = age;
	for (olen = 0; owner[olen]; olen++)
		;
		olen++;
	new_dog->owner = malloc(olen * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < olen; i++)
		new_dog->owner[i] = owner[i];
	return (new_dog);
}
