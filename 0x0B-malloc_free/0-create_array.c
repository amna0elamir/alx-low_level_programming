#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - func creates an array of chars, and fill with specific char.
 * @size: size of the array
 * @c: input string
 *
 * Return: Null or array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
